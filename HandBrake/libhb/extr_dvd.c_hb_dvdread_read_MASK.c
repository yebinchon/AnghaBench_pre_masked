
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_22__ {int pack_len; size_t cell_cur; size_t cell_end; scalar_t__ next_vobu; int cell_next; int in_cell; int cell_overlap; int in_sync; scalar_t__ cur_cell_id; scalar_t__ cur_vob_id; int block; int title_start; int title_block_count; int title_end; int file; TYPE_4__* pgc; int h; } ;
typedef TYPE_6__ hb_dvdread_t ;
struct TYPE_23__ {TYPE_6__ dvdread; } ;
typedef TYPE_7__ hb_dvd_t ;
struct TYPE_21__ {int new_chap; } ;
struct TYPE_24__ {TYPE_5__ s; int * data; } ;
typedef TYPE_8__ hb_buffer_t ;
struct TYPE_18__ {int next_vobu; int next_video; int prev_vobu; } ;
struct TYPE_17__ {scalar_t__ vobu_vob_idn; scalar_t__ vobu_c_idn; int nv_pck_lbn; int vobu_ea; } ;
struct TYPE_25__ {TYPE_2__ vobu_sri; TYPE_1__ dsi_gi; } ;
typedef TYPE_9__ dsi_t ;
struct TYPE_20__ {TYPE_3__* cell_playback; } ;
struct TYPE_19__ {size_t first_sector; scalar_t__ last_sector; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,int *) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_8__**) ;
 TYPE_8__* FUNC_3 (int ) ;
 int FUNC_4 (int,char*,size_t,scalar_t__) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,size_t,...) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_9__*,int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_11( hb_dvd_t * VAR_3 )
{
    hb_dvdread_t *VAR_4 = &(VAR_3->dvdread);
    hb_buffer_t *VAR_5 = FUNC_3( VAR_1 );
 top:
    if( !VAR_4->pack_len )
    {

        dsi_t VAR_6;
        int VAR_7 = 0;





        if ( VAR_4->cell_cur > VAR_4->cell_end )
        {
            FUNC_2( &VAR_5 );
            return ((void*)0);
        }

        for( ;; )
        {
            int VAR_8, VAR_9, VAR_10, VAR_11;

            for( VAR_11 = 1; VAR_11 < 1024; VAR_11++ )
            {
                if( FUNC_0( VAR_4->file, VAR_4->next_vobu, 1, VAR_5->data ) == 1 )
                {



                    if( VAR_11 > 1 && !FUNC_9( VAR_5->data) )
                    {

                        VAR_11 = 1;
                        VAR_4->next_vobu++;
                        continue;
                    }
                    break;
                } else {




                    FUNC_7( "dvd: vobu read error blk %d - skipping to next blk incr %d",
                            VAR_4->next_vobu, (VAR_11 * 10));
                    VAR_4->next_vobu += (VAR_11 * 10);
                }

            }

            if( VAR_11 == 1024 )
            {


                FUNC_7( "dvd: vobu read error blk %d - skipping to cell %d",
                        VAR_4->next_vobu, VAR_4->cell_next );
                VAR_4->cell_cur = VAR_4->cell_next;
                if ( VAR_4->cell_cur > VAR_4->cell_end )
                {
                    FUNC_2( &VAR_5 );
                    FUNC_8(VAR_4->h, VAR_2);
                    return ((void*)0);
                }
                VAR_4->in_cell = 0;
                VAR_4->next_vobu = VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector;
                FUNC_1( VAR_4 );
                VAR_4->cell_overlap = 1;
                continue;
            }

            if ( !FUNC_9( VAR_5->data ) ) {
                (VAR_4->next_vobu)++;
                if( VAR_4->in_sync == 1 ) {
                    FUNC_7("dvd: Lost sync, searching for NAV pack at blk %d",
                           VAR_4->next_vobu);
                    VAR_4->in_sync = 0;
                }
                continue;
            }

            FUNC_10( &VAR_6, &VAR_5->data[VAR_0] );

            if ( VAR_4->in_sync == 0 && VAR_4->cur_cell_id &&
                 (VAR_4->cur_vob_id != VAR_6.dsi_gi.vobu_vob_idn ||
                  VAR_4->cur_cell_id != VAR_6.dsi_gi.vobu_c_idn ) )
            {


                FUNC_7("dvd: left cell %d (%u,%u) for (%u,%u) at block %u",
                       VAR_4->cell_cur, VAR_4->cur_vob_id, VAR_4->cur_cell_id,
                       VAR_6.dsi_gi.vobu_vob_idn, VAR_6.dsi_gi.vobu_c_idn,
                       VAR_4->next_vobu );
                if ( VAR_4->next_vobu != VAR_4->pgc->cell_playback[VAR_4->cell_next].first_sector )
                {
                    VAR_4->next_vobu = VAR_4->pgc->cell_playback[VAR_4->cell_next].first_sector;
                    VAR_4->cur_cell_id = 0;
                    continue;
                }
            }

            VAR_8 = VAR_6.dsi_gi.nv_pck_lbn;
            VAR_9 = VAR_6.dsi_gi.vobu_ea;
            uint32_t VAR_12 = VAR_6.vobu_sri.next_vobu;
            if ( ( VAR_12 & ( 1 << 31 ) ) == 0 ||
                 ( VAR_12 & ( 1 << 30 ) ) != 0 ||
                 ( VAR_12 & 0x3fffffff ) == 0x3fffffff )
            {
                VAR_12 = VAR_6.vobu_sri.next_video;
                if ( ( VAR_12 & ( 1 << 31 ) ) == 0 ||
                     ( VAR_12 & 0x3fffffff ) == 0x3fffffff )
                {

                    VAR_4->block = VAR_8;
                    VAR_4->pack_len = VAR_9;
                    break;
                }
            }
            VAR_10 = VAR_8 + ( VAR_12 & 0x3fffffff );

            if( VAR_9 > 0 &&
                VAR_9 < 1024 &&
                VAR_8 >= VAR_4->next_vobu &&
                ( VAR_8 <= VAR_4->title_start + VAR_4->title_block_count ||
                  VAR_8 <= VAR_4->title_end ) )
            {
                VAR_4->block = VAR_8;
                VAR_4->pack_len = VAR_9;
                VAR_4->next_vobu = VAR_10;
                break;
            }


            if( ++VAR_7 > 1024 )
            {
                FUNC_6( "dvd: couldn't find a VOBU after 1024 blocks" );
                FUNC_2( &VAR_5 );
                FUNC_8(VAR_4->h, VAR_2);
                return ((void*)0);
            }

            (VAR_4->next_vobu)++;
        }

        if( VAR_4->in_sync == 0 || VAR_4->in_sync == 2 )
        {
            if( VAR_4->in_sync == 0 )
            {
                FUNC_7( "dvd: In sync with DVD at block %d", VAR_4->block );
            }
            VAR_4->in_sync = 1;
        }







        if( ( VAR_6.vobu_sri.prev_vobu & (1 << 31 ) ) == 0 ||
            ( VAR_6.vobu_sri.prev_vobu & 0x3fffffff ) == 0x3fffffff )
        {





            if ( VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector < VAR_6.dsi_gi.nv_pck_lbn &&
                 VAR_4->pgc->cell_playback[VAR_4->cell_cur].last_sector >= VAR_6.dsi_gi.nv_pck_lbn )
            {
                FUNC_7( "dvd: null prev_vobu in cell %d at block %d", VAR_4->cell_cur,
                        VAR_4->block );

                VAR_4->cell_cur = VAR_4->cell_next;
                VAR_4->in_cell = 0;
                VAR_4->next_vobu = VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector;
                FUNC_1( VAR_4 );
                VAR_4->cell_overlap = 1;
                goto top;
            }
            else
            {
                if ( VAR_4->block != VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector )
                {
                    FUNC_4(3, "dvd: beginning of cell %d at block %d", VAR_4->cell_cur,
                           VAR_4->block);
                }
                if( VAR_4->in_cell )
                {
                    FUNC_6( "dvd: assuming missed end of cell %d at block %d", VAR_4->cell_cur, VAR_4->block );
                    VAR_4->cell_cur = VAR_4->cell_next;
                    VAR_4->next_vobu = VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector;
                    FUNC_1( VAR_4 );
                    VAR_4->cell_overlap = 1;
                    VAR_4->in_cell = 0;
                } else {
                    VAR_4->in_cell = 1;
                }
                VAR_4->cur_vob_id = VAR_6.dsi_gi.vobu_vob_idn;
                VAR_4->cur_cell_id = VAR_6.dsi_gi.vobu_c_idn;

                VAR_4->cell_overlap = 0;
            }
        }

        if( ( VAR_6.vobu_sri.next_vobu & (1 << 31 ) ) == 0 ||
            ( VAR_6.vobu_sri.next_vobu & 0x3fffffff ) == 0x3fffffff )
        {
            if ( VAR_4->block <= VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector ||
                 VAR_4->block > VAR_4->pgc->cell_playback[VAR_4->cell_cur].last_sector )
            {
                FUNC_4(3, "dvd: end of cell %d at block %d", VAR_4->cell_cur,
                        VAR_4->block);
            }
            VAR_4->cell_cur = VAR_4->cell_next;
            VAR_4->in_cell = 0;
            VAR_4->next_vobu = VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector;
            FUNC_1( VAR_4 );
            VAR_4->cell_overlap = 1;

        }
    }
    else
    {
        if( FUNC_0( VAR_4->file, VAR_4->block, 1, VAR_5->data ) != 1 )
        {



            FUNC_6( "dvd: DVDReadBlocks failed (%d), skipping to vobu %u",
                      VAR_4->block, VAR_4->next_vobu );
            VAR_4->pack_len = 0;
            goto top;
        }
        VAR_4->pack_len--;
    }
    if (VAR_5 != ((void*)0))
    {
        VAR_5->s.new_chap = FUNC_5( VAR_4 );
    }

    VAR_4->block++;

    return VAR_5;
}

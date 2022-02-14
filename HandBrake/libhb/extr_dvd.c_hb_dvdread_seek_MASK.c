
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {float title_block_count; int cell_start; int cell_end; int cell_cur; int next_vobu; int in_sync; scalar_t__ pack_len; TYPE_2__* pgc; scalar_t__ cur_cell_id; } ;
typedef TYPE_3__ hb_dvdread_t ;
struct TYPE_10__ {TYPE_3__ dvdread; } ;
typedef TYPE_4__ hb_dvd_t ;
struct TYPE_8__ {TYPE_1__* cell_playback; } ;
struct TYPE_7__ {int last_sector; int first_sector; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1( hb_dvd_t * VAR_0, float VAR_1 )
{
    hb_dvdread_t *VAR_2 = &(VAR_0->dvdread);
    int VAR_3, VAR_4;
    int VAR_5;

    VAR_3 = VAR_1 * VAR_2->title_block_count;

    for( VAR_5 = VAR_2->cell_start; VAR_5 <= VAR_2->cell_end; VAR_5++ )
    {
        VAR_4 = VAR_2->pgc->cell_playback[VAR_5].last_sector + 1 -
            VAR_2->pgc->cell_playback[VAR_5].first_sector;

        if( VAR_3 < VAR_4 )
        {
            VAR_2->cell_cur = VAR_5;
            VAR_2->cur_cell_id = 0;
            FUNC_0( VAR_2 );


            VAR_2->next_vobu = VAR_2->pgc->cell_playback[VAR_5].first_sector + VAR_3;
            VAR_2->pack_len = 0;
            break;
        }

        VAR_3 -= VAR_4;
    }

    if( VAR_5 > VAR_2->cell_end )
    {
        return 0;
    }





    VAR_2->in_sync = 2;

    return 1;
}

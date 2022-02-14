
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_19__ {int index; } ;
typedef TYPE_11__ hb_title_t ;
struct TYPE_20__ {int ttn; size_t cell_start; size_t cell_end; size_t cell_cur; int in_sync; scalar_t__ in_cell; scalar_t__ cell_overlap; scalar_t__ pack_len; scalar_t__ block; scalar_t__ next_vobu; TYPE_10__* pgc; TYPE_14__* ifo; scalar_t__ title_block_count; scalar_t__ title_end; scalar_t__ title_start; int vts; int reader; int file; TYPE_3__* vmg; } ;
typedef TYPE_12__ hb_dvdread_t ;
struct TYPE_21__ {TYPE_12__ dvdread; } ;
typedef TYPE_13__ hb_dvd_t ;
struct TYPE_31__ {scalar_t__ first_sector; scalar_t__ last_sector; } ;
struct TYPE_30__ {TYPE_7__* pgci_srp; } ;
struct TYPE_29__ {TYPE_10__* pgc; } ;
struct TYPE_28__ {TYPE_5__* title; } ;
struct TYPE_27__ {TYPE_4__* ptt; } ;
struct TYPE_26__ {int pgcn; int pgn; } ;
struct TYPE_25__ {TYPE_2__* tt_srpt; } ;
struct TYPE_24__ {TYPE_1__* title; } ;
struct TYPE_23__ {int vts_ttn; int title_set_nr; } ;
struct TYPE_22__ {TYPE_8__* vts_pgcit; TYPE_6__* vts_ptt_srpt; } ;
struct TYPE_18__ {size_t* program_map; size_t nr_of_cells; TYPE_9__* cell_playback; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_14__* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4( hb_dvd_t * VAR_1, hb_title_t *VAR_2, int VAR_3 )
{
    hb_dvdread_t *VAR_4 = &(VAR_1->dvdread);
    int VAR_5, VAR_6;
    int VAR_7;
    int VAR_8 = VAR_2->index;


    VAR_4->vts = VAR_4->vmg->tt_srpt->title[VAR_8-1].title_set_nr;
    VAR_4->ttn = VAR_4->vmg->tt_srpt->title[VAR_8-1].vts_ttn;
    if( !( VAR_4->ifo = FUNC_3( VAR_4->reader, VAR_4->vts ) ) )
    {
        FUNC_2( "dvd: ifoOpen failed for VTS %d", VAR_4->vts );
        return 0;
    }
    if( !( VAR_4->file = FUNC_0( VAR_4->reader, VAR_4->vts,
                                  VAR_0 ) ) )
    {
        FUNC_2( "dvd: DVDOpenFile failed for VTS %d", VAR_4->vts );
        return 0;
    }


    VAR_5 = VAR_4->ifo->vts_ptt_srpt->title[VAR_4->ttn-1].ptt[0].pgcn;
    VAR_6 = VAR_4->ifo->vts_ptt_srpt->title[VAR_4->ttn-1].ptt[0].pgn;
    VAR_4->pgc = VAR_4->ifo->vts_pgcit->pgci_srp[VAR_5-1].pgc;
    VAR_4->cell_start = VAR_4->pgc->program_map[VAR_6 - 1] - 1;
    VAR_4->cell_end = VAR_4->pgc->nr_of_cells - 1;
    VAR_4->title_start = VAR_4->pgc->cell_playback[VAR_4->cell_start].first_sector;
    VAR_4->title_end = VAR_4->pgc->cell_playback[VAR_4->cell_end].last_sector;


    VAR_4->title_block_count = 0;
    for( VAR_7 = VAR_4->cell_start; VAR_7 <= VAR_4->cell_end; VAR_7++ )
    {
        VAR_4->title_block_count += VAR_4->pgc->cell_playback[VAR_7].last_sector + 1 -
            VAR_4->pgc->cell_playback[VAR_7].first_sector;
    }


    VAR_5 = VAR_4->ifo->vts_ptt_srpt->title[VAR_4->ttn-1].ptt[VAR_3-1].pgcn;
    VAR_6 = VAR_4->ifo->vts_ptt_srpt->title[VAR_4->ttn-1].ptt[VAR_3-1].pgn;
    VAR_4->pgc = VAR_4->ifo->vts_pgcit->pgci_srp[VAR_5-1].pgc;


    VAR_4->cell_cur = VAR_4->pgc->program_map[VAR_6-1] - 1;
    FUNC_1( VAR_4 );

    VAR_4->block = VAR_4->pgc->cell_playback[VAR_4->cell_cur].first_sector;
    VAR_4->next_vobu = VAR_4->block;
    VAR_4->pack_len = 0;
    VAR_4->cell_overlap = 0;
    VAR_4->in_cell = 0;
    VAR_4->in_sync = 2;

    return 1;
}

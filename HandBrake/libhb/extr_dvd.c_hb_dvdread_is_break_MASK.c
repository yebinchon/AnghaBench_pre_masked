
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {int* program_map; TYPE_7__* cell_playback; } ;
typedef TYPE_8__ pgc_t ;
struct TYPE_19__ {int ttn; int cell_start; scalar_t__ block; TYPE_6__* ifo; } ;
typedef TYPE_9__ hb_dvdread_t ;
struct TYPE_17__ {scalar_t__ first_sector; } ;
struct TYPE_16__ {TYPE_5__* vts_pgcit; TYPE_3__* vts_ptt_srpt; } ;
struct TYPE_15__ {TYPE_4__* pgci_srp; } ;
struct TYPE_14__ {TYPE_8__* pgc; } ;
struct TYPE_13__ {TYPE_2__* title; } ;
struct TYPE_12__ {int nr_of_ptts; TYPE_1__* ptt; } ;
struct TYPE_11__ {int pgcn; int pgn; } ;



__attribute__((used)) static int FUNC_0( hb_dvdread_t * VAR_0 )
{
    int VAR_1;
    int VAR_2, VAR_3;
    int VAR_4 = VAR_0->ifo->vts_ptt_srpt->title[VAR_0->ttn-1].nr_of_ptts;
    pgc_t * VAR_5;
    int VAR_6;

    for (VAR_1 = VAR_4 - 1; VAR_1 >= 0; VAR_1--)
    {

        VAR_2 = VAR_0->ifo->vts_ptt_srpt->title[VAR_0->ttn-1].ptt[VAR_1].pgcn;
        VAR_3 = VAR_0->ifo->vts_ptt_srpt->title[VAR_0->ttn-1].ptt[VAR_1].pgn;
        VAR_5 = VAR_0->ifo->vts_pgcit->pgci_srp[VAR_2-1].pgc;
        VAR_6 = VAR_5->program_map[VAR_3-1] - 1;

        if( VAR_6 < VAR_0->cell_start )
            break;


        if (VAR_5->cell_playback[VAR_6].first_sector == VAR_0->block)
        {
            return VAR_1 + 1;
        }
    }

    return 0;
}

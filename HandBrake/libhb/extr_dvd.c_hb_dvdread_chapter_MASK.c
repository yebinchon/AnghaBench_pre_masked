
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


struct TYPE_17__ {int* program_map; int nr_of_cells; } ;
typedef TYPE_7__ pgc_t ;
struct TYPE_18__ {int ttn; int cell_cur; int cell_overlap; TYPE_6__* ifo; } ;
typedef TYPE_8__ hb_dvdread_t ;
struct TYPE_19__ {TYPE_8__ dvdread; } ;
typedef TYPE_9__ hb_dvd_t ;
struct TYPE_16__ {TYPE_5__* vts_pgcit; TYPE_3__* vts_ptt_srpt; } ;
struct TYPE_15__ {TYPE_4__* pgci_srp; } ;
struct TYPE_14__ {TYPE_7__* pgc; } ;
struct TYPE_13__ {TYPE_2__* title; } ;
struct TYPE_12__ {int nr_of_ptts; TYPE_1__* ptt; } ;
struct TYPE_11__ {int pgcn; int pgn; } ;



__attribute__((used)) static int FUNC_0( hb_dvd_t * VAR_0 )
{
    hb_dvdread_t *VAR_1 = &(VAR_0->dvdread);
    int VAR_2;
    int VAR_3, VAR_4;
    int VAR_5 = VAR_1->ifo->vts_ptt_srpt->title[VAR_1->ttn-1].nr_of_ptts;
    pgc_t * VAR_6;

    for( VAR_2 = VAR_5 - 1;
         VAR_2 >= 0;
         VAR_2-- )
    {

        VAR_3 = VAR_1->ifo->vts_ptt_srpt->title[VAR_1->ttn-1].ptt[VAR_2].pgcn;
        VAR_4 = VAR_1->ifo->vts_ptt_srpt->title[VAR_1->ttn-1].ptt[VAR_2].pgn;
        VAR_6 = VAR_1->ifo->vts_pgcit->pgci_srp[VAR_3-1].pgc;

        if( VAR_1->cell_cur - VAR_1->cell_overlap >= VAR_6->program_map[VAR_4-1] - 1 &&
            VAR_1->cell_cur - VAR_1->cell_overlap <= VAR_6->nr_of_cells - 1 )
        {

            return VAR_2 + 1;
        }
    }


    return -1;
}

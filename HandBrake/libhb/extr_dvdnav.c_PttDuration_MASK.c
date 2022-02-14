
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_18__ {int nr_of_programs; int* program_map; int nr_of_cells; TYPE_6__* cell_playback; int playback_time; } ;
typedef TYPE_7__ pgc_t ;
struct TYPE_19__ {TYPE_5__* vts_pgcit; TYPE_3__* vts_ptt_srpt; } ;
typedef TYPE_8__ ifo_handle_t ;
struct TYPE_17__ {scalar_t__ first_sector; scalar_t__ last_sector; } ;
struct TYPE_16__ {int nr_of_pgci_srp; TYPE_4__* pgci_srp; } ;
struct TYPE_15__ {TYPE_7__* pgc; } ;
struct TYPE_14__ {TYPE_2__* title; } ;
struct TYPE_13__ {TYPE_1__* ptt; } ;
struct TYPE_12__ {int pgcn; int pgn; } ;


 int FUNC_0 (TYPE_7__*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_8__*,int,int *) ;
 int FUNC_2 (int *) ;
 long long FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static uint64_t
FUNC_5(ifo_handle_t *VAR_1, int VAR_2, int VAR_3, int *VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7;
    pgc_t * VAR_8;
    uint64_t VAR_9 = 0;
    int VAR_10, VAR_11;
    int VAR_12;

    *VAR_4 = 0;


    uint32_t VAR_13[VAR_0/32];
    FUNC_2( VAR_13 );
    VAR_6 = VAR_1->vts_ptt_srpt->title[VAR_2-1].ptt[VAR_3-1].pgcn;
    VAR_7 = VAR_1->vts_ptt_srpt->title[VAR_2-1].ptt[VAR_3-1].pgn;
    if ( VAR_6 < 1 || VAR_6 > VAR_1->vts_pgcit->nr_of_pgci_srp || VAR_6 >= VAR_0)
    {
        FUNC_4( "invalid PGC ID %d, skipping", VAR_6 );
        return 0;
    }

    if( VAR_7 <= 0 || VAR_7 > 99 )
    {
        FUNC_4( "scan: pgn %d not valid, skipping", VAR_7 );
        return 0;
    }

    do
    {
        VAR_8 = VAR_1->vts_pgcit->pgci_srp[VAR_6-1].pgc;
        if (!VAR_8)
        {
            *VAR_4 = 0;
            VAR_9 = 0;
            FUNC_4( "scan: pgc not valid, skipping" );
            break;
        }

        if (VAR_8->cell_playback == ((void*)0))
        {
            *VAR_4 = 0;
            VAR_9 = 0;
            FUNC_4("invalid PGC cell_playback table, skipping");
            break;
        }

        if (VAR_7 > VAR_8->nr_of_programs)
        {
            VAR_7 = 1;
            continue;
        }

        VAR_9 += 90LL * FUNC_3( &VAR_8->playback_time );

        VAR_10 = VAR_8->program_map[VAR_7-1] - 1;
        VAR_11 = VAR_8->nr_of_cells - 1;
        for(VAR_12 = VAR_10; VAR_12 <= VAR_11; VAR_12 = FUNC_0(VAR_8, VAR_12))
        {
            *VAR_4 += VAR_8->cell_playback[VAR_12].last_sector + 1 -
                VAR_8->cell_playback[VAR_12].first_sector;
        }
        *VAR_5 = VAR_6;
        VAR_7 = 1;
    } while((VAR_6 = FUNC_1(VAR_1, VAR_6, VAR_13)) != 0);
    return VAR_9;
}

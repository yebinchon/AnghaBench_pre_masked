
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int next_pgc_nr; } ;
typedef TYPE_3__ pgc_t ;
struct TYPE_9__ {TYPE_2__* vts_pgcit; } ;
typedef TYPE_4__ ifo_handle_t ;
struct TYPE_7__ {int nr_of_pgci_srp; TYPE_1__* pgci_srp; } ;
struct TYPE_6__ {TYPE_3__* pgc; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( ifo_handle_t *VAR_1, int VAR_2, uint32_t VAR_3[VAR_0/32] )
{
    int VAR_4;
    pgc_t *VAR_5;

    VAR_3[VAR_2 >> 5] |= (1 << (VAR_2 & 31));

    VAR_5 = VAR_1->vts_pgcit->pgci_srp[VAR_2-1].pgc;
    VAR_4 = VAR_5->next_pgc_nr;
    if ( VAR_4 < 1 || VAR_4 >= VAR_0 || VAR_4 > VAR_1->vts_pgcit->nr_of_pgci_srp )
        return 0;

    return VAR_3[VAR_4 >> 5] & (1 << (VAR_4 & 31))? 0 : VAR_4;
}

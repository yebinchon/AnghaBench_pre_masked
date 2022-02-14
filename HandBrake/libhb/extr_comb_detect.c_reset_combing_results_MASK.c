
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comb_check_nthreads; scalar_t__* block_score; scalar_t__ comb_check_complete; } ;
typedef TYPE_1__ hb_filter_private_t ;



__attribute__((used)) static void FUNC_0( hb_filter_private_t * VAR_0 )
{
    VAR_0->comb_check_complete = 0;
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->comb_check_nthreads; VAR_1++)
    {
       VAR_0->block_score[VAR_1] = 0;
    }
}

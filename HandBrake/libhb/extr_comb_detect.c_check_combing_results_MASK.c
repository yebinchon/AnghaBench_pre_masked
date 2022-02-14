
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comb_check_nthreads; int* block_score; int block_threshold; int mask_box_color; } ;
typedef TYPE_1__ hb_filter_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0( hb_filter_private_t * VAR_3 )
{
    int VAR_4 = VAR_2;

    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_3->comb_check_nthreads; VAR_5++)
    {
        if (VAR_3->block_score[VAR_5] >= ( VAR_3->block_threshold / 2 ))
        {
            if (VAR_3->block_score[VAR_5] <= VAR_3->block_threshold)
            {


                VAR_4 = VAR_1;
                VAR_3->mask_box_color = 2;
            }
            else if (VAR_3->block_score[VAR_5] > VAR_3->block_threshold)
            {
                VAR_3->mask_box_color = 1;
                return VAR_0;
            }
        }
    }

    return VAR_4;
}

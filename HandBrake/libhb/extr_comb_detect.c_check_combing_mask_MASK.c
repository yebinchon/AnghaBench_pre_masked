
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int block_threshold; int block_width; int block_height; int comb_check_complete; int mask_box_x; int mask_box_y; int* block_score; TYPE_2__* mask; } ;
typedef TYPE_3__ hb_filter_private_t ;
struct TYPE_6__ {TYPE_1__* plane; } ;
struct TYPE_5__ {int stride; int width; int* data; } ;



__attribute__((used)) static void FUNC_0( hb_filter_private_t * VAR_0, int VAR_1,
                                int VAR_2, int VAR_3 )
{
    int VAR_4 = VAR_0->block_threshold;
    int VAR_5 = VAR_0->block_width;
    int VAR_6 = VAR_0->block_height;
    int VAR_7, VAR_8;
    int VAR_9 = 0;
    uint8_t * VAR_10;
    int VAR_11, VAR_12, VAR_13;

    for (VAR_13 = 0; VAR_13 < 1; VAR_13++)
    {
        int VAR_14 = VAR_0->mask->plane[VAR_13].stride;
        int VAR_15 = VAR_0->mask->plane[VAR_13].width;

        for (VAR_12 = VAR_2; VAR_12 < (VAR_3 - VAR_6 + 1); VAR_12 = VAR_12 + VAR_6)
        {
            for (VAR_11 = 0; VAR_11 < (VAR_15 - VAR_5); VAR_11 = VAR_11 + VAR_5)
            {
                VAR_9 = 0;

                for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
                {
                    int VAR_16 = VAR_12 + VAR_8;
                    VAR_10 = &VAR_0->mask->plane[VAR_13].data[VAR_16 * VAR_14 + VAR_11];

                    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
                    {



                        if ((VAR_11 + VAR_7) == 0)
                        {
                            VAR_9 += VAR_10[0] & VAR_10[1];
                        }
                        else if ((VAR_11 + VAR_7) == (VAR_15 -1))
                        {
                            VAR_9 += VAR_10[-1] & VAR_10[0];
                        }
                        else
                        {
                            VAR_9 += VAR_10[-1] & VAR_10[0] & VAR_10[1];
                        }

                        VAR_10++;
                    }
                }

                if (VAR_0->comb_check_complete)
                {

                    return;
                }

                if (VAR_9 >= ( VAR_4 / 2 ))
                {
                    VAR_0->mask_box_x = VAR_11;
                    VAR_0->mask_box_y = VAR_12;

                    VAR_0->block_score[VAR_1] = VAR_9;
                    if (VAR_9 > VAR_4)
                    {
                        VAR_0->comb_check_complete = 1;
                        return;
                    }
                }
            }
        }
    }
}

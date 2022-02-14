
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int mask_erode_taskset; TYPE_4__* mask_filtered; TYPE_2__* mask_temp; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_12__ {int segment; int* segment_start; int* segment_height; TYPE_5__* pv; } ;
typedef TYPE_6__ decomb_thread_arg_t ;
struct TYPE_10__ {TYPE_3__* plane; } ;
struct TYPE_9__ {int width; int height; int stride; int* data; } ;
struct TYPE_8__ {TYPE_1__* plane; } ;
struct TYPE_7__ {int* data; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4( void *VAR_0 )
{
    hb_filter_private_t * VAR_1;
    int VAR_2, VAR_3, VAR_4;
    decomb_thread_arg_t *VAR_5 = VAR_0;

    VAR_1 = VAR_5->pv;
    VAR_2 = VAR_5->segment;

    FUNC_0(3, "mask erode thread started for segment %d", VAR_2);

    while (1)
    {



        FUNC_3( &VAR_1->mask_erode_taskset, VAR_2 );

        if (FUNC_2( &VAR_1->mask_erode_taskset, VAR_2 ))
        {



            break;
        }

        int VAR_6, VAR_7, VAR_8;

        int VAR_9;
        int VAR_10 = 2;

        for (VAR_8 = 0; VAR_8 < 1; VAR_8++)
        {
            int VAR_11 = VAR_1->mask_filtered->plane[VAR_8].width;
            int VAR_12 = VAR_1->mask_filtered->plane[VAR_8].height;
            int VAR_13 = VAR_1->mask_filtered->plane[VAR_8].stride;

            int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
            VAR_3 = VAR_5->segment_start[VAR_8];
            VAR_4 = VAR_3 + VAR_5->segment_height[VAR_8];

            if (VAR_3 == 0)
            {
                VAR_14 = 1;
                VAR_16 = 0;
                VAR_17 = 1;
                VAR_18 = 2;
            }
            else
            {
                VAR_14 = VAR_3;
                VAR_16 = VAR_3 - 1;
                VAR_17 = VAR_3;
                VAR_18 = VAR_3 + 1;
            }

            if (VAR_4 == VAR_12)
            {
                VAR_15 = VAR_12 -1;
            }
            else
            {
                VAR_15 = VAR_4;
            }

            uint8_t *VAR_19 = &VAR_1->mask_temp->plane[VAR_8].data[VAR_16 * VAR_13 + 1];
            uint8_t *VAR_20 = &VAR_1->mask_temp->plane[VAR_8].data[VAR_17 * VAR_13 + 1];
            uint8_t *VAR_21 = &VAR_1->mask_temp->plane[VAR_8].data[VAR_18 * VAR_13 + 1];
            uint8_t *VAR_22 = &VAR_1->mask_filtered->plane[VAR_8].data[VAR_17 * VAR_13 + 1];

            for (VAR_7 = VAR_14; VAR_7 < VAR_15; VAR_7++)
            {
                for (VAR_6 = 1; VAR_6 < VAR_11 - 1; VAR_6++)
                {
                    if (VAR_20[VAR_6] == 0)
                    {
                        VAR_22[VAR_6] = 0;
                        continue;
                    }

                    VAR_9 = VAR_19[VAR_6-1] + VAR_19[VAR_6] + VAR_19[VAR_6+1] +
                            VAR_20 [VAR_6-1] + VAR_20 [VAR_6+1] +
                            VAR_21[VAR_6-1] + VAR_21[VAR_6] + VAR_21[VAR_6+1];

                    VAR_22[VAR_6] = VAR_9 >= VAR_10;
                }
                VAR_19 += VAR_13;
                VAR_20 += VAR_13;
                VAR_21 += VAR_13;
                VAR_22 += VAR_13;
            }
        }

        FUNC_1( &VAR_1->mask_erode_taskset, VAR_2 );
    }




    FUNC_1( &VAR_1->mask_erode_taskset, VAR_2 );
}

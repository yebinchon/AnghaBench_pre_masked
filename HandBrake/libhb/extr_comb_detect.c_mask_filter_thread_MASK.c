
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {scalar_t__ filter_mode; int mask_filter_taskset; TYPE_6__* mask_temp; TYPE_4__* mask_filtered; TYPE_2__* mask; } ;
typedef TYPE_7__ hb_filter_private_t ;
struct TYPE_16__ {int segment; int* segment_start; int* segment_height; TYPE_7__* pv; } ;
typedef TYPE_8__ decomb_thread_arg_t ;
struct TYPE_14__ {TYPE_5__* plane; } ;
struct TYPE_13__ {int* data; } ;
struct TYPE_12__ {TYPE_3__* plane; } ;
struct TYPE_11__ {int* data; } ;
struct TYPE_10__ {TYPE_1__* plane; } ;
struct TYPE_9__ {int width; int height; int stride; int* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4( void *VAR_1 )
{
    hb_filter_private_t * VAR_2;
    int VAR_3, VAR_4, VAR_5;
    decomb_thread_arg_t *VAR_6 = VAR_1;

    VAR_2 = VAR_6->pv;
    VAR_3 = VAR_6->segment;

    FUNC_0(3, "mask filter thread started for segment %d", VAR_3);

    while (1)
    {



        FUNC_3( &VAR_2->mask_filter_taskset, VAR_3 );

        if (FUNC_2( &VAR_2->mask_filter_taskset, VAR_3 ))
        {



            break;
        }

        int VAR_7, VAR_8, VAR_9;

        for (VAR_9 = 0; VAR_9 < 1; VAR_9++)
        {
            int VAR_10 = VAR_2->mask->plane[VAR_9].width;
            int VAR_11 = VAR_2->mask->plane[VAR_9].height;
            int VAR_12 = VAR_2->mask->plane[VAR_9].stride;

            int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
            VAR_4 = VAR_6->segment_start[VAR_9];
            VAR_5 = VAR_4 + VAR_6->segment_height[VAR_9];

            if (VAR_4 == 0)
            {
                VAR_13 = 1;
                VAR_15 = 0;
                VAR_16 = 1;
                VAR_17 = 2;
            }
            else
            {
                VAR_13 = VAR_4;
                VAR_15 = VAR_4 - 1;
                VAR_16 = VAR_4;
                VAR_17 = VAR_4 + 1;
            }

            if (VAR_5 == VAR_11)
            {
                VAR_14 = VAR_11 - 1;
            }
            else
            {
                VAR_14 = VAR_5;
            }

            uint8_t *VAR_18 = &VAR_2->mask->plane[VAR_9].data[VAR_15 * VAR_12 + 1];
            uint8_t *VAR_19 = &VAR_2->mask->plane[VAR_9].data[VAR_16 * VAR_12 + 1];
            uint8_t *VAR_20 = &VAR_2->mask->plane[VAR_9].data[VAR_17 * VAR_12 + 1];
            uint8_t *VAR_21 = (VAR_2->filter_mode == VAR_0 ) ?
                &VAR_2->mask_filtered->plane[VAR_9].data[VAR_16 * VAR_12 + 1] :
                &VAR_2->mask_temp->plane[VAR_9].data[VAR_16 * VAR_12 + 1] ;

            for (VAR_8 = VAR_13; VAR_8 < VAR_14; VAR_8++)
            {
                for (VAR_7 = 1; VAR_7 < VAR_10 - 1; VAR_7++)
                {
                    int VAR_22, VAR_23;

                    VAR_22 = VAR_19[VAR_7-1] & VAR_19[VAR_7] & VAR_19[VAR_7+1];
                    VAR_23 = VAR_18[VAR_7] & VAR_19[VAR_7] & VAR_20[VAR_7];

                    if (VAR_2->filter_mode == VAR_0)
                    {
                        VAR_21[VAR_7] = VAR_22;
                    }
                    else
                    {
                        VAR_21[VAR_7] = VAR_22 & VAR_23;
                    }
                }
                VAR_18 += VAR_12;
                VAR_19 += VAR_12;
                VAR_20 += VAR_12;
                VAR_21 += VAR_12;
            }
        }

        FUNC_1( &VAR_2->mask_filter_taskset, VAR_3 );
    }




    FUNC_1( &VAR_2->mask_filter_taskset, VAR_3 );
}

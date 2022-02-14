
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int segment; int* segment_start; int* segment_height; TYPE_6__* pv; } ;
typedef TYPE_4__ yadif_thread_arg_t ;
struct TYPE_15__ {int mode; int tff; int parity; TYPE_7__* dst; } ;
typedef TYPE_5__ yadif_arguments_t ;
typedef int uint8_t ;
struct TYPE_16__ {int yadif_taskset; TYPE_3__** ref; TYPE_5__* yadif_arguments; } ;
typedef TYPE_6__ hb_filter_private_t ;
struct TYPE_17__ {TYPE_1__* plane; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_18__ {int* tap; int normalize; } ;
typedef TYPE_8__ filter_param_t ;
struct TYPE_13__ {TYPE_2__* plane; } ;
struct TYPE_12__ {int * data; } ;
struct TYPE_11__ {int width; int stride; int height_stride; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*,int *,int *,int,int,int,int) ;
 int FUNC_1 (int *,int *,int,int,int,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_6__*,int *,int *,int *,int *,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_8( void *VAR_3 )
{
    yadif_arguments_t *VAR_4 = ((void*)0);
    hb_filter_private_t * VAR_5;
    int VAR_6, VAR_7, VAR_8;
    yadif_thread_arg_t *VAR_9 = VAR_3;
    filter_param_t VAR_10;

    VAR_10.tap[0] = -1;
    VAR_10.tap[1] = 2;
    VAR_10.tap[2] = 6;
    VAR_10.tap[3] = 2;
    VAR_10.tap[4] = -1;
    VAR_10.normalize = 3;

    VAR_5 = VAR_9->pv;
    VAR_6 = VAR_9->segment;

    FUNC_2(3, "yadif thread started for segment %d", VAR_6);

    while (1)
    {



        FUNC_6( &VAR_5->yadif_taskset, VAR_6 );

        if( FUNC_5( &VAR_5->yadif_taskset, VAR_6 ) )
        {



            break;
        }

        VAR_4 = &VAR_5->yadif_arguments[VAR_6];




        hb_buffer_t *VAR_11;
        int VAR_12, VAR_13, VAR_14;

        VAR_14 = VAR_5->yadif_arguments[VAR_6].mode;
        VAR_11 = VAR_4->dst;
        VAR_13 = VAR_4->tff;
        VAR_12 = VAR_4->parity;

        int VAR_15;
        for (VAR_15 = 0; VAR_15 < 3; VAR_15++)
        {
            int VAR_16;
            int VAR_17 = VAR_11->plane[VAR_15].width;
            int VAR_18 = VAR_11->plane[VAR_15].stride;
            int VAR_19 = VAR_11->plane[VAR_15].height_stride;
            int VAR_20 = VAR_19 - 2;

            VAR_7 = VAR_9->segment_start[VAR_15];
            VAR_8 = VAR_7 + VAR_9->segment_height[VAR_15];


            int VAR_21 = VAR_12 ? (VAR_7 + 1) & ~1 : VAR_7 | 1;
            uint8_t *VAR_22 = &VAR_11->plane[VAR_15].data[VAR_21 * VAR_18];
            uint8_t *VAR_23 = &VAR_5->ref[0]->plane[VAR_15].data[VAR_21 * VAR_18];
            uint8_t *VAR_24 = &VAR_5->ref[1]->plane[VAR_15].data[VAR_21 * VAR_18];
            uint8_t *VAR_25 = &VAR_5->ref[2]->plane[VAR_15].data[VAR_21 * VAR_18];

            if (VAR_14 == VAR_0)
            {

                for( VAR_16 = VAR_21; VAR_16 < VAR_8; VAR_16 += 2 )
                {

                    FUNC_0(&VAR_10, VAR_22, VAR_24, VAR_17, VAR_19, VAR_18, VAR_16);
                    VAR_22 += VAR_18 * 2;
                    VAR_24 += VAR_18 * 2;
                }
            }
            else if (VAR_14 == VAR_1)
            {
                for( VAR_16 = VAR_21; VAR_16 < VAR_8; VAR_16 += 2 )
                {

                    FUNC_1(VAR_22, VAR_24, VAR_17, VAR_19, VAR_18, VAR_16);
                    VAR_22 += VAR_18 * 2;
                    VAR_24 += VAR_18 * 2;
                }
            }
            else if (VAR_14 & VAR_2)
            {
                for( VAR_16 = VAR_21; VAR_16 < VAR_8; VAR_16 += 2 )
                {
                    if( VAR_16 > 1 && VAR_16 < VAR_20 )
                    {


                        FUNC_7(VAR_5, VAR_22, VAR_23, VAR_24, VAR_25, VAR_15,
                                          VAR_17, VAR_19, VAR_18,
                                          VAR_12 ^ VAR_13, VAR_16);
                    }
                    else
                    {




                        int VAR_26 = (VAR_16 ^ VAR_12) * VAR_18;
                        FUNC_3(VAR_22, &VAR_5->ref[1]->plane[VAR_15].data[VAR_26], VAR_17);
                    }
                    VAR_22 += VAR_18 * 2;
                    VAR_23 += VAR_18 * 2;
                    VAR_24 += VAR_18 * 2;
                    VAR_25 += VAR_18 * 2;
                }
            }
            else
            {

                for( VAR_16 = VAR_21; VAR_16 < VAR_8; VAR_16 += 2 )
                {
                    FUNC_3(VAR_22, VAR_24, VAR_17);
                    VAR_22 += VAR_18 * 2;
                    VAR_24 += VAR_18 * 2;
                }
            }


            VAR_21 = !VAR_12 ? (VAR_7 + 1) & ~1 : VAR_7 | 1;
            VAR_22 = &VAR_11->plane[VAR_15].data[VAR_21 * VAR_18];
            VAR_23 = &VAR_5->ref[0]->plane[VAR_15].data[VAR_21 * VAR_18];
            VAR_24 = &VAR_5->ref[1]->plane[VAR_15].data[VAR_21 * VAR_18];
            VAR_25 = &VAR_5->ref[2]->plane[VAR_15].data[VAR_21 * VAR_18];
            for( VAR_16 = VAR_21; VAR_16 < VAR_8; VAR_16 += 2 )
            {
                FUNC_3(VAR_22, VAR_24, VAR_17);
                VAR_22 += VAR_18 * 2;
                VAR_24 += VAR_18 * 2;
            }
        }
        FUNC_4( &VAR_5->yadif_taskset, VAR_6 );
    }




    FUNC_4( &VAR_5->yadif_taskset, VAR_6 );
}

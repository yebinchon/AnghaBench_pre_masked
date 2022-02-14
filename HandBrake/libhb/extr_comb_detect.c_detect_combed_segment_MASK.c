
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int spatial_metric; int motion_threshold; int spatial_threshold; scalar_t__ frames; TYPE_4__* mask; TYPE_2__** ref; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_10__ {TYPE_3__* plane; } ;
struct TYPE_9__ {int* data; } ;
struct TYPE_8__ {TYPE_1__* plane; } ;
struct TYPE_7__ {int stride; int width; int height; int* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2( hb_filter_private_t * VAR_0,
                                   int VAR_1, int VAR_2 )
{







    int VAR_3 = VAR_0->spatial_metric;

    int VAR_4 = VAR_0->motion_threshold;

    int VAR_5 = VAR_0->spatial_threshold;
    int VAR_6 = VAR_5 * VAR_5;
    int VAR_7 = 6 * VAR_5;


    int VAR_8;
    for (VAR_8 = 0; VAR_8 < 1; VAR_8++)
    {
        int VAR_9, VAR_10;
        int VAR_11 = VAR_0->ref[0]->plane[VAR_8].stride;
        int VAR_12 = VAR_0->ref[0]->plane[VAR_8].width;
        int VAR_13 = VAR_0->ref[0]->plane[VAR_8].height;




        if (VAR_1 < 2)
            VAR_1 = 2;
        if (VAR_2 > VAR_13 - 2)
            VAR_2 = VAR_13 - 2;

        for (VAR_10 = VAR_1; VAR_10 < VAR_2; VAR_10++)
        {

            int VAR_14 = -2 * VAR_11 ;
            int VAR_15 = -1 * VAR_11;
            int VAR_16 = VAR_11;
            int VAR_17 = 2 * VAR_11;



            uint8_t * VAR_18 = &VAR_0->ref[0]->plane[VAR_8].data[VAR_10 * VAR_11];
            uint8_t * VAR_19 = &VAR_0->ref[1]->plane[VAR_8].data[VAR_10 * VAR_11];
            uint8_t * VAR_20 = &VAR_0->ref[2]->plane[VAR_8].data[VAR_10 * VAR_11];
            uint8_t * VAR_21 = &VAR_0->mask->plane[VAR_8].data[VAR_10 * VAR_11];

            FUNC_1(VAR_21, 0, VAR_11);

            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
            {
                int VAR_22 = VAR_19[0] - VAR_19[VAR_15];
                int VAR_23 = VAR_19[0] - VAR_19[VAR_16];

                if (( VAR_22 > VAR_5 && VAR_23 > VAR_5 ) ||
                    ( VAR_22 < -VAR_5 && VAR_23 < -VAR_5 ))
                {


                    int VAR_24 = 0;
                    if (VAR_4 > 0)
                    {

                        if (FUNC_0(VAR_18[0] - VAR_19[0] ) > VAR_4 &&
                            FUNC_0(VAR_19[VAR_15] - VAR_20[VAR_15] ) > VAR_4 &&
                            FUNC_0(VAR_19[VAR_16] - VAR_20[VAR_16]) > VAR_4)
                                VAR_24++;
                        if (FUNC_0(VAR_20[0] - VAR_19[0] ) > VAR_4 &&
                            FUNC_0(VAR_18[VAR_15] - VAR_19[VAR_15] ) > VAR_4 &&
                            FUNC_0(VAR_18[VAR_16] - VAR_19[VAR_16]) > VAR_4)
                                VAR_24++;
                    }
                    else
                    {


                        VAR_24 = 1;
                    }


                    if (VAR_24 || VAR_0->frames == 0)
                    {


                        if (VAR_3 == 0)
                        {

                            if ((FUNC_0(VAR_19[0] - VAR_19[VAR_17]) < 10) &&
                                (FUNC_0(VAR_19[0] - VAR_19[VAR_16]) > 15))
                            {
                                VAR_21[0] = 1;
                            }
                        }
                        else if (VAR_3 == 1)
                        {


                               int VAR_25 = ( VAR_19[VAR_15] - VAR_19[0] ) *
                                             ( VAR_19[VAR_16] - VAR_19[0] );

                               if (VAR_25 > VAR_6)
                               {
                                   VAR_21[0] = 1;
                               }
                        }
                        else if (VAR_3 == 2)
                        {


                            int VAR_26 = FUNC_0( VAR_19[VAR_14]
                                             + ( 4 * VAR_19[0] )
                                             + VAR_19[VAR_17]
                                             - ( 3 * ( VAR_19[VAR_15]
                                                     + VAR_19[VAR_16] ) ) );



                            if (VAR_26 > VAR_7)
                            {
                                VAR_21[0] = 1;
                            }
                        }
                    }
                }

                VAR_19++;
                VAR_18++;
                VAR_20++;
                VAR_21++;
            }
        }
    }
}

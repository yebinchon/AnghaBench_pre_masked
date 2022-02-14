
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_11__ {float* gamma_lut; scalar_t__ frames; TYPE_4__* mask; TYPE_2__** ref; scalar_t__ spatial_threshold; scalar_t__ motion_threshold; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_10__ {TYPE_3__* plane; } ;
struct TYPE_9__ {size_t* data; } ;
struct TYPE_8__ {TYPE_1__* plane; } ;
struct TYPE_7__ {int stride; int width; int height; size_t* data; } ;


 float FUNC_0 (float) ;
 int FUNC_1 (size_t*,int ,int) ;

__attribute__((used)) static void FUNC_2( hb_filter_private_t * VAR_0,
                                         int VAR_1, int VAR_2 )
{







    float VAR_3 = (float)VAR_0->motion_threshold / (float)255;

    float VAR_4 = (float)VAR_0->spatial_threshold / (float)255;
    float VAR_5 = 6 *VAR_4;


    int VAR_6;
    for (VAR_6 = 0; VAR_6 < 1; VAR_6++)
    {
        int VAR_7, VAR_8;
        int VAR_9 = VAR_0->ref[0]->plane[VAR_6].stride;
        int VAR_10 = VAR_0->ref[0]->plane[VAR_6].width;
        int VAR_11 = VAR_0->ref[0]->plane[VAR_6].height;




        if (VAR_1 < 2)
            VAR_1 = 2;
        if (VAR_2 > VAR_11 - 2)
            VAR_2 = VAR_11 - 2;

        for (VAR_8 = VAR_1; VAR_8 < VAR_2; VAR_8++)
        {

            int VAR_12 = -2 * VAR_9 ;
            int VAR_13 = -1 * VAR_9;
            int VAR_14 = VAR_9;
            int VAR_15 = 2 * VAR_9;



            uint8_t * VAR_16 = &VAR_0->ref[0]->plane[VAR_6].data[VAR_8 * VAR_9];
            uint8_t * VAR_17 = &VAR_0->ref[1]->plane[VAR_6].data[VAR_8 * VAR_9];
            uint8_t * VAR_18 = &VAR_0->ref[2]->plane[VAR_6].data[VAR_8 * VAR_9];
            uint8_t * VAR_19 = &VAR_0->mask->plane[VAR_6].data[VAR_8 * VAR_9];

            FUNC_1(VAR_19, 0, VAR_9);

            for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
            {
                float VAR_20, VAR_21;
                VAR_20 = VAR_0->gamma_lut[VAR_17[0]] - VAR_0->gamma_lut[VAR_17[VAR_13]];
                VAR_21 = VAR_0->gamma_lut[VAR_17[0]] - VAR_0->gamma_lut[VAR_17[VAR_14]];

                if (( VAR_20 > VAR_4 && VAR_21 > VAR_4 ) ||
                    ( VAR_20 < -VAR_4 && VAR_21 < -VAR_4 ))
                {


                    int VAR_22 = 0;
                    if (VAR_3 > 0)
                    {

                        if (FUNC_0(VAR_0->gamma_lut[VAR_16[0]] - VAR_0->gamma_lut[VAR_17[0]] ) > VAR_3 &&
                            FUNC_0(VAR_0->gamma_lut[VAR_17[VAR_13]] - VAR_0->gamma_lut[VAR_18[VAR_13]] ) > VAR_3 &&
                            FUNC_0(VAR_0->gamma_lut[VAR_17[VAR_14]] - VAR_0->gamma_lut[VAR_18[VAR_14]]) > VAR_3)
                                VAR_22++;
                        if (FUNC_0(VAR_0->gamma_lut[VAR_18[0]] - VAR_0->gamma_lut[VAR_17[0]] ) > VAR_3 &&
                            FUNC_0(VAR_0->gamma_lut[VAR_16[VAR_13]] - VAR_0->gamma_lut[VAR_17[VAR_13]] ) > VAR_3 &&
                            FUNC_0(VAR_0->gamma_lut[VAR_16[VAR_14]] - VAR_0->gamma_lut[VAR_17[VAR_14]]) > VAR_3)
                                VAR_22++;

                    }
                    else
                    {


                        VAR_22 = 1;
                    }

                    if (VAR_22 || VAR_0->frames == 0)
                    {
                        float VAR_23;


                        VAR_23 = FUNC_0(VAR_0->gamma_lut[VAR_17[VAR_12]] +
                                       (4 * VAR_0->gamma_lut[VAR_17[0]]) +
                                       VAR_0->gamma_lut[VAR_17[VAR_15]] -
                                       (3 * (VAR_0->gamma_lut[VAR_17[VAR_13]] +
                                             VAR_0->gamma_lut[VAR_17[VAR_14]])));


                        if (VAR_23 > VAR_5)
                        {
                            VAR_19[0] = 1;
                        }
                    }
                }

                VAR_17++;
                VAR_16++;
                VAR_18++;
                VAR_19++;
            }
        }
    }
}

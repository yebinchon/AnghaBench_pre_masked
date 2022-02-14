
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int prefiltered; int* mem; int* image; int border; int w; int h; int* mem_pre; int* image_pre; int mutex; } ;
typedef TYPE_1__ BorderedPlane ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int const) ;
 int FUNC_3 (int*,int const*,int const) ;
 int FUNC_4 (int*,int const,int const,int const) ;
 int FUNC_5 (int const*,int*,int const,int const,int const,int) ;
 int FUNC_6 (int const*,int*,int const,int const,int const) ;
 int FUNC_7 (int const*,int*,int const,int const,int const,int) ;
 int FUNC_8 (int const*,int*,int const,int const,int const,int) ;

__attribute__((used)) static void FUNC_9(BorderedPlane *VAR_10,
                              const int VAR_11)
{
    FUNC_0(VAR_10->mutex);
    if (VAR_10->prefiltered == 1)
    {
        FUNC_1(VAR_10->mutex);
        return;
    }

    if (VAR_11 & VAR_3 ||
        VAR_11 & VAR_4 ||
        VAR_11 & VAR_5 ||
        VAR_11 & VAR_6 ||
        VAR_11 & VAR_0 ||
        VAR_11 & VAR_1)
    {


        const uint8_t *VAR_12 = VAR_10->mem;
        const uint8_t *VAR_13 = VAR_10->image;
        const int VAR_14 = VAR_10->border;
        const int VAR_15 = VAR_10->w;
        const int VAR_16 = VAR_10->h;
        const int VAR_17 = VAR_15 + 2 * VAR_14;
        const int VAR_18 = VAR_16 + 2 * VAR_14;


        uint8_t *VAR_19 = FUNC_2(VAR_17 * VAR_18 * sizeof(uint8_t));
        uint8_t *VAR_20 = VAR_19 + VAR_14 + VAR_17 * VAR_14;
        for (int VAR_21 = 0; VAR_21 < VAR_16; VAR_21++)
        {
            FUNC_3(VAR_19 + VAR_21 * VAR_17, VAR_12 + VAR_21 * VAR_17, VAR_17);
        }


        if (VAR_11 & VAR_1)
        {

            FUNC_5(VAR_13, VAR_20, VAR_15, VAR_16, VAR_14, 5);
        }
        else if (VAR_11 & VAR_0)
        {

            FUNC_5(VAR_13, VAR_20, VAR_15, VAR_16, VAR_14, 3);
        }
        else if (VAR_11 & VAR_6)
        {

            FUNC_8(VAR_13, VAR_20, VAR_15, VAR_16, VAR_14, 5);
        }
        else if (VAR_11 & VAR_5)
        {

            FUNC_8(VAR_13, VAR_20, VAR_15, VAR_16, VAR_14, 3);
        }
        else if (VAR_11 & VAR_4)
        {

            FUNC_7(VAR_13, VAR_20, VAR_15, VAR_16, VAR_14, 5);
        }
        else if (VAR_11 & VAR_3)
        {

            FUNC_7(VAR_13, VAR_20, VAR_15, VAR_16, VAR_14, 3);
        }


        if (VAR_11 & VAR_2)
        {
            FUNC_6(VAR_13, VAR_20, VAR_15, VAR_16, VAR_14);
        }


        int VAR_22 = 1;
        int VAR_23 = 0;
        if (VAR_11 & VAR_9 &&
            VAR_11 & VAR_8)
        {
            VAR_22 = 1;
            VAR_23 = 3;
        }
        else if (VAR_11 & VAR_9)
        {
            VAR_22 = 1;
            VAR_23 = 1;
        }
        else if (VAR_11 & VAR_8)
        {
            VAR_22 = 3;
            VAR_23 = 1;
        }
        if (VAR_23 > 0)
        {
            for (int VAR_24 = 0; VAR_24 < VAR_18; VAR_24++)
            {
                for (int VAR_25 = 0; VAR_25 < VAR_17; VAR_25++)
                {
                    *(VAR_19 + VAR_17*VAR_24 + VAR_25) = (uint8_t)((VAR_22 * *(VAR_19 + VAR_17*VAR_24 + VAR_25) + VAR_23 * *(VAR_12 + VAR_17*VAR_24 + VAR_25)) / (VAR_22 + VAR_23));
                }
            }
        }


        FUNC_4(VAR_19, VAR_15, VAR_16, VAR_14);


        VAR_10->mem_pre = VAR_19;
        VAR_10->image_pre = VAR_20;
        if (VAR_11 & VAR_7)
        {
            VAR_10->mem = VAR_10->mem_pre;
            VAR_10->image = VAR_10->image_pre;
        }

    }
    VAR_10->prefiltered = 1;
    FUNC_1(VAR_10->mutex);
}

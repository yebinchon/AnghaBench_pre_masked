
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int transparent_index; int flags; } ;
typedef TYPE_1__ GIFContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_2,
                                 const uint8_t *VAR_3, const int VAR_4,
                                 int *VAR_5, int *VAR_6,
                                 int *VAR_7, int *VAR_8)
{
    GIFContext *VAR_9 = VAR_2->priv_data;
    int VAR_10 = VAR_9->transparent_index;


    if ((VAR_9->flags & VAR_1) && VAR_10 >= 0) {
        const int VAR_11 = VAR_2->width;
        const int VAR_12 = VAR_2->height;
        int VAR_13 = VAR_11 - 1,
            VAR_14 = VAR_12 - 1;


        while (*VAR_8 < VAR_14) {
            int VAR_15 = 1;
            for (int VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
                if (VAR_3[VAR_4 * *VAR_8 + VAR_16] != VAR_10) {
                    VAR_15 = 0;
                    break;
                }
            }

            if (!VAR_15)
                break;
            (*VAR_8)++;
        }


        while (VAR_14 > *VAR_8) {
            int VAR_17 = 1;
            for (int VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
                if (VAR_3[VAR_4 * VAR_14 + VAR_18] != VAR_10) {
                    VAR_17 = 0;
                    break;
                }
            }
            if (!VAR_17)
                break;
            VAR_14--;
        }


        while (*VAR_7 < VAR_13) {
            int VAR_19 = 1;
            for (int VAR_20 = *VAR_8; VAR_20 < VAR_14; VAR_20++) {
                if (VAR_3[VAR_4 * VAR_20 + *VAR_7] != VAR_10) {
                    VAR_19 = 0;
                    break;
                }
            }
            if (!VAR_19)
                break;
            (*VAR_7)++;
        }


        while (VAR_13 > *VAR_7) {
            int VAR_21 = 1;
            for (int VAR_22 = *VAR_8; VAR_22 < VAR_14; VAR_22++) {
                if (VAR_3[VAR_4 * VAR_22 + VAR_13] != VAR_10) {
                    VAR_21 = 0;
                    break;
                }
            }
            if (!VAR_21)
                break;
            VAR_13--;
        }

        *VAR_6 = VAR_14 + 1 - *VAR_8;
        *VAR_5 = VAR_13 + 1 - *VAR_7;
        FUNC_0(VAR_2, VAR_0,"%dx%d image at pos (%d;%d) [area:%dx%d]\n",
               *VAR_5, *VAR_6, *VAR_7, *VAR_8, VAR_2->width, VAR_2->height);
    }
}

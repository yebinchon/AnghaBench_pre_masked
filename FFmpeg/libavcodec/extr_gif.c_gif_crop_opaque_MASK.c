
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int flags; TYPE_1__* last_frame; } ;
struct TYPE_6__ {scalar_t__** data; int* linesize; } ;
typedef TYPE_2__ GIFContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,scalar_t__ const*,int) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_2,
                            const uint32_t *VAR_3,
                            const uint8_t *VAR_4, const int VAR_5,
                            int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
    GIFContext *VAR_10 = VAR_2->priv_data;


    if ((VAR_10->flags & VAR_1) && VAR_10->last_frame && !VAR_3) {
        const uint8_t *VAR_11 = VAR_10->last_frame->data[0];
        const int VAR_12 = VAR_10->last_frame->linesize[0];
        int VAR_13 = VAR_2->width - 1,
            VAR_14 = VAR_2->height - 1;


        while (*VAR_9 < VAR_14) {
            if (FUNC_1(VAR_11 + *VAR_9*VAR_12, VAR_4 + *VAR_9*VAR_5, *VAR_6))
                break;
            (*VAR_9)++;
        }
        while (VAR_14 > *VAR_9) {
            if (FUNC_1(VAR_11 + VAR_14*VAR_12, VAR_4 + VAR_14*VAR_5, *VAR_6))
                break;
            VAR_14--;
        }
        *VAR_7 = VAR_14 + 1 - *VAR_9;


        while (*VAR_8 < VAR_13) {
            int VAR_15 = 1;
            for (int VAR_16 = *VAR_9; VAR_16 <= VAR_14; VAR_16++) {
                if (VAR_11[VAR_16*VAR_12 + *VAR_8] != VAR_4[VAR_16*VAR_5 + *VAR_8]) {
                    VAR_15 = 0;
                    break;
                }
            }
            if (!VAR_15)
                break;
            (*VAR_8)++;
        }
        while (VAR_13 > *VAR_8) {
            int VAR_17 = 1;
            for (int VAR_18 = *VAR_9; VAR_18 <= VAR_14; VAR_18++) {
                if (VAR_11[VAR_18*VAR_12 + VAR_13] != VAR_4[VAR_18*VAR_5 + VAR_13]) {
                    VAR_17 = 0;
                    break;
                }
            }
            if (!VAR_17)
                break;
            VAR_13--;
        }
        *VAR_6 = VAR_13 + 1 - *VAR_8;

        FUNC_0(VAR_2, VAR_0,"%dx%d image at pos (%d;%d) [area:%dx%d]\n",
               *VAR_6, *VAR_7, *VAR_8, *VAR_9, VAR_2->width, VAR_2->height);
    }
}

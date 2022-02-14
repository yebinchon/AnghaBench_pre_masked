
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_17__ {int w; int h; TYPE_4__* dst; } ;
struct TYPE_16__ {int** data; int * linesize; } ;
struct TYPE_15__ {int strength; int intensity; int* in_histogram; int bpp; int* rgba_map; int* LUT; int* out_histogram; scalar_t__ antibanding; } ;
typedef TYPE_1__ HisteqContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 size_t VAR_3 ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int,int*,int*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_3 (unsigned int) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__**) ;
 int FUNC_7 (TYPE_4__*,char*,int,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int,int) ;
 int FUNC_10 (int*,int ,int) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_9, AVFrame *VAR_10)
{
    AVFilterContext *VAR_11 = VAR_9->dst;
    HisteqContext *VAR_12 = VAR_11->priv;
    AVFilterLink *VAR_13 = VAR_11->outputs[0];
    int VAR_14 = VAR_12->strength * 1000;
    int VAR_15 = VAR_12->intensity * 1000;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    AVFrame *VAR_25;
    unsigned int VAR_26, VAR_27, VAR_28, VAR_29;
    uint8_t *VAR_30, *VAR_31;

    VAR_25 = FUNC_9(VAR_13, VAR_13->w, VAR_13->h);
    if (!VAR_25) {
        FUNC_6(&VAR_10);
        return FUNC_0(VAR_2);
    }
    FUNC_5(VAR_25, VAR_10);


    VAR_29 = VAR_7;



    FUNC_10(VAR_12->in_histogram, 0, sizeof(VAR_12->in_histogram));
    VAR_30 = VAR_10->data[0];
    VAR_31 = VAR_25->data[0];
    for (VAR_17 = 0; VAR_17 < VAR_9->h; VAR_17++) {
        for (VAR_16 = 0; VAR_16 < VAR_9->w * VAR_12->bpp; VAR_16 += VAR_12->bpp) {
            FUNC_2(VAR_26, VAR_27, VAR_28, VAR_30, VAR_12->rgba_map);
            VAR_22 = (55 * VAR_26 + 182 * VAR_27 + 19 * VAR_28) >> 8;
            VAR_31[VAR_16 + VAR_12->rgba_map[VAR_0]] = VAR_22;
            VAR_12->in_histogram[VAR_22]++;
        }
        VAR_30 += VAR_10->linesize[0];
        VAR_31 += VAR_25->linesize[0];
    }







    VAR_12->LUT[0] = VAR_12->in_histogram[0];

    for (VAR_16 = 1; VAR_16 < 256; VAR_16++)
        VAR_12->LUT[VAR_16] = VAR_12->LUT[VAR_16-1] + VAR_12->in_histogram[VAR_16];


    for (VAR_16 = 0; VAR_16 < 256; VAR_16++)
        VAR_12->LUT[VAR_16] = (VAR_12->LUT[VAR_16] * VAR_15) / (VAR_9->h * VAR_9->w);



    for (VAR_16 = 0; VAR_16 < 256; VAR_16++)
        VAR_12->LUT[VAR_16] = (VAR_14 * VAR_12->LUT[VAR_16]) / 255 +
                         ((255 - VAR_14) * VAR_16) / 255;


    FUNC_10(VAR_12->out_histogram, 0, sizeof(VAR_12->out_histogram));

    VAR_30 = VAR_10->data[0];
    VAR_31 = VAR_25->data[0];
    for (VAR_17 = 0; VAR_17 < VAR_9->h; VAR_17++) {
        for (VAR_16 = 0; VAR_16 < VAR_9->w * VAR_12->bpp; VAR_16 += VAR_12->bpp) {
            VAR_22 = VAR_31[VAR_16 + VAR_12->rgba_map[VAR_0]];
            if (VAR_22 == 0) {
                for (VAR_18 = 0; VAR_18 < VAR_12->bpp; ++VAR_18)
                    VAR_31[VAR_16 + VAR_18] = 0;
                VAR_12->out_histogram[0]++;
            } else {
                VAR_21 = VAR_12->LUT[VAR_22];
                if (VAR_12->antibanding != VAR_4) {
                    if (VAR_22 > 0) {
                        VAR_20 = VAR_12->antibanding == VAR_5 ?
                                (VAR_12->LUT[VAR_22] + VAR_12->LUT[VAR_22 - 1]) / 2 :
                                 VAR_12->LUT[VAR_22 - 1];
                    } else
                        VAR_20 = VAR_21;

                    if (VAR_22 < 255) {
                        VAR_19 = (VAR_12->antibanding == VAR_5) ?
                            (VAR_12->LUT[VAR_22] + VAR_12->LUT[VAR_22 + 1]) / 2 :
                             VAR_12->LUT[VAR_22 + 1];
                    } else
                        VAR_19 = VAR_21;

                    if (VAR_20 != VAR_19) {
                        VAR_29 = FUNC_3(VAR_29);
                        VAR_21 = VAR_20 + ((VAR_19 - VAR_20 + 1) * VAR_29) / VAR_6;
                    }
                }

                FUNC_2(VAR_26, VAR_27, VAR_28, VAR_30, VAR_12->rgba_map);
                if (((VAR_24 = FUNC_1(VAR_26, VAR_27, VAR_28)) * VAR_21) / VAR_22 > 255) {
                    VAR_26 = (VAR_26 * 255) / VAR_24;
                    VAR_27 = (VAR_27 * 255) / VAR_24;
                    VAR_28 = (VAR_28 * 255) / VAR_24;
                } else {
                    VAR_26 = (VAR_26 * VAR_21) / VAR_22;
                    VAR_27 = (VAR_27 * VAR_21) / VAR_22;
                    VAR_28 = (VAR_28 * VAR_21) / VAR_22;
                }
                VAR_31[VAR_16 + VAR_12->rgba_map[VAR_8]] = VAR_26;
                VAR_31[VAR_16 + VAR_12->rgba_map[VAR_3]] = VAR_27;
                VAR_31[VAR_16 + VAR_12->rgba_map[VAR_1]] = VAR_28;
                VAR_23 = FUNC_4((55 * VAR_26 + 182 * VAR_27 + 19 * VAR_28) >> 8);
                VAR_12->out_histogram[VAR_23]++;
            }
        }
        VAR_30 += VAR_10->linesize[0];
        VAR_31 += VAR_25->linesize[0];
    }





    FUNC_6(&VAR_10);
    return FUNC_8(VAR_13, VAR_25);
}

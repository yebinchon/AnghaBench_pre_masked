
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {int nb_planes; int* pixelstep; TYPE_4__* desc; } ;
struct TYPE_19__ {int width; int height; int** data; int* linesize; } ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_18__ {TYPE_1__ member_0; } ;
struct TYPE_17__ {size_t nb_values; int max; TYPE_8__ draw; scalar_t__ scope; TYPE_2__* values; int (* pick_color ) (TYPE_8__*,TYPE_6__*,TYPE_7__*,int,int,int*) ;} ;
struct TYPE_16__ {TYPE_3__* comp; } ;
struct TYPE_15__ {int depth; } ;
struct TYPE_14__ {int* p; } ;
typedef int PixelValues ;
typedef TYPE_5__ OscilloscopeContext ;
typedef TYPE_6__ FFDrawColor ;
typedef TYPE_7__ AVFrame ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_8__*,TYPE_6__*,TYPE_7__*,int,int,int*) ;

__attribute__((used)) static void FUNC_3(OscilloscopeContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                       AVFrame *VAR_5, PixelValues *VAR_6, int VAR_7)
{
    int VAR_8 = FUNC_1(VAR_3 - VAR_1), VAR_9 = VAR_1 < VAR_3 ? 1 : -1;
    int VAR_10 = FUNC_1(VAR_4 - VAR_2), VAR_11 = VAR_2 < VAR_4 ? 1 : -1;
    int VAR_12 = (VAR_8 > VAR_10 ? VAR_8 : -VAR_10) / 2, VAR_13;

    for (;;) {
        if (VAR_1 >= 0 && VAR_2 >= 0 && VAR_1 < VAR_5->width && VAR_2 < VAR_5->height) {
            FFDrawColor VAR_14 = { { 0 } };
            int VAR_15[4] = { 0 };

            VAR_0->pick_color(&VAR_0->draw, &VAR_14, VAR_5, VAR_1, VAR_2, VAR_15);
            VAR_0->values[VAR_0->nb_values].p[0] = VAR_15[0];
            VAR_0->values[VAR_0->nb_values].p[1] = VAR_15[1];
            VAR_0->values[VAR_0->nb_values].p[2] = VAR_15[2];
            VAR_0->values[VAR_0->nb_values].p[3] = VAR_15[3];
            VAR_0->nb_values++;

            if (VAR_0->scope) {
                if (VAR_0->draw.desc->comp[0].depth == 8) {
                    if (VAR_0->draw.nb_planes == 1) {
                        int VAR_16;

                        for (VAR_16 = 0; VAR_16 < VAR_0->draw.pixelstep[0]; VAR_16++)
                            VAR_5->data[0][VAR_5->linesize[0] * VAR_2 + VAR_1 * VAR_0->draw.pixelstep[0] + VAR_16] = 255 * ((VAR_0->nb_values + VAR_7) & 1);
                    } else {
                        VAR_5->data[0][VAR_5->linesize[0] * VAR_2 + VAR_1] = 255 * ((VAR_0->nb_values + VAR_7) & 1);
                    }
                } else {
                    if (VAR_0->draw.nb_planes == 1) {
                        int VAR_17;

                        for (VAR_17 = 0; VAR_17 < VAR_0->draw.pixelstep[0]; VAR_17++)
                            FUNC_0(VAR_5->data[0] + VAR_5->linesize[0] * VAR_2 + 2 * VAR_1 * (VAR_0->draw.pixelstep[0] + VAR_17), (VAR_0->max - 1) * ((VAR_0->nb_values + VAR_7) & 1));
                    } else {
                        FUNC_0(VAR_5->data[0] + VAR_5->linesize[0] * VAR_2 + 2 * VAR_1, (VAR_0->max - 1) * ((VAR_0->nb_values + VAR_7) & 1));
                    }
                }
            }
        }

        if (VAR_1 == VAR_3 && VAR_2 == VAR_4)
            break;

        VAR_13 = VAR_12;

        if (VAR_13 >-VAR_8) {
            VAR_12 -= VAR_10;
            VAR_1 += VAR_9;
        }

        if (VAR_13 < VAR_10) {
            VAR_12 += VAR_8;
            VAR_2 += VAR_11;
        }
    }
}

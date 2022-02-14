
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int width; int height; int* linesize; int ** data; } ;
struct TYPE_14__ {TYPE_3__* comp; } ;
struct TYPE_13__ {int nb_planes; int* pixelstep; int* vsub; int* hsub; TYPE_2__* desc; } ;
struct TYPE_12__ {int * u16; int * u8; } ;
struct TYPE_11__ {TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_4__ FFDrawContext ;
typedef TYPE_5__ FFDrawColor ;
typedef TYPE_6__ AVFrame ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(FFDrawContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                      AVFrame *VAR_5, FFDrawColor *VAR_6)
{
    int VAR_7 = FUNC_1(VAR_3 - VAR_1), VAR_8 = VAR_1 < VAR_3 ? 1 : -1;
    int VAR_9 = FUNC_1(VAR_4 - VAR_2), VAR_10 = VAR_2 < VAR_4 ? 1 : -1;
    int VAR_11 = (VAR_7 > VAR_9 ? VAR_7 : -VAR_9) / 2, VAR_12;
    int VAR_13, VAR_14;

    for (;;) {
        if (VAR_1 >= 0 && VAR_2 >= 0 && VAR_1 < VAR_5->width && VAR_2 < VAR_5->height) {
            for (VAR_13 = 0; VAR_13 < VAR_0->nb_planes; VAR_13++) {
                if (VAR_0->desc->comp[VAR_13].depth == 8) {
                    if (VAR_0->nb_planes == 1) {
                        for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
                            VAR_5->data[0][VAR_2 * VAR_5->linesize[0] + VAR_1 * VAR_0->pixelstep[0] + VAR_14] = VAR_6->comp[0].u8[VAR_14];
                        }
                    } else {
                        VAR_5->data[VAR_13][VAR_5->linesize[VAR_13] * (VAR_2 >> VAR_0->vsub[VAR_13]) + (VAR_1 >> VAR_0->hsub[VAR_13])] = VAR_6->comp[VAR_13].u8[0];
                    }
                } else {
                    if (VAR_0->nb_planes == 1) {
                        for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
                            FUNC_0(VAR_5->data[0] + VAR_2 * VAR_5->linesize[0] + 2 * (VAR_1 * VAR_0->pixelstep[0] + VAR_14), VAR_6->comp[0].u16[VAR_14]);
                        }
                    } else {
                        FUNC_0(VAR_5->data[VAR_13] + VAR_5->linesize[VAR_13] * (VAR_2 >> VAR_0->vsub[VAR_13]) + (VAR_1 >> VAR_0->hsub[VAR_13]) * 2, VAR_6->comp[VAR_13].u16[0]);
                    }
                }
            }
        }

        if (VAR_1 == VAR_3 && VAR_2 == VAR_4)
            break;

        VAR_12 = VAR_11;

        if (VAR_12 >-VAR_7) {
            VAR_11 -= VAR_9;
            VAR_1 += VAR_8;
        }

        if (VAR_12 < VAR_9) {
            VAR_11 += VAR_7;
            VAR_2 += VAR_10;
        }
    }
}

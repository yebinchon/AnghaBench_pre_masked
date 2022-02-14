
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int* linesize; scalar_t__* data; } ;
struct TYPE_10__ {int* rgba; TYPE_1__* comp; } ;
struct TYPE_9__ {int nb_planes; int* pixelstep; int* vsub; int* hsub; } ;
struct TYPE_8__ {int* u16; } ;
typedef TYPE_2__ FFDrawContext ;
typedef TYPE_3__ FFDrawColor ;
typedef TYPE_4__ AVFrame ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(FFDrawContext *VAR_0, FFDrawColor *VAR_1, AVFrame *VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7;

    VAR_1->rgba[3] = 255;
    for (VAR_6 = 0; VAR_6 < VAR_0->nb_planes; VAR_6++) {
        if (VAR_0->nb_planes == 1) {
            for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                VAR_5[VAR_7] = FUNC_0(VAR_2->data[0] + VAR_4 * VAR_2->linesize[0] + VAR_3 * VAR_0->pixelstep[0] + VAR_7 * 2);
                VAR_1->comp[0].u16[VAR_7] = VAR_5[VAR_7];
            }
        } else {
            VAR_5[VAR_6] = FUNC_0(VAR_2->data[VAR_6] + (VAR_4 >> VAR_0->vsub[VAR_6]) * VAR_2->linesize[VAR_6] + (VAR_3 >> VAR_0->hsub[VAR_6]) * 2);
            VAR_1->comp[VAR_6].u16[0] = VAR_5[VAR_6];
        }
    }
}

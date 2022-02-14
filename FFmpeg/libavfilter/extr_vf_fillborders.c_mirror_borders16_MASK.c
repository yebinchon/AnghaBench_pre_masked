
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int nb_planes; int* planeheight; int* planewidth; TYPE_1__* borders; } ;
struct TYPE_6__ {int top; int bottom; int left; int right; } ;
typedef TYPE_2__ FillBordersContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(FillBordersContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_0->nb_planes; VAR_2++) {
        uint16_t *VAR_5 = (uint16_t *)VAR_1->data[VAR_2];
        int VAR_6 = VAR_1->linesize[VAR_2] / 2;

        for (VAR_3 = VAR_0->borders[VAR_2].top; VAR_3 < VAR_0->planeheight[VAR_2] - VAR_0->borders[VAR_2].bottom; VAR_3++) {
            for (VAR_4 = 0; VAR_4 < VAR_0->borders[VAR_2].left; VAR_4++) {
                VAR_5[VAR_3 * VAR_6 + VAR_4] = VAR_5[VAR_3 * VAR_6 + VAR_0->borders[VAR_2].left * 2 - 1 - VAR_4];
            }

            for (VAR_4 = 0; VAR_4 < VAR_0->borders[VAR_2].right; VAR_4++) {
                VAR_5[VAR_3 * VAR_6 + VAR_0->planewidth[VAR_2] - VAR_0->borders[VAR_2].right + VAR_4] =
                    VAR_5[VAR_3 * VAR_6 + VAR_0->planewidth[VAR_2] - VAR_0->borders[VAR_2].right - 1 - VAR_4];
            }
        }

        for (VAR_3 = 0; VAR_3 < VAR_0->borders[VAR_2].top; VAR_3++) {
            FUNC_0(VAR_5 + VAR_3 * VAR_6,
                   VAR_5 + (VAR_0->borders[VAR_2].top * 2 - 1 - VAR_3) * VAR_6,
                   VAR_0->planewidth[VAR_2] * 2);
        }

        for (VAR_3 = 0; VAR_3 < VAR_0->borders[VAR_2].bottom; VAR_3++) {
            FUNC_0(VAR_5 + (VAR_0->planeheight[VAR_2] - VAR_0->borders[VAR_2].bottom + VAR_3) * VAR_6,
                   VAR_5 + (VAR_0->planeheight[VAR_2] - VAR_0->borders[VAR_2].bottom - 1 - VAR_3) * VAR_6,
                   VAR_0->planewidth[VAR_2] * 2);
        }
    }
}

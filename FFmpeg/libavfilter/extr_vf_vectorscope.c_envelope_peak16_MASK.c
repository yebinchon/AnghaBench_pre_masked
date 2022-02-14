
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ mode; size_t pd; int size; int** peak; int envelope; int is_yuv; } ;
typedef TYPE_1__ VectorscopeContext ;
struct TYPE_8__ {int* linesize; int height; int width; scalar_t__* data; } ;
typedef TYPE_2__ AVFrame ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(VectorscopeContext *VAR_1, AVFrame *VAR_2)
{
    const int VAR_3 = VAR_2->linesize[0] / 2;
    uint16_t *VAR_4 = VAR_1->mode == VAR_0 || !VAR_1->is_yuv ? (uint16_t *)VAR_2->data[VAR_1->pd] : (uint16_t *)VAR_2->data[0];
    const int VAR_5 = VAR_1->size - 1;
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_2->height; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_2->width; VAR_7++) {
            const int VAR_8 = VAR_6 * VAR_3 + VAR_7;

            if (VAR_4[VAR_8])
                VAR_1->peak[VAR_6][VAR_7] = 1;
        }
    }

    if (VAR_1->envelope == 3)
        FUNC_0(VAR_1, VAR_2);

    for (VAR_6 = 0; VAR_6 < VAR_2->height; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_2->width; VAR_7++) {
            const int VAR_9 = VAR_6 * VAR_3 + VAR_7;

            if (VAR_1->peak[VAR_6][VAR_7] && (((!VAR_7 || !VAR_1->peak[VAR_6][VAR_7-1]) || ((VAR_7 == (VAR_2->width - 1)) || !VAR_1->peak[VAR_6][VAR_7 + 1]))
                              || ((!VAR_6 || !VAR_1->peak[VAR_6-1][VAR_7]) || ((VAR_6 == (VAR_2->height - 1)) || !VAR_1->peak[VAR_6 + 1][VAR_7])))) {
                VAR_4[VAR_9] = VAR_5;
            }
        }
    }
}

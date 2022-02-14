
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ mode; size_t pd; int size; int is_yuv; } ;
typedef TYPE_1__ VectorscopeContext ;
struct TYPE_6__ {int* linesize; int height; int width; scalar_t__* data; } ;
typedef TYPE_2__ AVFrame ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(VectorscopeContext *VAR_1, AVFrame *VAR_2)
{
    const int VAR_3 = VAR_2->linesize[0] / 2;
    uint16_t *VAR_4 = VAR_1->mode == VAR_0 || !VAR_1->is_yuv ? (uint16_t *)VAR_2->data[VAR_1->pd] : (uint16_t *)VAR_2->data[0];
    const int VAR_5 = VAR_1->size - 1;
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_2->height; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_2->width; VAR_7++) {
            const int VAR_8 = VAR_6 * VAR_3 + VAR_7;
            const int VAR_9 = (VAR_6 - 1) * VAR_3 + VAR_7;
            const int VAR_10 = (VAR_6 + 1) * VAR_3 + VAR_7;

            if (VAR_4[VAR_8] && (((!VAR_7 || !VAR_4[VAR_8 - 1]) || ((VAR_7 == (VAR_2->width - 1)) || !VAR_4[VAR_8 + 1]))
                         || ((!VAR_6 || !VAR_4[VAR_9]) || ((VAR_6 == (VAR_2->height - 1)) || !VAR_4[VAR_10])))) {
                VAR_4[VAR_8] = VAR_5;
            }
        }
    }
}

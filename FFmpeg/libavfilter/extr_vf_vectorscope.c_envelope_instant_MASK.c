
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ mode; size_t pd; int is_yuv; } ;
typedef TYPE_1__ VectorscopeContext ;
struct TYPE_6__ {int* linesize; int** data; int height; int width; } ;
typedef TYPE_2__ AVFrame ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(VectorscopeContext *VAR_1, AVFrame *VAR_2)
{
    const int VAR_3 = VAR_2->linesize[0];
    uint8_t *VAR_4 = VAR_1->mode == VAR_0 || !VAR_1->is_yuv ? VAR_2->data[VAR_1->pd] : VAR_2->data[0];
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_2->height; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_2->width; VAR_6++) {
            const int VAR_7 = VAR_5 * VAR_3 + VAR_6;
            const int VAR_8 = (VAR_5 - 1) * VAR_3 + VAR_6;
            const int VAR_9 = (VAR_5 + 1) * VAR_3 + VAR_6;

            if (VAR_4[VAR_7] && (((!VAR_6 || !VAR_4[VAR_7 - 1]) || ((VAR_6 == (VAR_2->width - 1)) || !VAR_4[VAR_7 + 1]))
                         || ((!VAR_5 || !VAR_4[VAR_8]) || ((VAR_5 == (VAR_2->height - 1)) || !VAR_4[VAR_9])))) {
                VAR_4[VAR_7] = 255;
            }
        }
    }
}

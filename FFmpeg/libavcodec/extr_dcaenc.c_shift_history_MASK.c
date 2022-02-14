
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int channels; int* channel_order_tab; int ** history; } ;
typedef TYPE_1__ DCAEncContext ;



__attribute__((used)) static void FUNC_0(DCAEncContext *VAR_0, const int32_t *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < 512; VAR_2++)
        for (VAR_3 = 0; VAR_3 < VAR_0->channels; VAR_3++) {
            const int VAR_4 = VAR_0->channel_order_tab[VAR_3];

            VAR_0->history[VAR_3][VAR_2] = VAR_1[VAR_2 * VAR_0->channels + VAR_4];
        }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int x; int y; int* linesize; int h; int w; int ** data; } ;
typedef TYPE_1__ AVSubtitleRect ;



__attribute__((used)) static void FUNC_0(AVSubtitleRect *VAR_0, AVSubtitleRect *VAR_1, int VAR_2[])
{
    int VAR_3, VAR_4;
    uint8_t *VAR_5, *VAR_6;

    VAR_5 = VAR_1->data[0];
    VAR_6 = VAR_0->data[0] + (VAR_1->x - VAR_0->x) +
                            (VAR_1->y - VAR_0->y) * VAR_0->linesize[0];
    for (VAR_4 = 0; VAR_4 < VAR_1->h; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < VAR_1->w; VAR_3++)
            *(VAR_6++) = VAR_2[*(VAR_5++)];
        VAR_5 += VAR_1->linesize[0] - VAR_1->w;
        VAR_6 += VAR_0->linesize[0] - VAR_1->w;
    }
}

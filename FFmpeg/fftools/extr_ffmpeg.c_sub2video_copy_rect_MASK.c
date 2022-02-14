
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ type; int x; int w; int y; int h; int * linesize; int ** data; } ;
typedef TYPE_1__ AVSubtitleRect ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5,
                                AVSubtitleRect *VAR_6)
{
    uint32_t *VAR_7, *VAR_8;
    uint8_t *VAR_9, *VAR_10;
    int VAR_11, VAR_12;

    if (VAR_6->type != VAR_1) {
        FUNC_0(((void*)0), VAR_0, "sub2video: non-bitmap subtitle\n");
        return;
    }
    if (VAR_6->x < 0 || VAR_6->x + VAR_6->w > VAR_4 || VAR_6->y < 0 || VAR_6->y + VAR_6->h > VAR_5) {
        FUNC_0(((void*)0), VAR_0, "sub2video: rectangle (%d %d %d %d) overflowing %d %d\n",
            VAR_6->x, VAR_6->y, VAR_6->w, VAR_6->h, VAR_4, VAR_5
        );
        return;
    }

    VAR_2 += VAR_6->y * VAR_3 + VAR_6->x * 4;
    VAR_9 = VAR_6->data[0];
    VAR_7 = (uint32_t *)VAR_6->data[1];
    for (VAR_12 = 0; VAR_12 < VAR_6->h; VAR_12++) {
        VAR_8 = (uint32_t *)VAR_2;
        VAR_10 = VAR_9;
        for (VAR_11 = 0; VAR_11 < VAR_6->w; VAR_11++)
            *(VAR_8++) = VAR_7[*(VAR_10++)];
        VAR_2 += VAR_3;
        VAR_9 += VAR_6->linesize[0];
    }
}

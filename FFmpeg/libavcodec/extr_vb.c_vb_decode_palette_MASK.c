
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pal; int stream; int avctx; } ;
typedef TYPE_1__ VBDecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(VBDecContext *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    VAR_3 = FUNC_2(&VAR_1->stream);
    VAR_4 = (FUNC_2(&VAR_1->stream) - 1) & 0xFF;
    if (VAR_3 + VAR_4 > 255) {
        FUNC_0(VAR_1->avctx, VAR_0, "Palette change runs beyond entry 256\n");
        return;
    }
    if (VAR_4*3+2 > VAR_2) {
        FUNC_0(VAR_1->avctx, VAR_0, "Palette data runs beyond chunk size\n");
        return;
    }
    for (VAR_5 = VAR_3; VAR_5 <= VAR_3 + VAR_4; VAR_5++)
        VAR_1->pal[VAR_5] = 0xFFU << 24 | FUNC_1(&VAR_1->stream);
}

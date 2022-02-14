
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxval; int bpp; int T1; int near; int T2; int reset; void* T3; } ;
typedef TYPE_1__ JLSState ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int,int,void*) ;
 void* FUNC_3 (int,int,int) ;

void FUNC_4(JLSState *VAR_0, int VAR_1)
{
    const int VAR_2 = 3;
    const int VAR_3 = 7;
    const int VAR_4 = 21;
    int VAR_5;

    if (VAR_0->maxval == 0 || VAR_1)
        VAR_0->maxval = (1 << VAR_0->bpp) - 1;

    if (VAR_0->maxval >= 128) {
        VAR_5 = (FUNC_1(VAR_0->maxval, 4095) + 128) >> 8;

        if (VAR_0->T1 == 0 || VAR_1)
            VAR_0->T1 = FUNC_3(VAR_5 * (VAR_2 - 2) + 2 + 3 * VAR_0->near,
                             VAR_0->near + 1, VAR_0->maxval);
        if (VAR_0->T2 == 0 || VAR_1)
            VAR_0->T2 = FUNC_3(VAR_5 * (VAR_3 - 3) + 3 + 5 * VAR_0->near,
                             VAR_0->T1, VAR_0->maxval);
        if (VAR_0->T3 == 0 || VAR_1)
            VAR_0->T3 = FUNC_3(VAR_5 * (VAR_4 - 4) + 4 + 7 * VAR_0->near,
                             VAR_0->T2, VAR_0->maxval);
    } else {
        VAR_5 = 256 / (VAR_0->maxval + 1);

        if (VAR_0->T1 == 0 || VAR_1)
            VAR_0->T1 = FUNC_3(FUNC_0(2, VAR_2 / VAR_5 + 3 * VAR_0->near),
                             VAR_0->near + 1, VAR_0->maxval);
        if (VAR_0->T2 == 0 || VAR_1)
            VAR_0->T2 = FUNC_3(FUNC_0(3, VAR_3 / VAR_5 + 5 * VAR_0->near),
                             VAR_0->T1, VAR_0->maxval);
        if (VAR_0->T3 == 0 || VAR_1)
            VAR_0->T3 = FUNC_3(FUNC_0(4, VAR_4 / VAR_5 + 7 * VAR_0->near),
                             VAR_0->T2, VAR_0->maxval);
    }

    if (VAR_0->reset == 0 || VAR_1)
        VAR_0->reset = 64;
    FUNC_2(((void*)0), "[JPEG-LS RESET] T=%i,%i,%i\n", VAR_0->T1, VAR_0->T2, VAR_0->T3);
}

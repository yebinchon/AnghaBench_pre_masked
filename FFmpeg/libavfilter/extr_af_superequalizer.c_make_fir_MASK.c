
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int winlen; int tabsize; int* irest; float* ires; int rdft; } ;
typedef TYPE_1__ SuperEqualizerContext ;
typedef int EqParameter ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int,int *,float) ;
 int FUNC_2 (float*,int *,float) ;
 int FUNC_3 (TYPE_1__*,int,int const) ;

__attribute__((used)) static void FUNC_4(SuperEqualizerContext *VAR_0, float *VAR_1, float *VAR_2, EqParameter *VAR_3, float VAR_4)
{
    const int VAR_5 = VAR_0->winlen;
    const int VAR_6 = VAR_0->tabsize;
    float *VAR_7;
    int VAR_8;

    if (VAR_4 <= 0)
        return;

    FUNC_2(VAR_1, VAR_3, VAR_4);
    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
        VAR_0->irest[VAR_8] = FUNC_1(VAR_8 - VAR_5 / 2, VAR_3, VAR_4) * FUNC_3(VAR_0, VAR_8 - VAR_5 / 2, VAR_5);
    for (; VAR_8 < VAR_6; VAR_8++)
        VAR_0->irest[VAR_8] = 0;

    FUNC_0(VAR_0->rdft, VAR_0->irest);
    VAR_7 = VAR_0->ires;
    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
        VAR_7[VAR_8] = VAR_0->irest[VAR_8];
}

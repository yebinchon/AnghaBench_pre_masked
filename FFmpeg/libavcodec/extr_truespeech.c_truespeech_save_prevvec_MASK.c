
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cvector; int * prevfilt; } ;
typedef TYPE_1__ TSContext ;



__attribute__((used)) static void FUNC_0(TSContext *VAR_0)
{
    int VAR_1;

    for(VAR_1 = 0; VAR_1 < 8; VAR_1++)
        VAR_0->prevfilt[VAR_1] = VAR_0->cvector[VAR_1];
}

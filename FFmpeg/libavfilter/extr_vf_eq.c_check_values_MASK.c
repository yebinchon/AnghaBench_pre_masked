
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * process; } ;
struct TYPE_5__ {double contrast; double brightness; double gamma; int * adjust; } ;
typedef TYPE_1__ EQParameters ;
typedef TYPE_2__ EQContext ;


 int * VAR_0 ;
 double FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(EQParameters *VAR_1, EQContext *VAR_2)
{
    if (VAR_1->contrast == 1.0 && VAR_1->brightness == 0.0 && VAR_1->gamma == 1.0)
        VAR_1->adjust = ((void*)0);
    else if (VAR_1->gamma == 1.0 && FUNC_0(VAR_1->contrast) < 7.9)
        VAR_1->adjust = VAR_2->process;
    else
        VAR_1->adjust = VAR_0;
}

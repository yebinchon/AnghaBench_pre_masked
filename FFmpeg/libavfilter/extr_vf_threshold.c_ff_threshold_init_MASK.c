
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int bpc; int threshold; } ;
typedef TYPE_1__ ThresholdContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(ThresholdContext *VAR_3)
{
    if (VAR_3->depth == 8) {
        VAR_3->threshold = VAR_2;
        VAR_3->bpc = 1;
    } else {
        VAR_3->threshold = VAR_1;
        VAR_3->bpc = 2;
    }

    if (VAR_0)
        FUNC_0(VAR_3);
}

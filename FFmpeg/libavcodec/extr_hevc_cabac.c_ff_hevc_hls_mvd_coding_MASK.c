
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* HEVClc; } ;
struct TYPE_10__ {void* y; void* x; } ;
struct TYPE_11__ {TYPE_1__ mvd; } ;
struct TYPE_12__ {TYPE_2__ pu; } ;
typedef TYPE_3__ HEVCLocalContext ;
typedef TYPE_4__ HEVCContext ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (TYPE_4__*) ;

void FUNC_4(HEVCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    HEVCLocalContext *VAR_4 = VAR_0->HEVClc;
    int VAR_5 = FUNC_0(VAR_0);
    int VAR_6 = FUNC_0(VAR_0);

    if (VAR_5)
        VAR_5 += FUNC_1(VAR_0);
    if (VAR_6)
        VAR_6 += FUNC_1(VAR_0);

    switch (VAR_5) {
    case 2: VAR_4->pu.mvd.x = FUNC_2(VAR_0); break;
    case 1: VAR_4->pu.mvd.x = FUNC_3(VAR_0); break;
    case 0: VAR_4->pu.mvd.x = 0; break;
    }

    switch (VAR_6) {
    case 2: VAR_4->pu.mvd.y = FUNC_2(VAR_0); break;
    case 1: VAR_4->pu.mvd.y = FUNC_3(VAR_0); break;
    case 0: VAR_4->pu.mvd.y = 0; break;
    }
}

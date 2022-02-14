
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ buffer; } ;
struct TYPE_10__ {TYPE_1__* HEVClc; } ;
struct TYPE_9__ {int cc; TYPE_3__ gb; } ;
typedef TYPE_2__ HEVCContext ;
typedef TYPE_3__ GetBitContext ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_5(HEVCContext *VAR_0)
{
    GetBitContext *VAR_1 = &VAR_0->HEVClc->gb;
    FUNC_4(VAR_1, 1);
    FUNC_0(VAR_1);
    return FUNC_1(&VAR_0->HEVClc->cc,
                          VAR_1->buffer + FUNC_2(VAR_1) / 8,
                          (FUNC_3(VAR_1) + 7) / 8);
}

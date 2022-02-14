
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cabac_state; TYPE_1__* HEVClc; } ;
struct TYPE_4__ {int cabac_state; } ;
typedef TYPE_2__ HEVCContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(HEVCContext *VAR_1)
{
    FUNC_0(VAR_1->HEVClc->cabac_state, VAR_1->cabac_state, VAR_0);
}

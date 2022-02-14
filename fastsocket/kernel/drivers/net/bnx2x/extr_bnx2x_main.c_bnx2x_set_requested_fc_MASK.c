
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int req_fc_auto_adv; } ;
struct bnx2x {TYPE_2__ link_params; TYPE_1__* dev; } ;
struct TYPE_3__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_2)
{




 if (FUNC_0(VAR_2) && (VAR_2->dev->mtu > 5000))
  VAR_2->link_params.req_fc_auto_adv = VAR_1;
 else
  VAR_2->link_params.req_fc_auto_adv = VAR_0;
}

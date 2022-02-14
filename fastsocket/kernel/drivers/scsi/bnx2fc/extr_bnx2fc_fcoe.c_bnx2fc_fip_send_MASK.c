
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct fcoe_ctlr {int dummy; } ;
struct TYPE_2__ {int netdev; } ;


 TYPE_1__* FUNC_0 (struct fcoe_ctlr*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct fcoe_ctlr *VAR_0, struct sk_buff *VAR_1)
{
 VAR_1->dev = FUNC_0(VAR_0)->netdev;
 FUNC_1(VAR_1);
}

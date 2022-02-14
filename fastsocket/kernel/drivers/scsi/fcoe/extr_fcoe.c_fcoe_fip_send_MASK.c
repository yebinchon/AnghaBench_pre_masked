
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct fcoe_ctlr {int lp; } ;
struct TYPE_2__ {int netdev; } ;


 TYPE_1__* FUNC_0 (struct fcoe_ctlr*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fcoe_ctlr *VAR_0, struct sk_buff *VAR_1)
{
 VAR_1->dev = FUNC_0(VAR_0)->netdev;
 FUNC_1(FUNC_2(VAR_0->lp), VAR_1);
}

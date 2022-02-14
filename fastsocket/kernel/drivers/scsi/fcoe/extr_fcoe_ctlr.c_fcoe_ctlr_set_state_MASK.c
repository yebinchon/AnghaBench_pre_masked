
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr {int state; scalar_t__ lp; } ;
typedef enum fip_state { ____Placeholder_fip_state } fip_state ;


 int FUNC_0 (struct fcoe_ctlr*,char*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct fcoe_ctlr *VAR_0, enum fip_state VAR_1)
{
 if (VAR_1 == VAR_0->state)
  return;
 if (VAR_0->lp)
  FUNC_0(VAR_0, "state %s -> %s\n",
   FUNC_1(VAR_0->state), FUNC_1(VAR_1));
 VAR_0->state = VAR_1;
}

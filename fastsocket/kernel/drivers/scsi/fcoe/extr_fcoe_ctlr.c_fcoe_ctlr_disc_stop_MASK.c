
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr {int ctlr_mutex; } ;
struct TYPE_2__ {struct fcoe_ctlr* priv; } ;
struct fc_lport {TYPE_1__ disc; } ;


 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fc_lport *VAR_0)
{
 struct fcoe_ctlr *VAR_1 = VAR_0->disc.priv;

 FUNC_1(&VAR_1->ctlr_mutex);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->ctlr_mutex);
}

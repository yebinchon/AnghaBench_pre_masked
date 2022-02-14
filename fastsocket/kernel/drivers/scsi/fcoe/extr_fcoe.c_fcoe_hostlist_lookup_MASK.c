
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fcoe_interface {int dummy; } ;
struct fcoe_ctlr {struct fc_lport* lp; } ;
struct fc_lport {int dummy; } ;


 struct fcoe_interface* FUNC_0 (struct net_device const*) ;
 struct fcoe_ctlr* FUNC_1 (struct fcoe_interface*) ;

__attribute__((used)) static struct fc_lport *FUNC_2(const struct net_device *VAR_0)
{
 struct fcoe_ctlr *VAR_1;
 struct fcoe_interface *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = FUNC_1(VAR_2);
 return (VAR_2) ? VAR_1->lp : ((void*)0);
}

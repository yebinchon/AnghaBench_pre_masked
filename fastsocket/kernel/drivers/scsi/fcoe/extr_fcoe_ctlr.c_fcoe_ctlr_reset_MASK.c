
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr {int flogi_oxid; scalar_t__ sol_time; scalar_t__ port_ka_time; scalar_t__ ctlr_ka_time; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 int FUNC_2 (struct fcoe_ctlr*) ;

__attribute__((used)) static void FUNC_3(struct fcoe_ctlr *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->timer);
 VAR_1->ctlr_ka_time = 0;
 VAR_1->port_ka_time = 0;
 VAR_1->sol_time = 0;
 VAR_1->flogi_oxid = VAR_0;
 FUNC_1(VAR_1);
}

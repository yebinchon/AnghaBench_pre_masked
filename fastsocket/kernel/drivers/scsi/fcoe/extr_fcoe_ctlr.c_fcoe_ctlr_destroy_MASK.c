
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr {int timer_work; int timer; int ctlr_mutex; int fip_recv_list; int recv_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fcoe_ctlr*) ;
 int FUNC_3 (struct fcoe_ctlr*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct fcoe_ctlr *VAR_1)
{
 FUNC_0(&VAR_1->recv_work);
 FUNC_6(&VAR_1->fip_recv_list);

 FUNC_4(&VAR_1->ctlr_mutex);
 FUNC_3(VAR_1, VAR_0);
 FUNC_2(VAR_1);
 FUNC_5(&VAR_1->ctlr_mutex);
 FUNC_1(&VAR_1->timer);
 FUNC_0(&VAR_1->timer_work);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fcoe_ctlr {int recv_work; int fip_recv_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;

void FUNC_2(struct fcoe_ctlr *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_1(&VAR_0->fip_recv_list, VAR_1);
 FUNC_0(&VAR_0->recv_work);
}

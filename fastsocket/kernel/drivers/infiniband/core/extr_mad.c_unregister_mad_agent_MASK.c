
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_mad_port_private {int wq; int reg_lock; } ;
struct TYPE_3__ {int mr; } ;
struct ib_mad_agent_private {TYPE_1__ agent; struct ib_mad_agent_private* reg_req; int comp; int agent_list; int timed_work; TYPE_2__* qp_info; } ;
struct TYPE_4__ {struct ib_mad_port_private* port_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_mad_agent_private*) ;
 int FUNC_2 (struct ib_mad_agent_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ib_mad_agent_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ib_mad_agent_private*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ib_mad_agent_private*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ib_mad_agent_private *VAR_0)
{
 struct ib_mad_port_private *VAR_1;
 unsigned long VAR_2;







 FUNC_1(VAR_0);
 VAR_1 = VAR_0->qp_info->port_priv;
 FUNC_0(&VAR_0->timed_work);

 FUNC_9(&VAR_1->reg_lock, VAR_2);
 FUNC_8(VAR_0);
 FUNC_7(&VAR_0->agent_list);
 FUNC_10(&VAR_1->reg_lock, VAR_2);

 FUNC_3(VAR_1->wq);
 FUNC_4(VAR_0);

 FUNC_2(VAR_0);
 FUNC_11(&VAR_0->comp);

 FUNC_6(VAR_0->reg_req);
 FUNC_5(VAR_0->agent.mr);
 FUNC_6(VAR_0);
}

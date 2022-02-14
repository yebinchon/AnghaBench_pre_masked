
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpar_connection {scalar_t__ num_events; size_t remote_lp; scalar_t__ num_ack_events; struct veth_lpar_connection* msgs; } ;


 int VAR_0 ;
 int FUNC_0 (struct veth_lpar_connection*) ;
 int FUNC_1 (size_t,int ,scalar_t__,int *,int *) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_2(struct veth_lpar_connection *VAR_2)
{
 if (!VAR_2)
  return;

 if (VAR_2->num_events > 0)
  FUNC_1(VAR_2->remote_lp,
          VAR_0,
          VAR_2->num_events,
          ((void*)0), ((void*)0));
 if (VAR_2->num_ack_events > 0)
  FUNC_1(VAR_2->remote_lp,
          VAR_0,
          VAR_2->num_ack_events,
          ((void*)0), ((void*)0));

 FUNC_0(VAR_2->msgs);
 VAR_1[VAR_2->remote_lp] = ((void*)0);
 FUNC_0(VAR_2);
}

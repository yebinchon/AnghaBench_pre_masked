
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nat_traversal_task_oustanding; int tcp_port; int nat_traversal_state; } ;
typedef TYPE_1__ netplay_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(netplay_t *VAR_0)
{
   FUNC_0(&VAR_0->nat_traversal_state, 0, sizeof(VAR_0->nat_traversal_state));
   VAR_0->nat_traversal_task_oustanding = 1;
   FUNC_1(&VAR_0->nat_traversal_state, VAR_0->tcp_port);
}

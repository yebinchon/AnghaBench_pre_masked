
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_client_flow_registration {int interface_cb; struct mppcb* interface_handle; } ;
struct necp_client {int proc_pid; } ;
struct mppcb {int necp_cb; } ;
typedef scalar_t__ proc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct necp_client*,struct necp_client_flow_registration*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct necp_client_flow_registration *VAR_1,
            struct necp_client *VAR_2,
            struct mppcb *VAR_3)
{
 VAR_1->interface_handle = VAR_3;
 VAR_1->interface_cb = VAR_3->necp_cb;

 proc_t VAR_4 = FUNC_1(VAR_2->proc_pid);
 if (VAR_4 == VAR_0) {
  return;
 }


 FUNC_0(VAR_4, VAR_2, VAR_1, 1);

 FUNC_2(VAR_4);
 VAR_4 = VAR_0;
}

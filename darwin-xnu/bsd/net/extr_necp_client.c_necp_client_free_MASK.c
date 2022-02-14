
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_client {int lock; int route_lock; struct necp_client* extra_interface_options; } ;


 int FUNC_0 (struct necp_client*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct necp_client*) ;
 int FUNC_2 (struct necp_client*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct necp_client *VAR_2)
{
 FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 FUNC_0(VAR_2->extra_interface_options, VAR_0);
 VAR_2->extra_interface_options = ((void*)0);

 FUNC_3(&VAR_2->route_lock, VAR_1);
 FUNC_3(&VAR_2->lock, VAR_1);

 FUNC_0(VAR_2, VAR_0);
}

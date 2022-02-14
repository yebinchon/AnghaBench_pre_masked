
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct necp_client_parsed_parameters {int dummy; } ;
struct necp_client {int dummy; } ;
typedef TYPE_1__* ifnet_t ;
struct TYPE_4__ {size_t if_agentcount; int if_index; int * if_agentids; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct necp_client*,struct necp_client_parsed_parameters const*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct necp_client *VAR_1,
          const struct necp_client_parsed_parameters *VAR_2,
          ifnet_t VAR_3)
{
 if (VAR_3 != ((void*)0) && VAR_3->if_agentids != ((void*)0)) {
  for (u_int32_t VAR_4 = 0; VAR_4 < VAR_3->if_agentcount; VAR_4++) {
   if (FUNC_2(VAR_3->if_agentids[VAR_4])) {
    continue;
   }

   (void)FUNC_1(VAR_1, VAR_2, &VAR_3->if_agentids[VAR_4], VAR_0,
              VAR_3->if_index, FUNC_0(VAR_3));
  }
 }
}

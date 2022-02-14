
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef size_t uint32_t ;
struct ifnet {size_t if_agentcount; int * if_agentids; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

boolean_t
FUNC_4(struct ifnet *VAR_2, uuid_t VAR_3)
{
 boolean_t VAR_4 = VAR_0;

 if (!VAR_2 || FUNC_3(VAR_3))
  return VAR_0;

 FUNC_1(VAR_2);

 if (VAR_2->if_agentids != ((void*)0)) {
  for (uint32_t VAR_5 = 0; VAR_5 < VAR_2->if_agentcount; VAR_5++) {
   if (FUNC_2(VAR_2->if_agentids[VAR_5], VAR_3) == 0) {
    VAR_4 = VAR_1;
    break;
   }
  }
 }

 FUNC_0(VAR_2);

 return VAR_4;
}

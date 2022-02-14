
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef size_t u_int32_t ;
struct ifnet {size_t if_agentcount; int * if_agentids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_2, uuid_t VAR_3)
{
 u_int32_t VAR_4 = 0;
 bool VAR_5 = VAR_0;

 if (VAR_2->if_agentids != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2->if_agentcount; VAR_4++) {
   uuid_t *VAR_6 = &(VAR_2->if_agentids[VAR_4]);
   if (FUNC_2(*VAR_6,
       VAR_3) == 0) {
    FUNC_1(*VAR_6);
    VAR_5 = VAR_1;
    break;
   }
  }
 }
 if (VAR_5)
  FUNC_0(VAR_3);

 return (0);
}

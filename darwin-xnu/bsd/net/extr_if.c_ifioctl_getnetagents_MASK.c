
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef scalar_t__ user_addr_t ;
typedef size_t u_int32_t ;
struct ifnet {size_t if_agentcount; int * if_agentids; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_2, u_int32_t *VAR_3, user_addr_t VAR_4)
{
 int VAR_5 = 0;
 u_int32_t VAR_6 = 0;
 u_int32_t VAR_7 = 0;
 *VAR_3 = 0;

 FUNC_1(VAR_2, VAR_0);

 if (VAR_2->if_agentids != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_2->if_agentcount; VAR_6++) {
   uuid_t *VAR_8 = &(VAR_2->if_agentids[VAR_6]);
   if (!FUNC_2(*VAR_8)) {
    if (VAR_4 != VAR_1) {
     VAR_5 = FUNC_0(VAR_8,
      VAR_4 + sizeof(uuid_t) * VAR_7,
      sizeof(uuid_t));
     if (VAR_5 != 0) {
      return (VAR_5);
     }
    }
    VAR_7++;
   }
  }
 }
 *VAR_3 = VAR_7;

 return (0);
}

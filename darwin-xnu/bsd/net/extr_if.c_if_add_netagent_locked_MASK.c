
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef size_t u_int32_t ;
struct ifnet {size_t if_agentcount; int * if_agentids; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int *,int,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_8, uuid_t VAR_9)
{
 uuid_t *VAR_10 = ((void*)0);
 u_int32_t VAR_11 = 0;
 bool VAR_12 = VAR_1;

 if (VAR_8->if_agentids != ((void*)0)) {
  for (VAR_11 = 0; VAR_11 < VAR_8->if_agentcount; VAR_11++) {
   uuid_t *VAR_13 = &(VAR_8->if_agentids[VAR_11]);
   if (FUNC_3(*VAR_13, VAR_9) == 0) {

    VAR_12 = VAR_7;
    break;
   }
   if (VAR_10 == ((void*)0) &&
    FUNC_5(*VAR_13)) {
    VAR_10 = VAR_13;
   }
  }
 }
 if (VAR_12) {

  return (0);
 }
 if (VAR_10 == ((void*)0)) {
  if (VAR_8->if_agentcount >= VAR_3) {

   return (VAR_0);
  } else {

   u_int32_t VAR_14 =
   FUNC_0(VAR_8->if_agentcount + VAR_2,
       VAR_3);


   uuid_t *VAR_15 = FUNC_1(VAR_8->if_agentids,
       sizeof(uuid_t) * VAR_14, VAR_4,
       VAR_5 | VAR_6);
   if (VAR_15 == ((void*)0)) {
    return (VAR_0);
   }


   VAR_8->if_agentids = VAR_15;


   VAR_10 =
       &(VAR_8->if_agentids[VAR_8->if_agentcount]);


   VAR_8->if_agentcount = VAR_14;
  }
 }
 FUNC_4(*VAR_10, VAR_9);
 FUNC_2(VAR_9);
 return (0);
}

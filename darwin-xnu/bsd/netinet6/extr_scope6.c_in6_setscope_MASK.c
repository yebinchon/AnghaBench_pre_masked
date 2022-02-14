
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct scope6_id {int* s6id_list; } ;
struct in6_addr {int * s6_addr16; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;




 struct scope6_id* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct in6_addr*) ;

int
FUNC_9(struct in6_addr *VAR_2, struct ifnet *VAR_3, u_int32_t *VAR_4)
{
 int VAR_5;
 u_int32_t VAR_6 = 0;
 struct scope6_id *VAR_7;





 if (FUNC_1(VAR_2)) {
  if (!(VAR_3->if_flags & VAR_1)) {
   return (VAR_0);
  } else {
   if (VAR_4 != ((void*)0))
    *VAR_4 = 0;
   return (0);
  }
 }

 VAR_5 = FUNC_8(VAR_2);

 FUNC_7(VAR_3);
 if (FUNC_0(VAR_3) == ((void*)0)) {
  FUNC_6(VAR_3);
  if (VAR_4)
   *VAR_4 = 0;
  return (VAR_0);
 }
 VAR_7 = FUNC_4(VAR_3);
 switch (VAR_5) {
 case 131:
  VAR_6 = VAR_7->s6id_list[131];
  break;

 case 130:
  VAR_6 = VAR_7->s6id_list[130];
  break;

 case 128:
  VAR_6 = VAR_7->s6id_list[128];
  break;

 case 129:
  VAR_6 = VAR_7->s6id_list[129];
  break;
 default:
  VAR_6 = 0;
  break;
 }
 FUNC_6(VAR_3);

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6;

 if (FUNC_3(VAR_2) || FUNC_2(VAR_2))
  VAR_2->s6_addr16[1] = FUNC_5(VAR_6 & 0xffff);

 return (0);
}

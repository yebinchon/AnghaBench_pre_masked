
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scope6_id {int* s6id_list; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int * FUNC_0 (struct ifnet*) ;




 struct scope6_id* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct in6_addr*) ;

int
FUNC_5(struct ifnet *VAR_0, struct in6_addr *VAR_1)
{
 int VAR_2 = FUNC_4(VAR_1);
 int VAR_3 = 0;
 struct scope6_id *VAR_4;

 FUNC_3(VAR_0);
 if (FUNC_0(VAR_0) == ((void*)0))
  goto err;
 VAR_4 = FUNC_1(VAR_0);
 switch (VAR_2) {
 case 130:
  VAR_3 = -1;
  break;
 case 131:
  VAR_3 = VAR_4->s6id_list[131];
  break;
 case 128:
  VAR_3 = VAR_4->s6id_list[128];
  break;
 case 129:
  VAR_3 = VAR_4->s6id_list[129];
  break;
 default:
  break;
 }
err:
 FUNC_2(VAR_0);

 return (VAR_3);
}

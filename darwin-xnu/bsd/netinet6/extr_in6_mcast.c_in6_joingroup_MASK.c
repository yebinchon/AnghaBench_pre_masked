
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_multi_mship {int i6mm_maddr; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,struct in6_addr*,int *,int *,int) ;
 struct in6_multi_mship* FUNC_1 (int ) ;
 int FUNC_2 (struct in6_multi_mship*) ;

struct in6_multi_mship *
FUNC_3(struct ifnet *VAR_2, struct in6_addr *VAR_3,
    int *VAR_4, int VAR_5)
{
 struct in6_multi_mship *VAR_6;
 int VAR_7;

 *VAR_4 = 0;

 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 == ((void*)0)) {
  *VAR_4 = VAR_0;
  return (((void*)0));
 }

 VAR_7 = FUNC_0(VAR_2, VAR_3, ((void*)0), &VAR_6->i6mm_maddr, VAR_5);
 if (VAR_7) {
  *VAR_4 = VAR_7;
  FUNC_2(VAR_6);
  return (((void*)0));
 }

 return (VAR_6);
}

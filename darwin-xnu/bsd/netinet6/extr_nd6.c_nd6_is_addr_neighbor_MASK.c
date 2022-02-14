
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct rtentry {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sockaddr_in6*,struct ifnet*) ;
 struct rtentry* FUNC_7 (int *,int ,struct ifnet*,int) ;
 int VAR_1 ;

int
FUNC_8(struct sockaddr_in6 *VAR_2, struct ifnet *VAR_3,
    int VAR_4)
{
 struct rtentry *VAR_5;

 FUNC_0(VAR_1, VAR_0);
 FUNC_4(VAR_1);
 if (FUNC_6(VAR_2, VAR_3)) {
  FUNC_5(VAR_1);
  return (1);
 }
 FUNC_5(VAR_1);





 if ((VAR_5 = FUNC_7(&VAR_2->sin6_addr, 0, VAR_3, VAR_4)) != ((void*)0)) {
  FUNC_1(VAR_5);
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
  return (1);
 }

 return (0);
}

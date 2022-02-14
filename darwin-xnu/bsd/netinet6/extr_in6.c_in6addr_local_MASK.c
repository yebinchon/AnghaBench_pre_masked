
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {TYPE_1__* rt_gateway; } ;
struct in6_addr {int dummy; } ;
typedef int sin6 ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct in6_addr*,int *,int) ;
 int FUNC_5 (struct in6_addr*) ;
 struct rtentry* FUNC_6 (struct sockaddr*,int ,int ) ;
 int FUNC_7 (struct rtentry*) ;

int
FUNC_8(struct in6_addr *VAR_2)
{
 struct rtentry *VAR_3;
 struct sockaddr_in6 VAR_4;
 int VAR_5 = 0;

 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  return (1);

 VAR_4 = VAR_0;
 VAR_4 = sizeof (VAR_4);
 FUNC_4(VAR_2, &VAR_4, sizeof (*VAR_2));
 VAR_3 = FUNC_6((struct sockaddr *)&VAR_4, 0, 0);

 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3);
  if (VAR_3->rt_gateway->sa_family == VAR_1)
   VAR_5 = 1;
  FUNC_3(VAR_3);
  FUNC_7(VAR_3);
 } else {
  VAR_5 = FUNC_5(VAR_2);
 }
 return (VAR_5);
}

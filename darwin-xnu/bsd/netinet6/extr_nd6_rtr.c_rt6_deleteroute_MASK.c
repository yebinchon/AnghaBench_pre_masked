
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtentry {int rt_flags; TYPE_1__* rt_gateway; } ;
struct radix_node {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_5__ {int sin6_addr; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct in6_addr*,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (int ,int ,TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_8(
 struct radix_node *VAR_6,
 void *VAR_7)
{
 struct rtentry *VAR_8 = (struct rtentry *)VAR_6;
 struct in6_addr *VAR_9 = (struct in6_addr *)VAR_7;

 FUNC_1(VAR_5, VAR_1);

 FUNC_2(VAR_8);
 if (VAR_8->rt_gateway == ((void*)0) || VAR_8->rt_gateway->sa_family != VAR_0) {
  FUNC_3(VAR_8);
  return (0);
 }

 if (!FUNC_0(VAR_9, &FUNC_4(VAR_8->rt_gateway)->sin6_addr)) {
  FUNC_3(VAR_8);
  return (0);
 }





 if ((VAR_8->rt_flags & VAR_3) != 0) {
  FUNC_3(VAR_8);
  return (0);
 }




 if ((VAR_8->rt_flags & VAR_2) == 0) {
  FUNC_3(VAR_8);
  return (0);
 }






 FUNC_3(VAR_8);
 return (FUNC_7(VAR_4, FUNC_5(VAR_8), VAR_8->rt_gateway,
     FUNC_6(VAR_8), VAR_8->rt_flags, 0));
}

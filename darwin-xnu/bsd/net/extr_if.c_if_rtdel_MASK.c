
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; int rt_gateway; struct ifnet* rt_ifp; } ;
struct radix_node {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (int ,int ,int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_6(struct radix_node *VAR_3, void *VAR_4)
{
 struct rtentry *VAR_5 = (struct rtentry *)VAR_3;
 struct ifnet *VAR_6 = VAR_4;
 int VAR_7;

 if (VAR_5 == ((void*)0))
  return (0);




 FUNC_0(VAR_5);
 if (VAR_5->rt_ifp == VAR_6 && (VAR_5->rt_flags & VAR_1)) {





  FUNC_1(VAR_5);
  VAR_7 = FUNC_5(VAR_2, FUNC_3(VAR_5), VAR_5->rt_gateway,
      FUNC_4(VAR_5), VAR_5->rt_flags, ((void*)0));
  if (VAR_7) {
   FUNC_2(VAR_0, "if_rtdel: error %d\n", VAR_7);
  }
 } else {
  FUNC_1(VAR_5);
 }
 return (0);
}

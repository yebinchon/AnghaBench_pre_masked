
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; } ;
struct radix_node {int dummy; } ;
typedef int nstat_control_state ;
typedef int errno_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (int ,int *,int *,struct rtentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;

__attribute__((used)) static int
FUNC_7(
 struct radix_node *VAR_4,
 void *VAR_5)
{
 errno_t VAR_6 = 0;
 struct rtentry *VAR_7 = (struct rtentry *)VAR_4;
 nstat_control_state *VAR_8 = (nstat_control_state*)VAR_5;

 FUNC_0(VAR_3, VAR_0);


 if ((VAR_7->rt_flags & VAR_1) != 0)
 {

  FUNC_2(VAR_7);
  if (FUNC_5(VAR_7)) {
   FUNC_1(VAR_7);
   FUNC_3(VAR_7);
  } else {
   FUNC_3(VAR_7);
   VAR_7 = ((void*)0);
  }


  if (VAR_7 == ((void*)0))
   return (0);

  VAR_6 = FUNC_4(0, VAR_8, &VAR_2, VAR_7);
  if (VAR_6 != 0)
   FUNC_6(VAR_7);
 }

 return VAR_6;
}

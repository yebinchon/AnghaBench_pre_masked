
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_eflags; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ifnet*,int) ;

errno_t
FUNC_4(struct ifnet *VAR_2, u_int32_t VAR_3)
{
 FUNC_1(VAR_2);
 if (VAR_3 > 1) {
  FUNC_0(VAR_2);
  return (VAR_0);
 }
 if (VAR_3 == 0)
  VAR_2->if_eflags &= ~VAR_1;
 else
  VAR_2->if_eflags |= VAR_1;
 FUNC_0(VAR_2);





 FUNC_3(VAR_2, VAR_3);
 return (0);
}

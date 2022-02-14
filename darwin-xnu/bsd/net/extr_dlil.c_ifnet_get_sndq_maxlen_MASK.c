
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_eflags; int if_snd; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

errno_t
FUNC_1(struct ifnet *VAR_3, u_int32_t *VAR_4)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);
 else if (!(VAR_3->if_eflags & VAR_2))
  return (VAR_1);

 *VAR_4 = FUNC_0(&VAR_3->if_snd);

 return (0);
}

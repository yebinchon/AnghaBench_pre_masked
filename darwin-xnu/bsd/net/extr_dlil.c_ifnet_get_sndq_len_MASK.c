
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
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,int *) ;

errno_t
FUNC_1(struct ifnet *VAR_4, u_int32_t *VAR_5)
{
 errno_t VAR_6;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  VAR_6 = VAR_0;
 else if (!(VAR_4->if_eflags & VAR_2))
  VAR_6 = VAR_1;
 else
  VAR_6 = FUNC_0(&VAR_4->if_snd, VAR_3,
      VAR_5, ((void*)0));

 return (VAR_6);
}

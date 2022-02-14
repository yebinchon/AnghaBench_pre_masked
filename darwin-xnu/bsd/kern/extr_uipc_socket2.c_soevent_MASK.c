
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; int so_restrictions; int so_klist; } ;


 int FUNC_0 (int *,long) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*,long) ;

void
FUNC_3(struct socket *VAR_5, long VAR_6)
{
 if (VAR_5->so_flags & VAR_0)
  FUNC_0(&VAR_5->so_klist, VAR_6);

 FUNC_2(VAR_5, VAR_6);





 if ((VAR_6 & VAR_2) &&
     !(VAR_5->so_flags & VAR_1) &&
     !(VAR_5->so_restrictions & VAR_3) &&
     !(VAR_5->so_restrictions & VAR_4))
  FUNC_1(VAR_5);
}

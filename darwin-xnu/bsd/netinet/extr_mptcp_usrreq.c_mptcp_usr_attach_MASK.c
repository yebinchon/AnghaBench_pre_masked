
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_options; int so_linger; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*,struct proc*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_3, int VAR_4, struct proc *VAR_5)
{
#pragma unused(proto)
 int VAR_6;

 FUNC_0(FUNC_1(VAR_3) == ((void*)0));

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6 != 0)
  goto out;





 if ((VAR_3->so_options & VAR_0) && VAR_3->so_linger == 0)
  VAR_3->so_linger = VAR_1 * VAR_2;
out:
 return (VAR_6);
}

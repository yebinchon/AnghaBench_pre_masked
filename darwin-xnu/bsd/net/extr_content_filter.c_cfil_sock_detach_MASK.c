
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_flags; scalar_t__ so_usecount; int * so_cfil; } ;
typedef int errno_t ;
struct TYPE_2__ {int cfs_sock_detached; } ;


 scalar_t__ FUNC_0 (struct socket*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;

errno_t
FUNC_5(struct socket *VAR_2)
{
 if (FUNC_0(VAR_2)) {
  FUNC_3(VAR_2);
  return (0);
 }

 if (VAR_2->so_cfil) {
  if (VAR_2->so_flags & VAR_0) {
   VAR_2->so_flags &= ~VAR_0;
   FUNC_2(VAR_2->so_usecount > 0);
   VAR_2->so_usecount--;
  }
  FUNC_4(VAR_2->so_cfil);
  VAR_2->so_cfil = ((void*)0);
  FUNC_1(&VAR_1.cfs_sock_detached);
 }
 return (0);
}

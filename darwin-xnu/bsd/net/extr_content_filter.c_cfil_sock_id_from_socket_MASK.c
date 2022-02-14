
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_flags; TYPE_1__* so_cfil; } ;
typedef int cfil_sock_id_t ;
struct TYPE_2__ {int cfi_sock_id; } ;


 int VAR_0 ;
 int VAR_1 ;

cfil_sock_id_t
FUNC_0(struct socket *VAR_2)
{
 if ((VAR_2->so_flags & VAR_1) && VAR_2->so_cfil)
  return (VAR_2->so_cfil->cfi_sock_id);
 else
  return (VAR_0);
}

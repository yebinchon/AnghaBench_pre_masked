
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int u_long ;
struct socket {int dummy; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef int proc_t ;
typedef int caddr_t ;
struct TYPE_2__ {scalar_t__ fg_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct fileproc *VAR_1, u_long VAR_2, caddr_t VAR_3, vfs_context_t VAR_4)
{
 struct socket *VAR_5;
 proc_t VAR_6 = FUNC_1(VAR_4);

 if ((VAR_5 = (struct socket *)VAR_1->f_fglob->fg_data) == ((void*)0)) {

  return (VAR_0);
 }

 return (FUNC_0(VAR_5, VAR_2, VAR_3, VAR_6));
}

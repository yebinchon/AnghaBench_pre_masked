
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
struct necp_fd_data {int dummy; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef int proc_t ;
struct TYPE_2__ {scalar_t__ fg_data; } ;



 int FUNC_0 (struct necp_fd_data*) ;
 int FUNC_1 (struct necp_fd_data*) ;
 int VAR_0 ;
 int FUNC_2 (struct necp_fd_data*,int,void*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct fileproc *VAR_1, int VAR_2, void *VAR_3, vfs_context_t VAR_4)
{
#pragma unused(fp, which, wql, ctx)
 return (0);
 struct necp_fd_data *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7 = 0;
 proc_t VAR_8;

 VAR_5 = (struct necp_fd_data *)VAR_1->f_fglob->fg_data;
 if (VAR_5 == ((void*)0)) {
  return (0);
 }

 VAR_8 = FUNC_3(VAR_4);

 switch (VAR_2) {
  case 128: {
   VAR_7 = VAR_0;
   break;
  }

  default: {
   return (1);
  }
 }

 FUNC_0(VAR_5);
 VAR_6 = FUNC_2(VAR_5, VAR_7, VAR_3, VAR_8, 0);
 FUNC_1(VAR_5);

 return ((VAR_7 & VAR_6) ? 1 : 0);
}

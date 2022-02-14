
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int u_long ;
struct fileproc {TYPE_1__* f_ops; } ;
typedef int caddr_t ;
struct TYPE_2__ {int (* fo_ioctl ) (struct fileproc*,int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fileproc*,int ,int ,int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct fileproc *VAR_0, u_long VAR_1, caddr_t VAR_2, vfs_context_t VAR_3)
{
 int VAR_4;

 FUNC_1(FUNC_3(VAR_3));
 VAR_4 = (*VAR_0->f_ops->fo_ioctl)(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(FUNC_3(VAR_3));
 return(VAR_4);
}

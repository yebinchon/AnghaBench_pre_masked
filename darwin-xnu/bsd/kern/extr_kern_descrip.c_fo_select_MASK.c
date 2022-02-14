
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
struct fileproc {TYPE_1__* f_ops; } ;
struct TYPE_2__ {int (* fo_select ) (struct fileproc*,int,void*,int ) ;} ;


 int FUNC_0 (struct fileproc*,int,void*,int ) ;

int
FUNC_1(struct fileproc *VAR_0, int VAR_1, void *VAR_2, vfs_context_t VAR_3)
{
 return((*VAR_0->f_ops->fo_select)(VAR_0, VAR_1, VAR_2, VAR_3));
}

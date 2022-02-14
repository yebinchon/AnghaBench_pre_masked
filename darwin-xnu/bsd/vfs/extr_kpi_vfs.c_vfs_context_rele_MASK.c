
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vfs_context_t ;
struct vfs_context {int dummy; } ;
struct TYPE_4__ {int vc_ucred; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3(vfs_context_t VAR_0)
{
 if (VAR_0) {
  if (FUNC_0(VAR_0->vc_ucred))
   FUNC_1(&VAR_0->vc_ucred);
  FUNC_2(VAR_0, sizeof(struct vfs_context));
 }
 return(0);
}

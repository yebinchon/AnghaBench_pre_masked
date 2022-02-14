
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
struct vnode {int dummy; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_5__ {TYPE_1__* p_fd; } ;
struct TYPE_4__ {struct vnode* fd_rdir; } ;


 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct vnode*) ;

vnode_t
FUNC_2(void)
{
 proc_t VAR_0 = FUNC_0();
 struct vnode * VAR_1 ;

 if ( (VAR_1 = VAR_0->p_fd->fd_rdir) ) {
         if ( (FUNC_1(VAR_1)) )
          return (((void*)0));
 }
 return VAR_1;
}

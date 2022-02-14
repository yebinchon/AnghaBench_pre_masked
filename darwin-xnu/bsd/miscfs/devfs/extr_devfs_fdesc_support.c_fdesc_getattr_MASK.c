
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnop_getattr_args {int a_context; struct vnode_attr* a_vap; struct vnode* a_vp; } ;
struct vnode_attr {int va_type; } ;
struct vnode {int v_type; } ;
struct TYPE_2__ {int fd_type; unsigned int fd_fd; } ;



 TYPE_1__* FUNC_0 (struct vnode*) ;
 int FUNC_1 (unsigned int,struct vnode_attr*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vnop_getattr_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;
 struct vnode_attr *VAR_2 = VAR_0->a_vap;
 unsigned VAR_3;
 int VAR_4 = 0;

 switch (FUNC_0(VAR_1)->fd_type) {
 case 128:
  VAR_3 = FUNC_0(VAR_1)->fd_fd;
  VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_0->a_context);
  break;

 default:
  FUNC_2("Invalid type for an fdesc node!\n");
  break;
 }





 if (VAR_4 == 0) {
  VAR_1->v_type = VAR_2->va_type;


  FUNC_3(VAR_1);
 }

 return (VAR_4);
}

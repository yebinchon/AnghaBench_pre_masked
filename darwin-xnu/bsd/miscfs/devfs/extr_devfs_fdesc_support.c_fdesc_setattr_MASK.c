
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnop_setattr_args {int a_context; int a_vap; int a_vp; } ;
struct vnode {int dummy; } ;
struct proc {int dummy; } ;
struct fileproc {TYPE_2__* f_fglob; } ;
struct TYPE_4__ {scalar_t__ fg_data; } ;
struct TYPE_3__ {int fd_type; unsigned int fd_fd; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct proc*,unsigned int,struct fileproc*,int ) ;
 int FUNC_3 (struct proc*,unsigned int,struct fileproc**,int ) ;
 int FUNC_4 (char*) ;
 struct proc* FUNC_5 (int ) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,int ,int ) ;

int
FUNC_9(struct vnop_setattr_args *VAR_2)
{
 struct fileproc *VAR_3;
 unsigned VAR_4;
 int VAR_5;
 struct proc * VAR_6 = FUNC_5(VAR_2->a_context);




 switch (FUNC_1(VAR_2->a_vp)->fd_type) {
 case 128:
  break;
 default:
  FUNC_4("Invalid type for an fdesc node!\n");
  return (VAR_0);
 }

 VAR_4 = FUNC_1(VAR_2->a_vp)->fd_fd;
 if ((VAR_5 = FUNC_3(FUNC_5(VAR_2->a_context), VAR_4, &VAR_3, 0)))
  return (VAR_5);




 switch (FUNC_0(VAR_3->f_fglob)) {
 case 129:
 {
  if ((VAR_5 = FUNC_6((struct vnode *) VAR_3->f_fglob->fg_data)) != 0)
   break;
  VAR_5 = FUNC_8((struct vnode *) VAR_3->f_fglob->fg_data, VAR_2->a_vap, VAR_2->a_context);
  (void)FUNC_7((struct vnode *) VAR_3->f_fglob->fg_data);
  break;
 }

 case 130:
 case 131:
  VAR_5 = 0;
  break;

 default:
  VAR_5 = VAR_1;
  break;
 }

 FUNC_2(VAR_6, VAR_4, VAR_3, 0);
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int * thread_t ;
struct vnop_open_args {int a_context; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct TYPE_5__ {int fd_type; int fd_fd; } ;
struct TYPE_4__ {int uu_dupfd; } ;


 int VAR_0 ;
 int VAR_1 ;

 TYPE_3__* FUNC_0 (struct vnode*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ) ;

int
FUNC_4(struct vnop_open_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 thread_t VAR_4 = FUNC_3(VAR_2->a_context);
 uthread_t VAR_5;
 int VAR_6 = 0;

 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_1(VAR_4);

 switch (FUNC_0(VAR_3)->fd_type) {
 case 128:
  VAR_5->uu_dupfd = FUNC_0(VAR_3)->fd_fd;
  VAR_6 = VAR_1;
  break;
 default:
  FUNC_2("Invalid type for fdesc node!");
  break;
 }

 return (VAR_6);
}

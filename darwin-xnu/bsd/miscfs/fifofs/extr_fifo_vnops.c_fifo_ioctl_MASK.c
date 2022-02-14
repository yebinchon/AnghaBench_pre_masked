
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnop_ioctl_args {int a_fflag; int a_context; int a_data; int a_command; TYPE_2__* a_vp; } ;
struct fileproc {struct fileglob* f_fglob; } ;
struct fileglob {void* fg_data; } ;
typedef void* caddr_t ;
struct TYPE_4__ {TYPE_1__* v_fifoinfo; } ;
struct TYPE_3__ {scalar_t__ fi_writesock; scalar_t__ fi_readsock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fileproc*,int) ;
 int FUNC_1 (struct fileproc*,int ,int ,int ) ;

int
FUNC_2(struct vnop_ioctl_args *VAR_3)
{
 struct fileproc VAR_4;
 struct fileglob VAR_5;
 int VAR_6;

 if (VAR_3->a_command == VAR_0)
  return (0);
 FUNC_0(&VAR_4, sizeof(struct fileproc));
 VAR_4.f_fglob = &VAR_5;
 if (VAR_3->a_fflag & VAR_1) {
  VAR_4.f_fglob->fg_data = (caddr_t)VAR_3->a_vp->v_fifoinfo->fi_readsock;
  VAR_6 = FUNC_1(&VAR_4, VAR_3->a_command, VAR_3->a_data, VAR_3->a_context);
  if (VAR_6)
   return (VAR_6);
 }
 if (VAR_3->a_fflag & VAR_2) {
  VAR_4.f_fglob->fg_data = (caddr_t)VAR_3->a_vp->v_fifoinfo->fi_writesock;
  VAR_6 = FUNC_1(&VAR_4, VAR_3->a_command, VAR_3->a_data, VAR_3->a_context);
  if (VAR_6)
   return (VAR_6);
 }
 return (0);
}

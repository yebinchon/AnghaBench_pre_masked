
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnop_select_args {int a_which; int a_context; int a_wql; TYPE_2__* a_vp; } ;
struct fileproc {struct fileglob* f_fglob; } ;
struct fileglob {void* fg_data; } ;
typedef void* caddr_t ;
struct TYPE_4__ {TYPE_1__* v_fifoinfo; } ;
struct TYPE_3__ {scalar_t__ fi_writesock; scalar_t__ fi_readsock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fileproc*,int) ;
 int FUNC_1 (struct fileproc*,int,int ,int ) ;

int
FUNC_2(struct vnop_select_args *VAR_2)
{
 struct fileproc VAR_3;
 struct fileglob VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3, sizeof(struct fileproc));
 VAR_3.f_fglob = &VAR_4;
 if (VAR_2->a_which & VAR_0) {
  VAR_3.f_fglob->fg_data = (caddr_t)VAR_2->a_vp->v_fifoinfo->fi_readsock;
  VAR_5 = FUNC_1(&VAR_3, VAR_2->a_which, VAR_2->a_wql, VAR_2->a_context);
  if (VAR_5)
   return (VAR_5);
 }
 if (VAR_2->a_which & VAR_1) {
  VAR_3.f_fglob->fg_data = (caddr_t)VAR_2->a_vp->v_fifoinfo->fi_writesock;
  VAR_5 = FUNC_1(&VAR_3, VAR_2->a_which, VAR_2->a_wql, VAR_2->a_context);
  if (VAR_5)
   return (VAR_5);
 }
 return (0);
}

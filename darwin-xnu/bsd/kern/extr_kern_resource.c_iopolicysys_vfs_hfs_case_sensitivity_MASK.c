
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct proc {int p_vfs_iopolicy; } ;
struct _iopol_param_t {int iop_policy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct proc *VAR_4, int VAR_5, int VAR_6, int VAR_7, struct _iopol_param_t *VAR_8)
{
 int VAR_9 = 0;


 switch (VAR_6) {
  case 130:

   break;
  default:
   VAR_9 = VAR_0;
   goto out;
 }


 if (VAR_5 == 131) {
  switch (VAR_7) {
   case 129:

   case 128:

    break;
   default:
    VAR_9 = VAR_0;
    goto out;
  }
 }


 switch(VAR_5) {
  case 131:
   if (0 == FUNC_5(FUNC_4())) {

    boolean_t VAR_10 = VAR_2;
    VAR_10 = FUNC_0(FUNC_3(), "com.apple.private.iopol.case_sensitivity");
    if (!VAR_10) {
     VAR_9 = VAR_1;
     goto out;
    }
   }

   switch (VAR_7) {
    case 129:
     FUNC_1(~((uint32_t)VAR_3), &VAR_4->p_vfs_iopolicy);
     break;
    case 128:
     FUNC_2((uint32_t)VAR_3, &VAR_4->p_vfs_iopolicy);
     break;
    default:
     VAR_9 = VAR_0;
     goto out;
   }

   break;
  case 132:
   VAR_8->iop_policy = (VAR_4->p_vfs_iopolicy & VAR_3)
    ? 128
    : 129;
   break;
  default:
   VAR_9 = VAR_0;
   break;
 }

out:
 return (VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct iopolicysys_args {scalar_t__ cmd; int arg; } ;
struct _iopol_param_t {int iop_iotype; int iop_policy; int iop_scope; } ;
typedef int iop_param ;
typedef int int32_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_0 (int ,struct _iopol_param_t*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct proc*,scalar_t__,int ,int ,struct _iopol_param_t*) ;
 int FUNC_3 (struct proc*,scalar_t__,int ,int ,struct _iopol_param_t*) ;
 int FUNC_4 (struct proc*,scalar_t__,int ,int ,struct _iopol_param_t*) ;

int
FUNC_5(struct proc *VAR_3, struct iopolicysys_args *VAR_4, int32_t *VAR_5)
{
 int VAR_6 = 0;
 struct _iopol_param_t VAR_7;

 if ((VAR_6 = FUNC_0(VAR_4->arg, &VAR_7, sizeof(VAR_7))) != 0)
  goto out;

 switch (VAR_7.iop_iotype) {
  case 130:
   VAR_6 = FUNC_2(VAR_3, VAR_4->cmd, VAR_7.iop_scope, VAR_7.iop_policy, &VAR_7);
   if (VAR_6 == VAR_0) {
    *VAR_5 = -2;
    VAR_6 = 0;
   }
   if (VAR_6)
    goto out;
   break;
  case 128:
   VAR_6 = FUNC_4(VAR_3, VAR_4->cmd, VAR_7.iop_scope, VAR_7.iop_policy, &VAR_7);
   if (VAR_6)
    goto out;
   break;
  case 129:
   VAR_6 = FUNC_3(VAR_3, VAR_4->cmd, VAR_7.iop_scope, VAR_7.iop_policy, &VAR_7);
   if (VAR_6)
    goto out;
   break;
  default:
   VAR_6 = VAR_1;
   goto out;
 }


 if (VAR_4->cmd == VAR_2) {
  VAR_6 = FUNC_1((caddr_t)&VAR_7, VAR_4->arg, sizeof(VAR_7));
  if (VAR_6)
   goto out;
 }

out:
 return (VAR_6);
}

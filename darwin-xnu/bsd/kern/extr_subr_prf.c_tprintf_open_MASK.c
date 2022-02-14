
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tpr_t ;
struct session {scalar_t__ s_ttyvp; } ;
struct proc {int p_flag; } ;


 int VAR_0 ;
 struct session* VAR_1 ;
 struct session* FUNC_0 (struct proc*) ;
 int FUNC_1 (struct session*) ;

tpr_t
FUNC_2(struct proc *VAR_2)
{
 struct session * VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->p_flag & VAR_0 && VAR_3->s_ttyvp) {
  return ((tpr_t)VAR_3);
 }
 if (VAR_3 != VAR_1)
  FUNC_1(VAR_3);

 return ((tpr_t) ((void*)0));
}

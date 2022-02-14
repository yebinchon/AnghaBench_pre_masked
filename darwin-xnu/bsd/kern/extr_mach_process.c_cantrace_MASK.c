
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef int kauth_cred_t ;
struct TYPE_9__ {scalar_t__ p_pid; int p_lflag; int p_flag; int p_acflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int *) ;

int
FUNC_6(proc_t VAR_6, kauth_cred_t VAR_7, proc_t VAR_8, int *VAR_9)
{
 int VAR_10;




 if (VAR_8->p_pid == VAR_6->p_pid) {
  *VAR_9 = VAR_1;
  return (0);
 }




 if (FUNC_0(VAR_8->p_lflag, VAR_4)) {
  *VAR_9 = VAR_0;
  return (0);
 }





 if ((FUNC_2(VAR_7) != FUNC_2(FUNC_4(VAR_8)) ||
  FUNC_0(VAR_8->p_flag, VAR_5)) &&
  (VAR_10 = FUNC_5(VAR_7, &VAR_6->p_acflag)) != 0) {
  *VAR_9 = VAR_10;
  return (0);
 }

 if ((VAR_6->p_lflag & VAR_4) && FUNC_1(VAR_6, VAR_8)) {
  *VAR_9 = VAR_2;
  return (0);
 }

 if (FUNC_0(VAR_8->p_lflag, VAR_3)) {
  *VAR_9 = VAR_0;
  return (0);
 }
 return(1);
}

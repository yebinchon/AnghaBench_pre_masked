
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct proc {int dummy; } ;
struct necp_session_open_args {int dummy; } ;
struct necp_session {int dummy; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
struct TYPE_2__ {struct necp_session* fg_data; int * fg_ops; scalar_t__ fg_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct proc*,struct fileproc**,int*,int ) ;
 int FUNC_3 (struct proc*,int,struct fileproc*,int) ;
 int FUNC_4 (struct proc*,int,struct fileproc*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 struct necp_session* FUNC_7 () ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (struct proc*) ;
 int FUNC_11 (struct proc*) ;
 int FUNC_12 (struct proc*,int,int *) ;
 int FUNC_13 () ;

int
FUNC_14(struct proc *VAR_7, struct necp_session_open_args *VAR_8, int *VAR_9)
{
#pragma unused(uap)
 int VAR_10 = 0;
 struct necp_session *VAR_11 = ((void*)0);
 struct fileproc *VAR_12 = ((void*)0);
 int VAR_13 = -1;

 uid_t VAR_14 = FUNC_6(FUNC_11(VAR_7));
 if (VAR_14 != 0 && FUNC_8(FUNC_5(), VAR_3, 0) != 0) {
  FUNC_1(VAR_2, "Process does not hold necessary entitlement to open NECP session");
  VAR_10 = VAR_0;
  goto done;
 }

 VAR_10 = FUNC_2(VAR_7, &VAR_12, &VAR_13, FUNC_13());
 if (VAR_10 != 0) {
  goto done;
 }

 VAR_11 = FUNC_7();
 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_1;
  goto done;
 }

 VAR_12->f_fglob->fg_flag = 0;
 VAR_12->f_fglob->fg_ops = &VAR_6;
 VAR_12->f_fglob->fg_data = VAR_11;

 FUNC_9(VAR_7);
 FUNC_0(VAR_7, VAR_13, (VAR_4 | VAR_5));
 FUNC_12(VAR_7, VAR_13, ((void*)0));
 FUNC_3(VAR_7, VAR_13, VAR_12, 1);
 FUNC_10(VAR_7);

 *VAR_9 = VAR_13;
done:
 if (VAR_10 != 0) {
  if (VAR_12 != ((void*)0)) {
   FUNC_4(VAR_7, VAR_13, VAR_12);
   VAR_12 = ((void*)0);
  }
 }

 return (VAR_10);
}

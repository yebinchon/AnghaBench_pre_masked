
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct session {int dummy; } ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ kauth_cred_t ;
struct TYPE_8__ {struct session* pg_session; } ;
struct TYPE_7__ {TYPE_6__* p_pgrp; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 struct session* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(proc_t VAR_6, kauth_cred_t VAR_7, proc_t VAR_8, int VAR_9)
{

 if (VAR_6 == VAR_8) {
  return 1;
 }


 if (VAR_9 == VAR_4 && VAR_8 == VAR_5) {
  return 0;
 }


 if (FUNC_3(VAR_7)) {
  return 1;
 }


 {
  struct session *VAR_10 = VAR_2;
  struct session *VAR_11 = VAR_2;


  FUNC_6();
  if (VAR_6->p_pgrp != VAR_1) {
   VAR_10 = VAR_6->p_pgrp->pg_session;
  }
  if (VAR_8->p_pgrp != VAR_1) {
   VAR_11 = VAR_8->p_pgrp->pg_session;
  }
  FUNC_7();


  if (VAR_9 == VAR_3 && VAR_10 == VAR_11) {
   return 1;
  }
 }


 {
  int VAR_12 = 0;
  kauth_cred_t VAR_13 = VAR_0, VAR_14 = VAR_0;

  VAR_13 = VAR_14 = FUNC_4(VAR_8);





  if (FUNC_0(VAR_7) == FUNC_0(VAR_13) ||
   FUNC_0(VAR_7) == FUNC_1(VAR_13) ||
   FUNC_2(VAR_7) == FUNC_0(VAR_13) ||
   FUNC_2(VAR_7) == FUNC_1(VAR_13)) {
   VAR_12 = 1;
  }

  if (VAR_14 != VAR_0) {
   FUNC_5(&VAR_14);
   VAR_14 = VAR_0;
  }

  return VAR_12;
 }
}

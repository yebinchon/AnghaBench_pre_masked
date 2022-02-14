
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;
struct pgrp {scalar_t__ pg_jobc; struct session* pg_session; } ;
struct fixjob_iterargs {int entering; struct session* mysession; struct pgrp* pg; } ;
typedef scalar_t__ proc_t ;
typedef scalar_t__ boolean_t ;


 struct pgrp* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct session* VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct pgrp*) ;
 int FUNC_3 (struct pgrp*) ;
 int FUNC_4 (struct pgrp*) ;
 int FUNC_5 (scalar_t__,int ,struct fixjob_iterargs*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct pgrp* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 struct session* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct session*) ;

void
FUNC_12(proc_t VAR_4, struct pgrp *VAR_5, int VAR_6)
{
 struct pgrp *VAR_7 = VAR_0;
 struct session *VAR_8 = VAR_2;
 struct session *VAR_9 = VAR_5->pg_session;
 proc_t VAR_10;
 struct fixjob_iterargs VAR_11;
 boolean_t VAR_12;






 VAR_12 = FUNC_7(VAR_4);
 if (VAR_12)
  VAR_10 = FUNC_0();
 else
  VAR_10 = FUNC_6(VAR_4);

 if (VAR_10 != VAR_1) {
  VAR_7 = FUNC_8(VAR_10);
  VAR_8 = FUNC_10(VAR_10);
  if (!VAR_12)
   FUNC_9(VAR_10);
 }






 if ((VAR_7 != VAR_5) &&
     (VAR_8 == VAR_9)) {
  FUNC_3(VAR_5);
  if (VAR_6) {
   VAR_5->pg_jobc++;
   FUNC_4(VAR_5);
   }else if (--VAR_5->pg_jobc == 0) {
   FUNC_4(VAR_5);
   FUNC_1(VAR_5);
  } else
   FUNC_4(VAR_5);
 }

 if (VAR_8 != VAR_2)
  FUNC_11(VAR_8);
 if (VAR_7 != VAR_0)
  FUNC_2(VAR_7);






 VAR_11.pg = VAR_5;
 VAR_11.mysession = VAR_9;
 VAR_11.entering = VAR_6;
 FUNC_5(VAR_4, VAR_3, &VAR_11);
}

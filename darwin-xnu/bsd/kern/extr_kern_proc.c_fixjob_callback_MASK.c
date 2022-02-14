
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;
struct pgrp {scalar_t__ pg_jobc; } ;
struct fixjob_iterargs {int entering; struct session* mysession; struct pgrp* pg; } ;
typedef int proc_t ;


 struct pgrp* VAR_0 ;
 int VAR_1 ;
 struct session* VAR_2 ;
 int FUNC_0 (struct pgrp*) ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct pgrp*) ;
 int FUNC_3 (struct pgrp*) ;
 struct pgrp* FUNC_4 (int ) ;
 struct session* FUNC_5 (int ) ;
 int FUNC_6 (struct session*) ;

int
FUNC_7(proc_t VAR_3, void * VAR_4)
{
 struct fixjob_iterargs *VAR_5;
 struct pgrp * VAR_6, *VAR_7;
 struct session * VAR_8, *VAR_9;
 int VAR_10;

 VAR_5 = (struct fixjob_iterargs *)VAR_4;
 VAR_6 = VAR_5->pg;
 VAR_8 = VAR_5->mysession;
 VAR_10 = VAR_5->entering;

 VAR_7 = FUNC_4(VAR_3);
 VAR_9 = FUNC_5(VAR_3);

 if ((VAR_7 != VAR_6) &&
     (VAR_9 == VAR_8)) {
  FUNC_2(VAR_7);
  if (VAR_10) {
   VAR_7->pg_jobc++;
   FUNC_3(VAR_7);
  } else if (--VAR_7->pg_jobc == 0) {
   FUNC_3(VAR_7);
   FUNC_0(VAR_7);
  } else
   FUNC_3(VAR_7);
 }
 if (VAR_9 != VAR_2)
  FUNC_6(VAR_9);
 if (VAR_7 != VAR_0)
  FUNC_1(VAR_7);

 return(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setpriority_args {int which; int who; int prio; } ;
struct puser_nice_args {int prio; int who; int* foundp; int* errorp; struct proc* curp; } ;
struct proc {int dummy; } ;
struct ppgrp_nice_args {int prio; int* foundp; int* errorp; struct proc* curp; } ;
struct pgrp {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pgrp* VAR_4 ;







 int VAR_5 ;
 struct proc* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (struct proc*,struct proc*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct proc*,struct proc*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 struct pgrp* FUNC_7 (int) ;
 int FUNC_8 (struct pgrp*,int ,int ,void*,int *,int *) ;
 int VAR_9 ;
 struct proc* FUNC_9 (int) ;
 int FUNC_10 (int ,int ,void*,int *,int *) ;
 struct pgrp* FUNC_11 (struct proc*) ;
 int FUNC_12 (struct proc*) ;
 int FUNC_13 (struct proc*,struct proc*,int) ;
 int VAR_10 ;
 int FUNC_14 (struct proc*,struct proc*,int) ;
 int VAR_11 ;

int
FUNC_15(struct proc *VAR_12, struct setpriority_args *VAR_13, int32_t *VAR_14)
{
 struct proc *VAR_15;
 int VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0;

 FUNC_0(VAR_7, VAR_13->which);
 FUNC_0(VAR_8, VAR_13->who, 0);
 FUNC_0(VAR_11, VAR_13->prio);


 if (VAR_13->who > 0x7fffffff)
  return (VAR_1);

 switch (VAR_13->which) {

 case 129:
  if (VAR_13->who == 0)
   VAR_15 = VAR_12;
  else {
   VAR_15 = FUNC_9(VAR_13->who);
   if (VAR_15 == 0)
    break;
   VAR_18 = 1;
  }
  VAR_17 = FUNC_4(VAR_12, VAR_15, VAR_13->prio);
  VAR_16++;
  if (VAR_18 != 0)
   FUNC_12(VAR_15);
  break;

 case 130: {
  struct pgrp *VAR_19 = VAR_4;
  struct ppgrp_nice_args VAR_20;

  if (VAR_13->who == 0) {
   VAR_19 = FUNC_11(VAR_12);
   } else if ((VAR_19 = FUNC_7(VAR_13->who)) == VAR_4)
   break;

  VAR_20.curp = VAR_12;
  VAR_20.prio = VAR_13->prio;
  VAR_20.foundp = &VAR_16;
  VAR_20.errorp = &VAR_17;


  FUNC_8(VAR_19, VAR_3, VAR_9, (void *)&VAR_20, ((void*)0), ((void*)0));

  break;
 }

 case 128: {
  struct puser_nice_args VAR_21;

  if (VAR_13->who == 0)
   VAR_13->who = FUNC_6(FUNC_5());

  VAR_21.curp = VAR_12;
  VAR_21.prio = VAR_13->prio;
  VAR_21.who = VAR_13->who;
  VAR_21.foundp = &VAR_16;
  VAR_17 = 0;
  VAR_21.errorp = &VAR_17;
  FUNC_10(VAR_5, VAR_10, (void *)&VAR_21, ((void*)0), ((void*)0));

  break;
 }

 case 131: {

  if (VAR_13->who != 0)
   return (VAR_1);

  VAR_17 = FUNC_3(FUNC_1(), VAR_13->prio);
  VAR_16++;
  break;
 }

 case 133: {
  if (VAR_13->who == 0)
   VAR_15 = VAR_12;
  else {
   VAR_15 = FUNC_9(VAR_13->who);
   if (VAR_15 == 0)
    break;
   VAR_18 = 1;
  }

  VAR_17 = FUNC_2(VAR_12, VAR_15, VAR_13->prio);

  VAR_16++;
  if (VAR_18 != 0)
   FUNC_12(VAR_15);
  break;
 }

 case 134: {
  if (VAR_13->who == 0)
   return (VAR_1);

  VAR_15 = FUNC_9(VAR_13->who);
  if (VAR_15 == VAR_6)
   break;

  VAR_17 = FUNC_14(VAR_12, VAR_15, VAR_13->prio);

  VAR_16++;
  FUNC_12(VAR_15);
  break;
 }

 case 132: {
  if (VAR_13->who == 0) {
   VAR_15 = VAR_12;
  } else {
   VAR_15 = FUNC_9(VAR_13->who);
   if (VAR_15 == VAR_6)
    break;
   VAR_18 = 1;
  }

  VAR_17 = FUNC_13(VAR_12, VAR_15, VAR_13->prio);

  VAR_16++;
  if (VAR_18 != 0)
   FUNC_12(VAR_15);
  break;
 }

 default:
  return (VAR_1);
 }
 if (VAR_16 == 0)
  return (VAR_2);
 if (VAR_17 == VAR_0) {
  *VAR_14 = -2;
  VAR_17 = 0;
 }
 return (VAR_17);
}

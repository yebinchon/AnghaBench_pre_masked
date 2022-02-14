
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pgrp {int pg_listflags; int pg_refcount; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int p_listflag; struct pgrp* p_pgrp; int p_pgrpid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pgrp* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 () ;

struct pgrp *
FUNC_5(proc_t VAR_7)
{
 struct pgrp * VAR_8;

 if (VAR_7 == VAR_3)
  return(VAR_2);
 FUNC_3();

 while ((VAR_7->p_listflag & VAR_4) == VAR_4) {
  VAR_7->p_listflag |= VAR_5;
  (void)FUNC_1(&VAR_7->p_pgrpid, VAR_6, 0, "proc_pgrp", 0);
 }

 VAR_8 = VAR_7->p_pgrp;

 FUNC_0(VAR_8 != ((void*)0));

 if (VAR_8 != VAR_2) {
  VAR_8->pg_refcount++;
  if ((VAR_8->pg_listflags & (VAR_1 | VAR_0)) != 0)
   FUNC_2("proc_pgrp: ref being povided for dead pgrp");
 }

 FUNC_4();

 return(VAR_8);
}

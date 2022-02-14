
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_listflag; int * p_pgrp; int p_pgrpid; } ;
struct TYPE_2__ {scalar_t__ lh_first; } ;
struct pgrp {scalar_t__ pg_membercnt; TYPE_1__ pg_members; } ;


 int FUNC_0 (struct proc*,int ) ;
 int VAR_0 ;
 struct pgrp* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct pgrp*) ;
 int FUNC_3 (struct pgrp*) ;
 int FUNC_4 (struct pgrp*) ;
 int FUNC_5 (struct pgrp*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct pgrp* FUNC_8 (struct proc*) ;

__attribute__((used)) static void
FUNC_9(struct proc * VAR_4)
{
 struct pgrp * VAR_5;

 VAR_5 = FUNC_8(VAR_4);

 FUNC_6();




 VAR_4->p_pgrpid = VAR_0;
 VAR_4->p_listflag &= ~VAR_2;
 VAR_4->p_pgrp = ((void*)0);
 FUNC_7();

 if (VAR_5 == VAR_1)
  FUNC_1("pgrp_remove: pg is NULL");
 FUNC_4(VAR_5);
 VAR_5->pg_membercnt--;

 if (VAR_5->pg_membercnt < 0)
  FUNC_1("pgprp: -ve membercnt pgprp:%p p:%p\n",VAR_5, VAR_4);

 FUNC_0(VAR_4, VAR_3);
 if (VAR_5->pg_members.lh_first == 0) {
  FUNC_5(VAR_5);
  FUNC_3(VAR_5);
 } else {
  FUNC_5(VAR_5);
  FUNC_2(VAR_5);
 }
}

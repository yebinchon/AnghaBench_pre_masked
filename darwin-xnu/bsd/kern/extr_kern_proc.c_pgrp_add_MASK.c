
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_listflag; int p_pgrpid; struct pgrp* p_pgrp; } ;
struct pgrp {int pg_listflags; scalar_t__ pg_membercnt; int pg_members; int pg_id; } ;


 int FUNC_0 (struct proc*,struct proc*,int ) ;
 int FUNC_1 (int *,struct proc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct proc* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pgrp*) ;
 int FUNC_4 (struct pgrp*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct pgrp * VAR_5, struct proc * VAR_6, struct proc * VAR_7)
{
 FUNC_5();
 VAR_7->p_pgrp = VAR_5;
 VAR_7->p_pgrpid = VAR_5->pg_id;
 VAR_7->p_listflag |= VAR_3;






 if ((VAR_5->pg_listflags & (VAR_1 | VAR_0)) == VAR_1) {
  VAR_5->pg_listflags &= ~VAR_1;
 }

 if ((VAR_5->pg_listflags & VAR_0) == VAR_0)
  FUNC_2("pgrp_add : pgrp is dead adding process");
 FUNC_6();

 FUNC_3(VAR_5);
 VAR_5->pg_membercnt++;
 if ( VAR_6 != VAR_2) {
  FUNC_0(VAR_6, VAR_7, VAR_4);
  }else {
  FUNC_1(&VAR_5->pg_members, VAR_7, VAR_4);
 }
 FUNC_4(VAR_5);

 FUNC_5();
 if (((VAR_5->pg_listflags & (VAR_1 | VAR_0)) == VAR_1) && (VAR_5->pg_membercnt != 0)) {
  VAR_5->pg_listflags &= ~VAR_1;
 }
 FUNC_6();
}

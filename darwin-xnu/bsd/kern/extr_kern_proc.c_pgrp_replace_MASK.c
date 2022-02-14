
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_listflag; int p_pgrpid; struct pgrp* p_pgrp; } ;
struct TYPE_2__ {scalar_t__ lh_first; } ;
struct pgrp {scalar_t__ pg_membercnt; int pg_listflags; TYPE_1__ pg_members; int pg_id; int pg_refcount; } ;


 int FUNC_0 (TYPE_1__*,struct proc*,int ) ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pgrp* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int ,char*,int ) ;
 int VAR_7 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pgrp*) ;
 int FUNC_5 (struct pgrp*) ;
 int FUNC_6 (struct pgrp*) ;
 int FUNC_7 (struct pgrp*) ;
 int FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct proc * VAR_9, struct pgrp * VAR_10)
{
        struct pgrp * VAR_11;



       FUNC_8();

 while ((VAR_9->p_listflag & VAR_5) == VAR_5) {
  VAR_9->p_listflag |= VAR_6;
  (void)FUNC_2(&VAR_9->p_pgrpid, VAR_8, 0, "proc_pgrp", 0);
 }

 VAR_9->p_listflag |= VAR_5;

 VAR_11 = VAR_9->p_pgrp;
 if (VAR_11 == VAR_3)
  FUNC_3("pgrp_replace: oldpg NULL");
 VAR_11->pg_refcount++;




        VAR_9->p_pgrpid = VAR_0;
        VAR_9->p_listflag &= ~VAR_4;
        VAR_9->p_pgrp = ((void*)0);

       FUNC_9();

       FUNC_6(VAR_11);
       VAR_11->pg_membercnt--;
       if (VAR_11->pg_membercnt < 0)
                FUNC_3("pgprp: -ve membercnt pgprp:%p p:%p\n",VAR_11, VAR_9);
       FUNC_1(VAR_9, VAR_7);
        if (VAR_11->pg_members.lh_first == 0) {
                FUNC_7(VAR_11);
                FUNC_5(VAR_11);
        } else {
                FUNC_7(VAR_11);
                FUNC_4(VAR_11);
        }

        FUNC_8();
        VAR_9->p_pgrp = VAR_10;
        VAR_9->p_pgrpid = VAR_10->pg_id;
        VAR_9->p_listflag |= VAR_4;






        if ((VAR_10->pg_listflags & (VAR_2 | VAR_1)) == VAR_2) {
                VAR_10->pg_listflags &= ~VAR_2;
        }

        if ((VAR_10->pg_listflags & VAR_1) == VAR_1)
                FUNC_3("pgrp_add : pgrp is dead adding process");
        FUNC_9();

        FUNC_6(VAR_10);
        VAR_10->pg_membercnt++;
 FUNC_0(&VAR_10->pg_members, VAR_9, VAR_7);
        FUNC_7(VAR_10);

        FUNC_8();
        if (((VAR_10->pg_listflags & (VAR_2 | VAR_1)) == VAR_2) && (VAR_10->pg_membercnt != 0)) {
                VAR_10->pg_listflags &= ~VAR_2;
        }

 VAR_9->p_listflag &= ~VAR_5;
 if ((VAR_9->p_listflag & VAR_6) == VAR_6) {
  VAR_9->p_listflag &= ~VAR_6;
  FUNC_10(&VAR_9->p_pgrpid);

 }
        FUNC_9();
}

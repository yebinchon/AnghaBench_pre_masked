
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct pgrp {int dummy; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_9__ {int p_listflag; int p_children; int p_childrencnt; scalar_t__ p_xhighbits; int p_uniqueid; int p_puniqueid; int p_pid; int p_ppid; struct TYPE_9__* p_pptr; int p_evlist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct pgrp*) ;
 int FUNC_5 (struct pgrp*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct pgrp* FUNC_8 (TYPE_1__*) ;

void
FUNC_9(proc_t VAR_5, proc_t VAR_6)
{
 struct pgrp * VAR_7;

 FUNC_0(&VAR_6->p_children);
 FUNC_2(&VAR_6->p_evlist);
 VAR_6->p_pptr = VAR_5;
 VAR_6->p_ppid = VAR_5->p_pid;
 VAR_6->p_puniqueid = VAR_5->p_uniqueid;
 VAR_6->p_xhighbits = 0;

 VAR_7 = FUNC_8(VAR_5);
 FUNC_5(VAR_7, VAR_5, VAR_6);
 FUNC_4(VAR_7);

 FUNC_6();





 VAR_5->p_childrencnt++;
 FUNC_1(&VAR_5->p_children, VAR_6, VAR_4);

 FUNC_1(&VAR_2, VAR_6, VAR_3);

 VAR_6->p_listflag &= ~VAR_0;

 FUNC_7();
}

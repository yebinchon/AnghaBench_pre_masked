
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct session {int s_listflags; int s_count; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_6__ {struct session* pg_session; } ;
struct TYPE_5__ {int p_listflag; TYPE_4__* p_pgrp; int p_pgrpid; } ;


 TYPE_4__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct session* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 () ;

struct session *
FUNC_4(proc_t VAR_8)
{
 struct session * VAR_9 = VAR_4;

 if (VAR_8 == VAR_1)
  return(VAR_4);

 FUNC_2();


 while ((VAR_8->p_listflag & VAR_2) == VAR_2) {
  VAR_8->p_listflag |= VAR_3;
  (void)FUNC_0(&VAR_8->p_pgrpid, VAR_7, 0, "proc_pgrp", 0);
 }

 if ((VAR_8->p_pgrp != VAR_0) && ((VAR_9 = VAR_8->p_pgrp->pg_session) != VAR_4)) {
  if ((VAR_9->s_listflags & (VAR_6 | VAR_5)) != 0)
   FUNC_1("proc_session:returning sesssion ref on terminating session");
  VAR_9->s_count++;
 }
 FUNC_3();
 return(VAR_9);
}

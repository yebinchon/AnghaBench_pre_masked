
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgrp {int pg_listflags; int pg_refcount; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct pgrp* VAR_1 ;
 struct pgrp* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct pgrp *
FUNC_3(pid_t VAR_2)
{
 struct pgrp * VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_2);
 if ((VAR_3 == ((void*)0)) || ((VAR_3->pg_listflags & VAR_0) != 0))
  VAR_3 = VAR_1;
 else
  VAR_3->pg_refcount++;
 FUNC_2();
 return(VAR_3);
}

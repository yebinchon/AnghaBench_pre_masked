
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgrp {int pg_refcount; int pg_listflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct pgrp*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3(struct pgrp * VAR_1)
{
 FUNC_1();
 if ((VAR_1->pg_refcount == 1) && ((VAR_1->pg_listflags & VAR_0) == VAR_0)) {
  FUNC_2();
  FUNC_0(VAR_1);
  return;
 }

 VAR_1->pg_refcount--;
 FUNC_2();
}

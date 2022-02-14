
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {struct pgrp* t_pgrp; } ;
struct pgrp {int pg_listflags; int pg_refcount; } ;


 int VAR_0 ;
 struct pgrp* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct pgrp *
FUNC_3(struct tty * VAR_2)
{
 struct pgrp * VAR_3 = VAR_1;

 FUNC_1();
 VAR_3 = VAR_2->t_pgrp;

 if (VAR_3 != VAR_1) {
  if ((VAR_3->pg_listflags & VAR_0) != 0)
   FUNC_0("tty_pgrp: ref being povided for dead pgrp");
  VAR_3->pg_refcount++;
 }
 FUNC_2();

 return(VAR_3);
}

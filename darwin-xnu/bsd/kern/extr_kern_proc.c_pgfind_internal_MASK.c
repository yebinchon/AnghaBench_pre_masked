
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pgrp* le_next; } ;
struct pgrp {scalar_t__ pg_id; TYPE_1__ pg_hash; } ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {struct pgrp* lh_first; } ;


 TYPE_2__* FUNC_0 (scalar_t__) ;

struct pgrp *
FUNC_1(pid_t VAR_0)
{
 struct pgrp *VAR_1;

 for (VAR_1 = FUNC_0(VAR_0)->lh_first; VAR_1 != 0; VAR_1 = VAR_1->pg_hash.le_next)
  if (VAR_1->pg_id == VAR_0)
   return (VAR_1);
 return (((void*)0));
}

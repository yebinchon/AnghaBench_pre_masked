
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* dyn; scalar_t__ dyncnt; } ;
struct pf_addr_wrap {scalar_t__ type; TYPE_1__ p; } ;
struct TYPE_4__ {scalar_t__ pfid_acnt6; scalar_t__ pfid_acnt4; int * pfid_kif; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct pf_addr_wrap *VAR_1)
{
 if (VAR_1->type != VAR_0 || VAR_1->p.dyn == ((void*)0) ||
     VAR_1->p.dyn->pfid_kif == ((void*)0))
  return;
 VAR_1->p.dyncnt = VAR_1->p.dyn->pfid_acnt4 + VAR_1->p.dyn->pfid_acnt6;
}

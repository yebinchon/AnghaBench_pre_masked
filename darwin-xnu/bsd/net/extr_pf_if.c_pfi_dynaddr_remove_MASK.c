
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* dyn; } ;
struct pf_addr_wrap {scalar_t__ type; TYPE_1__ p; } ;
struct TYPE_7__ {int pfik_dynaddrs; } ;
struct TYPE_6__ {int * pfid_kt; TYPE_3__* pfid_kif; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;

void
FUNC_4(struct pf_addr_wrap *VAR_4)
{
 if (VAR_4->type != VAR_1 || VAR_4->p.dyn == ((void*)0) ||
     VAR_4->p.dyn->pfid_kif == ((void*)0) || VAR_4->p.dyn->pfid_kt == ((void*)0))
  return;

 FUNC_0(&VAR_4->p.dyn->pfid_kif->pfik_dynaddrs, VAR_4->p.dyn, VAR_2);
 FUNC_1(VAR_4->p.dyn->pfid_kif, VAR_0);
 VAR_4->p.dyn->pfid_kif = ((void*)0);
 FUNC_2(VAR_4->p.dyn->pfid_kt);
 VAR_4->p.dyn->pfid_kt = ((void*)0);
 FUNC_3(&VAR_3, VAR_4->p.dyn);
 VAR_4->p.dyn = ((void*)0);
}

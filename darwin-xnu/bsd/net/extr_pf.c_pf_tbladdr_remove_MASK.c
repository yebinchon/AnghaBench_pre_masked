
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tbl; } ;
struct pf_addr_wrap {scalar_t__ type; TYPE_1__ p; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct pf_addr_wrap *VAR_3)
{
 FUNC_0(VAR_2, VAR_0);

 if (VAR_3->type != VAR_1 || VAR_3->p.tbl == ((void*)0))
  return;
 FUNC_1(VAR_3->p.tbl);
 VAR_3->p.tbl = ((void*)0);
}

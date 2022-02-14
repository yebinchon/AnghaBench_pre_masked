
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pf_ruleset {int dummy; } ;
struct TYPE_4__ {int tblname; } ;
struct TYPE_3__ {int * tbl; } ;
struct pf_addr_wrap {scalar_t__ type; TYPE_2__ v; TYPE_1__ p; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct pf_ruleset*,int ) ;

int
FUNC_2(struct pf_ruleset *VAR_3, struct pf_addr_wrap *VAR_4)
{
 FUNC_0(VAR_2, VAR_0);

 if (VAR_4->type != VAR_1)
  return (0);
 if ((VAR_4->p.tbl = FUNC_1(VAR_3, VAR_4->v.tblname)) == ((void*)0))
  return (1);
 return (0);
}

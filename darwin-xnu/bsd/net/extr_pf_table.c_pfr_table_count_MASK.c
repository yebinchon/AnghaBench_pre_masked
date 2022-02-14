
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_table {scalar_t__* pfrt_anchor; } ;
struct pf_ruleset {int tables; } ;
struct TYPE_2__ {int tables; } ;


 int VAR_0 ;
 struct pf_ruleset* FUNC_0 (scalar_t__*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct pfr_table *VAR_3, int VAR_4)
{
 struct pf_ruleset *VAR_5;

 if (VAR_4 & VAR_0)
  return (VAR_2);
 if (VAR_3->pfrt_anchor[0]) {
  VAR_5 = FUNC_0(VAR_3->pfrt_anchor);
  return ((VAR_5 != ((void*)0)) ? VAR_5->tables : -1);
 }
 return (VAR_1.tables);
}

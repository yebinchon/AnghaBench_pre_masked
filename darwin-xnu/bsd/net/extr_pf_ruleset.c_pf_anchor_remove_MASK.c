
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_rule {TYPE_1__* anchor; } ;
struct TYPE_2__ {scalar_t__ refcnt; int ruleset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

void
FUNC_2(struct pf_rule *VAR_0)
{
 if (VAR_0->anchor == ((void*)0))
  return;
 if (VAR_0->anchor->refcnt <= 0) {
  FUNC_1("pf_anchor_remove: broken refcount\n");
  VAR_0->anchor = ((void*)0);
  return;
 }
 if (!--VAR_0->anchor->refcnt)
  FUNC_0(&VAR_0->anchor->ruleset);
 VAR_0->anchor = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pf_ruleset {scalar_t__ tables; TYPE_4__* anchor; TYPE_3__* rules; scalar_t__ topen; } ;
struct pf_anchor {struct pf_ruleset ruleset; int children; } ;
struct dummynet_event {int dn_event_code; } ;
typedef int dn_event ;
struct TYPE_9__ {scalar_t__ refcnt; struct pf_anchor* parent; int name; int children; } ;
struct TYPE_7__ {scalar_t__ open; int ptr; } ;
struct TYPE_6__ {int ptr; } ;
struct TYPE_8__ {TYPE_2__ inactive; TYPE_1__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dummynet_event*,int) ;
 int FUNC_4 (struct dummynet_event*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pf_ruleset VAR_7 ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (char*,int ,int) ;

void
FUNC_7(struct pf_ruleset *VAR_8)
{
 struct pf_anchor *VAR_9;
 int VAR_10;

 while (VAR_8 != ((void*)0)) {
  if (VAR_8 == &VAR_7 || VAR_8->anchor == ((void*)0) ||
      !FUNC_0(&VAR_8->anchor->children) ||
      VAR_8->anchor->refcnt > 0 || VAR_8->tables > 0 ||
      VAR_8->topen)
   return;
  for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10)
   if (!FUNC_2(VAR_8->rules[VAR_10].active.ptr) ||
       !FUNC_2(VAR_8->rules[VAR_10].inactive.ptr) ||
       VAR_8->rules[VAR_10].inactive.open)
    return;
  FUNC_1(VAR_4, &VAR_6, VAR_8->anchor);
  if ((VAR_9 = VAR_8->anchor->parent) != ((void*)0))
   FUNC_1(VAR_5, &VAR_9->children,
       VAR_8->anchor);
  FUNC_5(VAR_8->anchor);
  if (VAR_9 == ((void*)0))
   return;
  VAR_8 = &VAR_9->ruleset;
 }
}

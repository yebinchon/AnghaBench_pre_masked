
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pf_ruleset {TYPE_2__* rules; } ;
struct pf_rule {int dummy; } ;
struct pf_anchor_stackframe {TYPE_4__* r; struct pf_ruleset* rs; TYPE_5__* child; int * parent; } ;
struct TYPE_11__ {struct pf_ruleset ruleset; scalar_t__ match; } ;
struct TYPE_10__ {int quick; TYPE_3__* anchor; } ;
struct TYPE_9__ {int match; } ;
struct TYPE_7__ {int ptr; } ;
struct TYPE_8__ {TYPE_1__ active; } ;


 TYPE_5__* FUNC_0 (int ,int *,TYPE_5__*) ;
 struct pf_rule* FUNC_1 (int ) ;
 struct pf_rule* FUNC_2 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pf_anchor_stackframe* VAR_2 ;

int
FUNC_3(int *VAR_3, struct pf_ruleset **VAR_4, int VAR_5,
    struct pf_rule **VAR_6, struct pf_rule **VAR_7, int *VAR_8)
{
 struct pf_anchor_stackframe *VAR_9;
 int VAR_10 = 0;

 do {
  if (*VAR_3 <= 0)
   break;
  VAR_9 = VAR_2 + *VAR_3 - 1;
  if (VAR_9->parent != ((void*)0) && VAR_9->child != ((void*)0)) {
   if (VAR_9->child->match ||
       (VAR_8 != ((void*)0) && *VAR_8)) {
    VAR_9->r->anchor->match = 1;
    if (VAR_8)
     *VAR_8 = 0;
   }
   VAR_9->child = FUNC_0(VAR_1, VAR_9->parent, VAR_9->child);
   if (VAR_9->child != ((void*)0)) {
    *VAR_4 = &VAR_9->child->ruleset;
    *VAR_6 = FUNC_1((*VAR_4)->rules[VAR_5].active.ptr);
    if (*VAR_6 == ((void*)0))
     continue;
    else
     break;
   }
  }
  (*VAR_3)--;
  if (*VAR_3 == 0 && VAR_7 != ((void*)0))
   *VAR_7 = ((void*)0);
  *VAR_4 = VAR_9->rs;
  if (VAR_9->r->anchor->match || (VAR_8 != ((void*)0) && *VAR_8))
   VAR_10 = VAR_9->r->quick;
  *VAR_6 = FUNC_2(VAR_9->r, VAR_0);
 } while (*VAR_6 == ((void*)0));

 return (VAR_10);
}

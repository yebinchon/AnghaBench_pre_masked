
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pf_ruleset {TYPE_3__* rules; } ;
struct TYPE_5__ {scalar_t__ ticket; } ;
struct TYPE_4__ {scalar_t__ ticket; int ptr; } ;
struct TYPE_6__ {TYPE_2__ inactive; TYPE_1__ active; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct pf_ruleset *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->rules[VAR_1].active.ptr);
 VAR_0->rules[VAR_1].active.ticket =
     ++VAR_0->rules[VAR_1].inactive.ticket;
}

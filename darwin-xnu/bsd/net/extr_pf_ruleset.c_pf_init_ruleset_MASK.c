
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pf_ruleset {TYPE_3__* rules; } ;
struct TYPE_5__ {int * ptr; } ;
struct TYPE_4__ {int * ptr; } ;
struct TYPE_6__ {int * queues; TYPE_2__ inactive; TYPE_1__ active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pf_ruleset*,int ,int) ;

void
FUNC_2(struct pf_ruleset *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1, 0, sizeof (struct pf_ruleset));
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->rules[VAR_2].queues[0]);
  FUNC_0(&VAR_1->rules[VAR_2].queues[1]);
  VAR_1->rules[VAR_2].active.ptr = &VAR_1->rules[VAR_2].queues[0];
  VAR_1->rules[VAR_2].inactive.ptr = &VAR_1->rules[VAR_2].queues[1];
 }
}

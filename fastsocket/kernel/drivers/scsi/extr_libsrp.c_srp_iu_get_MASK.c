
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct srp_target {TYPE_1__ iu_queue; } ;
struct iu_entry {scalar_t__ flags; int ilist; struct srp_target* target; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,void*,int) ;

struct iu_entry *FUNC_2(struct srp_target *VAR_0)
{
 struct iu_entry *VAR_1 = ((void*)0);

 FUNC_1(VAR_0->iu_queue.queue, (void *) &VAR_1, sizeof(void *));
 if (!VAR_1)
  return VAR_1;
 VAR_1->target = VAR_0;
 FUNC_0(&VAR_1->ilist);
 VAR_1->flags = 0;
 return VAR_1;
}

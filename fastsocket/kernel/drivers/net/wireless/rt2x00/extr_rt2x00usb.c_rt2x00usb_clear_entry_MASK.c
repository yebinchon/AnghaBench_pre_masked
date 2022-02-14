
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_entry {TYPE_1__* queue; scalar_t__ flags; } ;
struct TYPE_2__ {scalar_t__ qid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct queue_entry*,int *) ;

void FUNC_1(struct queue_entry *VAR_1)
{
 VAR_1->flags = 0;

 if (VAR_1->queue->qid == VAR_0)
  FUNC_0(VAR_1, ((void*)0));
}

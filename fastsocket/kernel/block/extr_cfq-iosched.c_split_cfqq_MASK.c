
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {int pid; } ;
struct cfq_io_context {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (struct cfq_queue*) ;
 int FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_io_context*,int *,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct cfq_queue *
FUNC_5(struct cfq_io_context *VAR_1, struct cfq_queue *VAR_2)
{
 if (FUNC_3(VAR_2) == 1) {
  VAR_2->pid = VAR_0->pid;
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
  return VAR_2;
 }

 FUNC_4(VAR_1, ((void*)0), 1);
 FUNC_2(VAR_2);
 return ((void*)0);
}

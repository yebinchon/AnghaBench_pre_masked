
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct switch_log_entry {int spu_id; void* val; void* type; int timebase; int tstamp; } ;
struct spu_context {TYPE_1__* switch_log; } ;
struct spu {int number; } ;
struct TYPE_2__ {int head; int wait; struct switch_log_entry* log; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct spu *VAR_1, struct spu_context *VAR_2,
  u32 VAR_3, u32 VAR_4)
{
 if (!VAR_2->switch_log)
  return;

 if (FUNC_2(VAR_2) > 1) {
  struct switch_log_entry *VAR_5;

  VAR_5 = VAR_2->switch_log->log + VAR_2->switch_log->head;
  FUNC_1(&VAR_5->tstamp);
  VAR_5->timebase = FUNC_0();
  VAR_5->spu_id = VAR_1 ? VAR_1->number : -1;
  VAR_5->type = VAR_3;
  VAR_5->val = VAR_4;

  VAR_2->switch_log->head =
   (VAR_2->switch_log->head + 1) % VAR_0;
 }

 FUNC_3(&VAR_2->switch_log->wait);
}

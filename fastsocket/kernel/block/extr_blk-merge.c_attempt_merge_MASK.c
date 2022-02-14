
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int cmd_flags; scalar_t__ rq_disk; int * bio; int cpu; int ioprio; int __data_len; TYPE_1__* biotail; int start_time; scalar_t__ special; } ;
struct TYPE_2__ {int * bi_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request*) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct request_queue*,struct request*,struct request*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct request_queue*,struct request*,struct request*) ;
 scalar_t__ FUNC_11 (struct request*) ;
 int FUNC_12 (struct request*) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct request_queue *VAR_3, struct request *VAR_4,
     struct request *VAR_5)
{
 if (!FUNC_12(VAR_4) || !FUNC_12(VAR_5))
  return 0;




 if ((VAR_4->cmd_flags & VAR_0) != (VAR_5->cmd_flags & VAR_0))
  return 0;




 if (FUNC_5(VAR_4) + FUNC_6(VAR_4) != FUNC_5(VAR_5))
  return 0;

 if (FUNC_11(VAR_4) != FUNC_11(VAR_5)
     || VAR_4->rq_disk != VAR_5->rq_disk
     || VAR_5->special)
  return 0;

 if (FUNC_2(VAR_4) != FUNC_2(VAR_5))
  return 0;







 if (!FUNC_10(VAR_3, VAR_4, VAR_5))
  return 0;







 if ((VAR_4->cmd_flags | VAR_5->cmd_flags) & VAR_2 ||
     (VAR_4->cmd_flags & VAR_1) !=
     (VAR_5->cmd_flags & VAR_1)) {
  FUNC_7(VAR_4);
  FUNC_7(VAR_5);
 }







 if (FUNC_13(VAR_4->start_time, VAR_5->start_time))
  VAR_4->start_time = VAR_5->start_time;

 VAR_4->biotail->bi_next = VAR_5->bio;
 VAR_4->biotail = VAR_5->biotail;

 VAR_4->__data_len += FUNC_3(VAR_5);

 FUNC_8(VAR_3, VAR_4, VAR_5);




 FUNC_1(VAR_5);

 VAR_4->ioprio = FUNC_9(VAR_4->ioprio, VAR_5->ioprio);
 if (FUNC_4(VAR_5))
  VAR_4->cpu = VAR_5->cpu;


 VAR_5->bio = ((void*)0);
 FUNC_0(VAR_3, VAR_5);
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; int (* request_fn ) (struct request_queue*) ;} ;
struct request {scalar_t__ cmd_type; int errors; int cmd_flags; int * end_io; struct gendisk* rq_disk; } ;
struct gendisk {int dummy; } ;
typedef int rq_end_io_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct request_queue*,struct request*,int,int) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct request_queue*) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(struct request_queue *VAR_5, struct gendisk *VAR_6,
      struct request *VAR_7, int VAR_8,
      rq_end_io_fn *VAR_9)
{
 int VAR_10 = VAR_8 ? VAR_1 : VAR_0;

 FUNC_0(FUNC_5());

 VAR_7->rq_disk = VAR_6;
 VAR_7->end_io = VAR_9;

 FUNC_6(VAR_5->queue_lock);

 if (FUNC_9(FUNC_4(VAR_5))) {
  VAR_7->cmd_flags |= VAR_3;
  VAR_7->errors = -VAR_2;
  FUNC_1(VAR_7, VAR_7->errors);
  FUNC_7(VAR_5->queue_lock);
  return;
 }

 FUNC_2(VAR_5, VAR_7, VAR_10, 1);
 FUNC_3(VAR_5);

 if (VAR_7->cmd_type == VAR_4)
  VAR_5->request_fn(VAR_5);
 FUNC_7(VAR_5->queue_lock);
}

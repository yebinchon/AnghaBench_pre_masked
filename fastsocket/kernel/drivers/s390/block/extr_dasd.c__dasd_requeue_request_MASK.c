
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct dasd_ccw_req {scalar_t__ callback_data; struct dasd_block* block; } ;
struct dasd_block {int queue_lock; int request_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct dasd_ccw_req *VAR_1)
{
 struct dasd_block *VAR_2 = VAR_1->block;
 struct request *VAR_3;
 unsigned long VAR_4;

 if (!VAR_2)
  return -VAR_0;
 FUNC_1(&VAR_2->queue_lock, VAR_4);
 VAR_3 = (struct request *) VAR_1->callback_data;
 FUNC_0(VAR_2->request_queue, VAR_3);
 FUNC_2(&VAR_2->queue_lock, VAR_4);

 return 0;
}

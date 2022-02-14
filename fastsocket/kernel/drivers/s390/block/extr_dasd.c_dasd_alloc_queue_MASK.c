
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dasd_block {TYPE_1__* request_queue; int request_queue_lock; } ;
struct TYPE_4__ {int * elevator; struct dasd_block* queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_4(struct dasd_block *VAR_2)
{
 int VAR_3;

 VAR_2->request_queue = FUNC_1(VAR_1,
            &VAR_2->request_queue_lock);
 if (VAR_2->request_queue == ((void*)0))
  return -VAR_0;

 VAR_2->request_queue->queuedata = VAR_2;

 FUNC_2(VAR_2->request_queue->elevator);
 VAR_2->request_queue->elevator = ((void*)0);
 VAR_3 = FUNC_3(VAR_2->request_queue, "deadline");
 if (VAR_3) {
  FUNC_0(VAR_2->request_queue);
  return VAR_3;
 }
 return 0;
}

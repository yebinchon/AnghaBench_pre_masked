
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request {TYPE_1__* rq_disk; struct request_queue* q; scalar_t__ errors; } ;
struct TYPE_2__ {int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*,int) ;
 int FUNC_1 (int ,char*,int ,struct request*,char*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_2)
{
 int VAR_3 = VAR_2->errors ? -VAR_1 : 0;
 struct request_queue *VAR_4 = VAR_2->q;
 unsigned long VAR_5;

 FUNC_1(VAR_0, "%s: request %p: %s\n", VAR_2->rq_disk->disk_name,
   VAR_2, VAR_3 ? "failed" : "done");

 FUNC_2(VAR_4->queue_lock, VAR_5);
 FUNC_0(VAR_2, VAR_3);
 FUNC_3(VAR_4->queue_lock, VAR_5);
}

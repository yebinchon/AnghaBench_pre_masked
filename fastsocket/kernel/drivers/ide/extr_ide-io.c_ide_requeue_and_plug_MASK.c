
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request {int dummy; } ;
struct TYPE_3__ {struct request_queue* queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*,struct request*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_0, struct request *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0->queue;
 unsigned long VAR_3;

 FUNC_3(VAR_2->queue_lock, VAR_3);

 if (VAR_1)
  FUNC_1(VAR_2, VAR_1);
 if (!FUNC_2(VAR_2))
  FUNC_0(VAR_2);

 FUNC_4(VAR_2->queue_lock, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int kobj; scalar_t__ request_fn; } ;
struct gendisk {struct request_queue* queue; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct gendisk *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->queue;

 if (FUNC_0(!VAR_2))
  return;

 if (VAR_2->request_fn)
  FUNC_3(VAR_2);

 FUNC_6(&VAR_2->kobj, VAR_0);
 FUNC_4(&VAR_2->kobj);
 FUNC_1(FUNC_2(VAR_1));
 FUNC_5(&FUNC_2(VAR_1)->kobj);
}

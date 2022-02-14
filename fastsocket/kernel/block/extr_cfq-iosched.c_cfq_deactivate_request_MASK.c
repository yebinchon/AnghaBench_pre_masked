
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct cfq_data {int rq_in_driver; } ;
struct TYPE_2__ {struct cfq_data* elevator_data; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfq_data*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct cfq_data *VAR_2 = VAR_0->elevator->elevator_data;

 FUNC_1(!VAR_2->rq_in_driver);
 VAR_2->rq_in_driver--;
 FUNC_2(VAR_2, FUNC_0(VAR_1), "deactivate rq, drv=%d",
      VAR_2->rq_in_driver);
}

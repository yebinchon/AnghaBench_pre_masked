
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {TYPE_1__* rq_disk; } ;
struct ace_device {int fsm_tasklet; } ;
struct TYPE_2__ {struct ace_device* private_data; } ;


 struct request* FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct request_queue * VAR_0)
{
 struct request *VAR_1;
 struct ace_device *VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1) {
  VAR_2 = VAR_1->rq_disk->private_data;
  FUNC_1(&VAR_2->fsm_tasklet);
 }
}

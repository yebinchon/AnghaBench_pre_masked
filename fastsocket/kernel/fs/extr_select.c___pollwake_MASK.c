
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct poll_wqueues* private; } ;
typedef TYPE_1__ wait_queue_t ;
struct poll_wqueues {int triggered; int polling_task; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned int,int,void*) ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(wait_queue_t *VAR_1, unsigned VAR_2, int VAR_3, void *VAR_4)
{
 struct poll_wqueues *VAR_5 = VAR_1->private;
 FUNC_0(VAR_0, VAR_5->polling_task);
 FUNC_2();
 VAR_5->triggered = 1;
 return FUNC_1(&VAR_0, VAR_2, VAR_3, VAR_4);
}

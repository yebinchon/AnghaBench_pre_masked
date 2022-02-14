
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int* event_pipe; int tx_queue_lock; int tx_queue; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct carlu *VAR_0)
{
 FUNC_1(&VAR_0->tx_queue);
 VAR_0->tx_queue_lock = FUNC_0();
 VAR_0->event_pipe[0] = VAR_0->event_pipe[1] = -1;

 return 0;
}

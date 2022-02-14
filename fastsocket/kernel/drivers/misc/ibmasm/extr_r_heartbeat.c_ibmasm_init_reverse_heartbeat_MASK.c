
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int dummy; } ;
struct reverse_heartbeat {scalar_t__ stopped; int wait; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct service_processor *VAR_0, struct reverse_heartbeat *VAR_1)
{
 FUNC_0(&VAR_1->wait);
 VAR_1->stopped = 0;
}

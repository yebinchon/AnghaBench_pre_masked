
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int (* close ) (struct gameport*) ;scalar_t__ poll_interval; int * poll_handler; int poll_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gameport*,int *) ;
 int FUNC_2 (struct gameport*) ;

void FUNC_3(struct gameport *VAR_0)
{
 FUNC_0(&VAR_0->poll_timer);
 VAR_0->poll_handler = ((void*)0);
 VAR_0->poll_interval = 0;
 FUNC_1(VAR_0, ((void*)0));
 if (VAR_0->close)
  VAR_0->close(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd_usb {int in_async; int * urb_async_waiting; scalar_t__ cmd_error; int submitted_cmds; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct zd_usb*) ;

void FUNC_4(struct zd_usb *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->submitted_cmds));
 FUNC_0(VAR_0->urb_async_waiting == ((void*)0));
 FUNC_0(!VAR_0->in_async);

 FUNC_0(FUNC_1(&FUNC_3(VAR_0)->mutex));

 VAR_0->in_async = 1;
 VAR_0->cmd_error = 0;
 VAR_0->urb_async_waiting = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int newev; int event; } ;
struct vt_event_wait {scalar_t__ done; TYPE_1__ event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vt_event_wait*) ;

int FUNC_1(int VAR_3)
{
 struct vt_event_wait VAR_4;
 do {
  if (VAR_3 == VAR_2 + 1)
   break;
  VAR_4.event.event = VAR_1;
  FUNC_0(&VAR_4);
  if (VAR_4.done == 0)
   return -VAR_0;
 } while (VAR_4.event.newev != VAR_3);
 return 0;
}

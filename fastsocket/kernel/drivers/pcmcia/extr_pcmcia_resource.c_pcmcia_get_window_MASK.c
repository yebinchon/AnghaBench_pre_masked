
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int speed; TYPE_1__* res; } ;
struct TYPE_10__ {TYPE_2__ ctl; } ;
typedef TYPE_3__ window_t ;
typedef TYPE_3__* window_handle_t ;
struct TYPE_11__ {int Attributes; int AccessSpeed; scalar_t__ Size; scalar_t__ Base; } ;
typedef TYPE_5__ win_req_t ;
struct pcmcia_socket {int state; TYPE_3__* win; } ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_1(struct pcmcia_socket *VAR_12, window_handle_t *VAR_13,
        int VAR_14, win_req_t *VAR_15)
{
 window_t *VAR_16;
 int VAR_17;

 if (!VAR_12 || !(VAR_12->state & VAR_7))
  return -VAR_1;
 for (VAR_17 = VAR_14; VAR_17 < VAR_6; VAR_17++)
  if (VAR_12->state & FUNC_0(VAR_17))
   break;
 if (VAR_17 == VAR_6)
  return -VAR_0;
 VAR_16 = &VAR_12->win[VAR_17];
 VAR_15->Base = VAR_16->ctl.res->start;
 VAR_15->Size = VAR_16->ctl.res->end - VAR_16->ctl.res->start + 1;
 VAR_15->AccessSpeed = VAR_16->ctl.speed;
 VAR_15->Attributes = 0;
 if (VAR_16->ctl.flags & VAR_4)
  VAR_15->Attributes |= VAR_10;
 if (VAR_16->ctl.flags & VAR_3)
  VAR_15->Attributes |= VAR_9;
 if (VAR_16->ctl.flags & VAR_2)
  VAR_15->Attributes |= VAR_8;
 if (VAR_16->ctl.flags & VAR_5)
  VAR_15->Attributes |= VAR_11;
 *VAR_13 = VAR_16;
 return 0;
}

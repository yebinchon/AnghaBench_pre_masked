
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* uwbd_evt_handler_f ) (struct uwb_event*) ;
typedef size_t u8 ;
typedef size_t u16 ;
struct uwbd_evt_type_handler {size_t size; TYPE_3__* uwbd_events; } ;
struct TYPE_7__ {TYPE_1__* rceb; } ;
struct uwb_event {TYPE_5__* rc; TYPE_2__ notif; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_10__ {TYPE_4__ uwb_dev; } ;
struct TYPE_8__ {int (* handler ) (struct uwb_event*) ;} ;
struct TYPE_6__ {size_t bEventType; size_t bEventContext; int wEvent; } ;


 size_t FUNC_0 (struct uwbd_evt_type_handler*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,size_t,size_t,size_t,int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct uwb_event*) ;
 struct uwbd_evt_type_handler* VAR_1 ;

__attribute__((used)) static
int FUNC_4(struct uwb_event *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct uwbd_evt_type_handler *VAR_4;
 uwbd_evt_handler_f VAR_5;
 u8 VAR_6, VAR_7;
 u16 VAR_8;

 VAR_6 = VAR_2->notif.rceb->bEventType;
 VAR_8 = FUNC_2(VAR_2->notif.rceb->wEvent);
 VAR_7 = VAR_2->notif.rceb->bEventContext;

 if (VAR_6 >= FUNC_0(VAR_1))
  goto out;
 VAR_4 = &VAR_1[VAR_6];
 if (VAR_4->uwbd_events == ((void*)0))
  goto out;
 if (VAR_8 >= VAR_4->size)
  goto out;
 VAR_5 = VAR_4->uwbd_events[VAR_8].handler;
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_3 = (*VAR_5)(VAR_2);
out:
 if (VAR_3 < 0)
  FUNC_1(&VAR_2->rc->uwb_dev.dev,
   "UWBD: event 0x%02x/%04x/%02x, handling failed: %d\n",
   VAR_6, VAR_8, VAR_7, VAR_3);
 return VAR_3;
}

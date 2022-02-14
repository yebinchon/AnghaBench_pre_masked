
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcf50633_mbc {int usb_online; int usb_active; int adapter_online; int adapter_active; TYPE_2__* pcf; int adapter; int usb; int charging_restart_work; } ;
struct TYPE_5__ {TYPE_1__* pdata; } ;
struct TYPE_4__ {int charging_restart_interval; int (* mbc_event_callback ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_7, void *VAR_8)
{
 struct pcf50633_mbc *VAR_9 = VAR_8;
 int VAR_10 =
   VAR_9->pcf->pdata->charging_restart_interval;


 if (VAR_7 == VAR_3) {
  VAR_9->usb_online = 1;
 } else if (VAR_7 == VAR_6) {
  VAR_9->usb_online = 0;
  VAR_9->usb_active = 0;
  FUNC_1(VAR_9->pcf, 0);
  FUNC_0(&VAR_9->charging_restart_work);
 }


 if (VAR_7 == VAR_0) {
  VAR_9->adapter_online = 1;
  VAR_9->adapter_active = 1;
 } else if (VAR_7 == VAR_1) {
  VAR_9->adapter_online = 0;
  VAR_9->adapter_active = 0;
 }

 if (VAR_7 == VAR_2) {
  VAR_9->usb_active = 0;
  VAR_9->adapter_active = 0;

  if (VAR_10 > 0)
   FUNC_3(&VAR_9->charging_restart_work,
       VAR_10);
 } else if (VAR_7 == VAR_5)
  VAR_9->usb_active = 0;
 else if (VAR_7 == VAR_4)
  VAR_9->usb_active = 1;

 FUNC_2(&VAR_9->usb);
 FUNC_2(&VAR_9->adapter);

 if (VAR_9->pcf->pdata->mbc_event_callback)
  VAR_9->pcf->pdata->mbc_event_callback(VAR_9->pcf, VAR_7);
}

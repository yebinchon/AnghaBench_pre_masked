
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbatm_data {int thread_exited; int serialize; int * thread; int usb_intf; TYPE_1__* driver; int thread_started; } ;
struct TYPE_2__ {int (* heavy_init ) (struct usbatm_data*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usbatm_data*,int ) ;
 int FUNC_6 (struct usbatm_data*) ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 struct usbatm_data *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_0(VAR_0);
 FUNC_1(&VAR_2->thread_started);

 VAR_3 = VAR_2->driver->heavy_init(VAR_2, VAR_2->usb_intf);

 if (!VAR_3)
  VAR_3 = FUNC_6(VAR_2);

 FUNC_3(&VAR_2->serialize);
 VAR_2->thread = ((void*)0);
 FUNC_4(&VAR_2->serialize);

 FUNC_2(&VAR_2->thread_exited, VAR_3);
}

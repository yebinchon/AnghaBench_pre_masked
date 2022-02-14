
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

int FUNC_2(const struct usb_device_id *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4->driver_info);

 if (VAR_5 <= 0 || VAR_5 >= 3)
  return -VAR_0;


 if (VAR_6 == VAR_5)
  return 0;

 if (VAR_6 == VAR_2 && VAR_5 == FUNC_1(&VAR_3))
  return 0;
 return -VAR_1;
}

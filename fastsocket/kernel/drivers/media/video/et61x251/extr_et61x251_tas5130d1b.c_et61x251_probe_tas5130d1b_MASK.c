
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int member_0; } ;
struct et61x251_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct et61x251_device*,int *) ;
 int FUNC_2 (struct et61x251_device*,struct usb_device_id const*) ;
 int VAR_1 ;

int FUNC_3(struct et61x251_device* VAR_2)
{
 const struct usb_device_id VAR_3[] = {
  { FUNC_0(0x102c, 0x6251), },
  { }
 };


 if (!FUNC_2(VAR_2, VAR_3))
  return -VAR_0;

 FUNC_1(VAR_2, &VAR_1);

 return 0;
}

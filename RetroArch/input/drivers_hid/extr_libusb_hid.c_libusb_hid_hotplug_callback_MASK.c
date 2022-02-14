
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_device {int dummy; } ;
struct libusb_context {int dummy; } ;
typedef int libusb_hotplug_event ;
typedef int libusb_hid_t ;




 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,struct libusb_device*) ;
 int FUNC_2 (int *,struct libusb_device*) ;

__attribute__((used)) static int FUNC_3(struct libusb_context *VAR_0,
      struct libusb_device *VAR_1, libusb_hotplug_event VAR_2, void *VAR_3)
{
   libusb_hid_t *VAR_4 = (libusb_hid_t*)VAR_3;

   switch (VAR_2)
   {
      case 129:
         FUNC_1(VAR_4, VAR_1);
         break;
      case 128:
         FUNC_2(VAR_4, VAR_1);
         break;
      default:
         FUNC_0("Unhandled event: %d\n", VAR_2);
         break;
   }

   return 0;
}

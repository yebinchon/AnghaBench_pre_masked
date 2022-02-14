
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface_cache {int num_altsetting; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int bNumInterfaces; } ;
struct usb_host_config {struct usb_interface** interface; struct usb_interface_cache** intf_cache; TYPE_1__ desc; int ** intf_assoc; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*,TYPE_1__*,int) ;
 char* FUNC_2 (char*,char*,int *) ;
 char* FUNC_3 (int,char*,char*,struct usb_interface_cache*,struct usb_interface*,int) ;

__attribute__((used)) static char *FUNC_4(int VAR_1, char *VAR_2, char *VAR_3,
        const struct usb_host_config *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 struct usb_interface_cache *VAR_8;
 struct usb_interface *VAR_9;

 if (VAR_2 > VAR_3)
  return VAR_2;
 if (!VAR_4)

  return VAR_2 + FUNC_0(VAR_2, "(null Cfg. desc.)\n");
 VAR_2 = FUNC_1(VAR_2, VAR_3, &VAR_4->desc, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4->intf_assoc[VAR_6] == ((void*)0))
   break;
  VAR_2 = FUNC_2(VAR_2, VAR_3,
     VAR_4->intf_assoc[VAR_6]);
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->desc.bNumInterfaces; VAR_6++) {
  VAR_8 = VAR_4->intf_cache[VAR_6];
  VAR_9 = VAR_4->interface[VAR_6];
  for (VAR_7 = 0; VAR_7 < VAR_8->num_altsetting; VAR_7++) {
   if (VAR_2 > VAR_3)
    return VAR_2;
   VAR_2 = FUNC_3(VAR_1,
    VAR_2, VAR_3, VAR_8, VAR_9, VAR_7);
  }
 }
 return VAR_2;
}

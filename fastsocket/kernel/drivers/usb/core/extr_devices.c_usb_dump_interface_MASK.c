
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface_cache {struct usb_host_interface* altsetting; } ;
struct usb_interface {int dummy; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int desc; } ;


 char* FUNC_0 (int,char*,char*,int *) ;
 char* FUNC_1 (char*,char*,struct usb_interface_cache const*,struct usb_interface const*,int) ;

__attribute__((used)) static char *FUNC_2(int VAR_0, char *VAR_1, char *VAR_2,
    const struct usb_interface_cache *VAR_3,
    const struct usb_interface *VAR_4, int VAR_5)
{
 const struct usb_host_interface *VAR_6 = &VAR_3->altsetting[VAR_5];
 int VAR_7;

 VAR_1 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_6->desc.bNumEndpoints; VAR_7++) {
  if (VAR_1 > VAR_2)
   return VAR_1;
  VAR_1 = FUNC_0(VAR_0,
    VAR_1, VAR_2, &VAR_6->endpoint[VAR_7].desc);
 }
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_cache {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {struct usb_interface_cache* string; struct usb_interface_cache* endpoint; } ;
struct kref {int dummy; } ;


 int FUNC_0 (struct usb_interface_cache*) ;
 struct usb_interface_cache* FUNC_1 (struct kref*) ;

void FUNC_2(struct kref *VAR_0)
{
 struct usb_interface_cache *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_altsetting; VAR_2++) {
  struct usb_host_interface *VAR_3 = &VAR_1->altsetting[VAR_2];

  FUNC_0(VAR_3->endpoint);
  FUNC_0(VAR_3->string);
 }
 FUNC_0(VAR_1);
}

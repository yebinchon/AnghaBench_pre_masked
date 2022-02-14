
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {int extralen; unsigned char* extra; TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int extralen; unsigned char* extra; } ;



__attribute__((used)) static int FUNC_0(struct usb_interface *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;
 struct usb_host_interface *VAR_3 = VAR_0->cur_altsetting;

 if (VAR_3->extralen == 3) {
  *VAR_1 = VAR_3->extra[2];
  return 0;
 }

 for (VAR_2 = 0; VAR_2 < VAR_3->desc.bNumEndpoints; VAR_2++) {
  if (VAR_3->endpoint[VAR_2].extralen == 3) {
   *VAR_1 = VAR_3->endpoint[VAR_2].extra[2];
   return 0;
  }
 }

 return -1;
}

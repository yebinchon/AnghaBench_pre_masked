
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_serial {TYPE_5__* interface; } ;
struct TYPE_10__ {TYPE_3__* cur_altsetting; TYPE_2__* altsetting; } ;
struct TYPE_9__ {int bNumEndpoints; } ;
struct TYPE_8__ {TYPE_4__ desc; } ;
struct TYPE_6__ {scalar_t__ bNumEndpoints; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_0)
{
 int VAR_1;

 FUNC_0("numberofendpoints: %d \n",
     (int)VAR_0->interface->cur_altsetting->desc.bNumEndpoints);
 FUNC_0("numberofendpoints: %d \n",
     (int)VAR_0->interface->altsetting->desc.bNumEndpoints);

 VAR_1 =
     (VAR_0->interface->cur_altsetting->desc.bNumEndpoints - 1) / 2;

 return VAR_1;
}

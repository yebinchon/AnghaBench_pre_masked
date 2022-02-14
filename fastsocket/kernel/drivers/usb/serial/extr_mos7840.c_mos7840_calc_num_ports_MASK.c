
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_serial {int num_ports; int num_bulk_in; int num_bulk_out; TYPE_5__* interface; } ;
struct TYPE_10__ {TYPE_4__* cur_altsetting; TYPE_2__* altsetting; } ;
struct TYPE_8__ {int bNumEndpoints; } ;
struct TYPE_9__ {TYPE_3__ desc; } ;
struct TYPE_6__ {scalar_t__ bNumEndpoints; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0("numberofendpoints: cur %d, alt %d",
     (int)VAR_0->interface->cur_altsetting->desc.bNumEndpoints,
     (int)VAR_0->interface->altsetting->desc.bNumEndpoints);
 if (VAR_0->interface->cur_altsetting->desc.bNumEndpoints == 5) {
  VAR_1 = VAR_0->num_ports = 2;
 } else if (VAR_0->interface->cur_altsetting->desc.bNumEndpoints == 9) {
  VAR_0->num_bulk_in = 4;
  VAR_0->num_bulk_out = 4;
  VAR_1 = VAR_0->num_ports = 4;
 }
 FUNC_0 ("mos7840_num_ports = %d", VAR_1);
 return VAR_1;
}

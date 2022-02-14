
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int no_urb_create; int reverse_alts; int nmodes; int cam_mode; } ;
struct gspca_dev {TYPE_1__ cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1,
   const struct usb_device_id *VAR_2)
{
 VAR_1->cam.cam_mode = VAR_0;
 VAR_1->cam.nmodes = FUNC_0(VAR_0);
 VAR_1->cam.no_urb_create = 1;
 VAR_1->cam.reverse_alts = 1;
 return 0;
}

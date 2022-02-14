
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int dummy; } ;
struct sd {int sharpness; int whitebal; int saturation; int contrast; int brightness; } ;
struct TYPE_2__ {int no_urb_create; int nmodes; int cam_mode; } ;
struct gspca_dev {int nbalt; TYPE_1__ cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_6,
   const struct usb_device_id *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_6;

 VAR_6->cam.cam_mode = VAR_5;
 VAR_6->cam.nmodes = FUNC_0(VAR_5);
 VAR_6->cam.no_urb_create = 1;


 VAR_6->nbalt--;

 VAR_8->brightness = VAR_0;
 VAR_8->contrast = VAR_1;
 VAR_8->saturation = VAR_2;
 VAR_8->whitebal = VAR_4;
 VAR_8->sharpness = VAR_3;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int idProduct; int driver_info; } ;
struct sd {int quality; int ctrls; int sensor; int bridge; } ;
struct TYPE_2__ {int ctrls; } ;
struct gspca_dev {TYPE_1__ cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;

 if (VAR_4->idProduct == 0x301b)
  VAR_5->bridge = VAR_0;
 else
  VAR_5->bridge = VAR_1;


 VAR_5->sensor = VAR_4->driver_info;

 VAR_3->cam.ctrls = VAR_5->ctrls;
 VAR_5->quality = VAR_2;

 return 0;
}

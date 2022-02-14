
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int bridge; int invert_led; int quality; int ctrls; } ;
struct cam {int bulk; int reverse_alts; int ctrls; void* nmodes; void* cam_mode; int bulk_nurbs; int bulk_size; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_9,
   const struct usb_device_id *VAR_10)
{
 struct sd *VAR_11 = (struct sd *) VAR_9;
 struct cam *VAR_12 = &VAR_9->cam;

 VAR_11->bridge = VAR_10->driver_info & VAR_1;
 VAR_11->invert_led = (VAR_10->driver_info & VAR_0) != 0;

 switch (VAR_11->bridge) {
 case 134:
 case 133:
  VAR_12->cam_mode = VAR_5;
  VAR_12->nmodes = FUNC_0(VAR_5);
  break;
 case 132:
 case 131:
  VAR_12->cam_mode = VAR_6;
  VAR_12->nmodes = FUNC_0(VAR_6);
  break;
 case 130:
  VAR_12->cam_mode = VAR_7;
  VAR_12->nmodes = FUNC_0(VAR_7);
  VAR_11->invert_led = !VAR_11->invert_led;
  break;
 case 129:
  VAR_12->cam_mode = VAR_7;
  VAR_12->nmodes = FUNC_0(VAR_7);
  VAR_12->bulk_size = VAR_3;
  VAR_12->bulk_nurbs = VAR_2;
  VAR_12->bulk = 1;
  break;
 case 128:
  VAR_12->cam_mode = VAR_8;
  VAR_12->nmodes = FUNC_0(VAR_8);
  VAR_12->reverse_alts = 1;
  break;
 }

 VAR_9->cam.ctrls = VAR_11->ctrls;
 VAR_11->quality = VAR_4;

 return 0;
}

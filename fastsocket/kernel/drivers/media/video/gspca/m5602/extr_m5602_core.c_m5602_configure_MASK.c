
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int * desc; } ;
struct cam {scalar_t__ nmodes; int * cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3,
      const struct usb_device_id *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 struct cam *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_3->cam;
 VAR_5->desc = &VAR_2;

 if (VAR_1)
  FUNC_1(VAR_5);


 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  goto fail;

 return 0;

fail:
 FUNC_0(VAR_0, "ALi m5602 webcam failed");
 VAR_6->cam_mode = ((void*)0);
 VAR_6->nmodes = 0;

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {char* input_name; char* driver_name; int input_id; int map_name; int input_phys; } ;
struct dvb_usb_device {struct rc_dev* rc_dev; int udev; int rc_phys; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dvb_usb_adapter*) ;
 struct rc_dev* FUNC_2 () ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct dvb_usb_adapter *VAR_3)
{
 struct dvb_usb_device *VAR_4 = VAR_3->dev;
 struct rc_dev *VAR_5;
 int VAR_6;

 FUNC_0("STA Configuring Remote");

 VAR_5 = FUNC_2();
 if (!VAR_5)
  return -VAR_1;

 FUNC_7(VAR_4->udev, VAR_4->rc_phys, sizeof(VAR_4->rc_phys));
 FUNC_6(VAR_4->rc_phys, "/ir0", sizeof(VAR_4->rc_phys));

 VAR_5->input_name = "LME2510 Remote Control";
 VAR_5->input_phys = VAR_4->rc_phys;
 VAR_5->map_name = VAR_2;
 VAR_5->driver_name = "LME 2510";
 FUNC_8(VAR_4->udev, &VAR_5->input_id);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_5);
  return VAR_6;
 }
 VAR_4->rc_dev = VAR_5;


 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < 0) {
  FUNC_5(VAR_5);
  FUNC_0("INT Unable to start Interupt Service");
  return -VAR_0;
 }

 return 0;
}

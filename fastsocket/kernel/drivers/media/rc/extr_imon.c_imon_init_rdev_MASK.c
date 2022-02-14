
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct rc_dev {int allowed_protos; int map_name; int driver_name; int change_protocol; int driver_type; struct imon_context* priv; TYPE_1__ dev; int input_id; int input_phys; int input_name; } ;
struct imon_context {int vendor; int product; int rc_type; int dev; int usb_tx_buf; int usbdev_intf0; int phys_rdev; int name_rdev; } ;
typedef int fp_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct imon_context*) ;
 int VAR_6 ;
 int FUNC_3 (struct imon_context*) ;
 int FUNC_4 (int ,unsigned char const**,int) ;
 struct rc_dev* FUNC_5 () ;
 int FUNC_6 (struct rc_dev*) ;
 int FUNC_7 (struct rc_dev*) ;
 int FUNC_8 (struct imon_context*) ;
 int FUNC_9 (int ,int,char*,int,int) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static struct rc_dev *FUNC_13(struct imon_context *VAR_7)
{
 struct rc_dev *VAR_8;
 int VAR_9;
 const unsigned char VAR_10[] = { 0x40, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x88 };

 VAR_8 = FUNC_5();
 if (!VAR_8) {
  FUNC_0(VAR_7->dev, "remote control dev allocation failed\n");
  goto out;
 }

 FUNC_9(VAR_7->name_rdev, sizeof(VAR_7->name_rdev),
   "iMON Remote (%04x:%04x)", VAR_7->vendor, VAR_7->product);
 FUNC_11(VAR_7->usbdev_intf0, VAR_7->phys_rdev,
        sizeof(VAR_7->phys_rdev));
 FUNC_10(VAR_7->phys_rdev, "/input0", sizeof(VAR_7->phys_rdev));

 VAR_8->input_name = VAR_7->name_rdev;
 VAR_8->input_phys = VAR_7->phys_rdev;
 FUNC_12(VAR_7->usbdev_intf0, &VAR_8->input_id);
 VAR_8->dev.parent = VAR_7->dev;

 VAR_8->priv = VAR_7;
 VAR_8->driver_type = VAR_1;
 VAR_8->allowed_protos = VAR_4 | VAR_5;
 VAR_8->change_protocol = VAR_6;
 VAR_8->driver_name = VAR_0;


 FUNC_4(VAR_7->usb_tx_buf, &VAR_10, sizeof(VAR_10));
 VAR_9 = FUNC_8(VAR_7);

 if (VAR_9)
  FUNC_1(VAR_7->dev, "panel buttons/knobs setup failed\n");

 if (VAR_7->product == 0xffdc) {
  FUNC_2(VAR_7);
  VAR_8->allowed_protos = VAR_7->rc_type;
 }

 FUNC_3(VAR_7);

 if (VAR_7->rc_type == VAR_5)
  VAR_8->map_name = VAR_2;
 else
  VAR_8->map_name = VAR_3;

 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->dev, "remote input dev register failed\n");
  goto out;
 }

 return VAR_8;

out:
 FUNC_6(VAR_8);
 return ((void*)0);
}

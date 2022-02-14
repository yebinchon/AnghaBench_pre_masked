
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct mib_fw_version {int major; int minor; } ;
struct TYPE_2__ {scalar_t__ major; int minor; } ;
struct fwentry {TYPE_1__ fw_version; } ;
struct at76_priv {int board_type; int fw_version; } ;
typedef int fwv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct at76_priv* FUNC_0 (struct usb_device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct at76_priv*) ;
 int FUNC_3 (struct usb_device*,int ,struct mib_fw_version*,int) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct at76_priv*,struct usb_interface*) ;
 int FUNC_6 (struct usb_device*,struct fwentry*) ;
 struct fwentry* FUNC_7 (struct usb_device*,int) ;
 int FUNC_8 (struct usb_device*,struct fwentry*) ;
 int FUNC_9 (int ,int *,char*,...) ;
 int FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (int *,struct mib_fw_version*,int) ;
 struct usb_device* FUNC_12 (int ) ;
 int FUNC_13 (struct usb_device*) ;
 int FUNC_14 (struct usb_interface*,struct at76_priv*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_10,
        const struct usb_device_id *VAR_11)
{
 int VAR_12;
 struct at76_priv *VAR_13;
 struct fwentry *VAR_14;
 struct usb_device *VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 struct mib_fw_version VAR_18;
 int VAR_19 = (int)VAR_11->driver_info;

 VAR_15 = FUNC_12(FUNC_10(VAR_10));


 VAR_14 = FUNC_7(VAR_15, VAR_19);
 if (!VAR_14) {
  VAR_12 = -VAR_2;
  goto error;
 }

 VAR_16 = FUNC_4(VAR_15);

 FUNC_1(VAR_0, "opmode %d", VAR_16);




 if (VAR_16 == VAR_7) {
  FUNC_9(VAR_5, &VAR_10->dev,
      "cannot handle a device in HW_CONFIG_MODE\n");
  VAR_12 = -VAR_1;
  goto error;
 }

 if (VAR_16 != VAR_9
     && VAR_16 != VAR_8) {

  FUNC_9(VAR_4, &VAR_10->dev,
      "downloading internal firmware\n");
  VAR_12 = FUNC_8(VAR_15, VAR_14);
  if (VAR_12 < 0) {
   FUNC_9(VAR_5, &VAR_10->dev,
       "error %d downloading internal firmware\n",
       VAR_12);
   goto error;
  }
  FUNC_13(VAR_15);
  return VAR_12;
 }
 if ((VAR_14->fw_version.major > 0 || VAR_14->fw_version.minor >= 100)
     || (VAR_16 == VAR_9)) {
  VAR_12 = FUNC_3(VAR_15, VAR_6, &VAR_18, sizeof(VAR_18));
  if (VAR_12 < 0 || (VAR_18.major | VAR_18.minor) == 0)
   VAR_17 = 1;
 } else

  VAR_17 = 1;

 if (VAR_17) {
  FUNC_9(VAR_4, &VAR_10->dev,
      "downloading external firmware\n");

  VAR_12 = FUNC_6(VAR_15, VAR_14);
  if (VAR_12)
   goto error;


  VAR_12 = FUNC_3(VAR_15, VAR_6, &VAR_18, sizeof(VAR_18));
  if (VAR_12 < 0) {
   FUNC_9(VAR_5, &VAR_10->dev,
       "error %d getting firmware version\n", VAR_12);
   goto error;
  }
 }

 VAR_13 = FUNC_0(VAR_15);
 if (!VAR_13) {
  VAR_12 = -VAR_3;
  goto error;
 }

 FUNC_14(VAR_10, VAR_13);

 FUNC_11(&VAR_13->fw_version, &VAR_18, sizeof(struct mib_fw_version));
 VAR_13->board_type = VAR_19;

 VAR_12 = FUNC_5(VAR_13, VAR_10);
 if (VAR_12 < 0)
  FUNC_2(VAR_13);

 return VAR_12;

error:
 FUNC_13(VAR_15);
 return VAR_12;
}

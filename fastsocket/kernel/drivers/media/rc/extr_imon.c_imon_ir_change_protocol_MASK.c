
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_dev {int allowed_protos; struct imon_context* priv; } ;
struct imon_context {int rc_type; int pad_mouse; int usb_tx_buf; struct device* dev; } ;
struct device {int dummy; } ;
typedef int ir_proto_packet ;





 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,unsigned char**,int) ;
 int VAR_0 ;
 int FUNC_3 (struct imon_context*) ;

__attribute__((used)) static int FUNC_4(struct rc_dev *VAR_1, u64 VAR_2)
{
 int VAR_3;
 struct imon_context *VAR_4 = VAR_1->priv;
 struct device *VAR_5 = VAR_4->dev;
 unsigned char VAR_6[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86 };

 if (VAR_2 && !(VAR_2 & VAR_1->allowed_protos))
  FUNC_1(VAR_5, "Looks like you're trying to use an IR protocol "
    "this device does not support\n");

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_5, "Configuring IR receiver for MCE protocol\n");
  VAR_6[0] = 0x01;
  break;
 case 128:
 case 130:
  FUNC_0(VAR_5, "Configuring IR receiver for iMON protocol\n");
  if (!VAR_0)
   FUNC_0(VAR_5, "PAD stabilize functionality disabled\n");

  VAR_2 = 130;
  break;
 default:
  FUNC_1(VAR_5, "Unsupported IR protocol specified, overriding "
    "to iMON IR protocol\n");
  if (!VAR_0)
   FUNC_0(VAR_5, "PAD stabilize functionality disabled\n");

  VAR_2 = 130;
  break;
 }

 FUNC_2(VAR_4->usb_tx_buf, &VAR_6, sizeof(VAR_6));

 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3)
  goto out;

 VAR_4->rc_type = VAR_2;
 VAR_4->pad_mouse = 0;

out:
 return VAR_3;
}

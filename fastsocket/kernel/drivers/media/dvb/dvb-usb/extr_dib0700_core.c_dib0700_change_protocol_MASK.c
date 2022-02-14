
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct rc_dev {struct dvb_usb_device* priv; } ;
struct TYPE_3__ {scalar_t__ protocol; } ;
struct TYPE_4__ {TYPE_1__ rc_core; } ;
struct dvb_usb_device {TYPE_2__ props; struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; } ;
typedef int rc_setup ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct rc_dev *VAR_5, u64 VAR_6)
{
 struct dvb_usb_device *VAR_7 = VAR_5->priv;
 struct dib0700_state *VAR_8 = VAR_7->priv;
 u8 VAR_9[3] = { VAR_4, 0, 0 };
 int VAR_10, VAR_11;


 if (VAR_6 == VAR_2)
  VAR_10 = 1;
 else if (VAR_6 == VAR_1)
  VAR_10 = 0;
 else if (VAR_6 == VAR_3) {
  if (VAR_8->fw_version < 0x10200)
   return -VAR_0;

  VAR_10 = 2;
 } else
  return -VAR_0;

 VAR_9[1] = VAR_10;

 VAR_11 = FUNC_0(VAR_7, VAR_9, sizeof(VAR_9));
 if (VAR_11 < 0) {
  FUNC_1("ir protocol setup failed");
  return VAR_11;
 }

 VAR_7->props.rc_core.protocol = VAR_6;

 return VAR_11;
}

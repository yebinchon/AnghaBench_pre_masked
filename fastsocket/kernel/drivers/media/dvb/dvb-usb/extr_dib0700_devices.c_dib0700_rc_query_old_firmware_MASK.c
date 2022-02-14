
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int protocol; } ;
struct TYPE_4__ {TYPE_1__ rc_core; } ;
struct dvb_usb_device {int rc_dev; scalar_t__ last_event; TYPE_2__ props; struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; } ;



 int FUNC_0 (struct dvb_usb_device*,int ,int,scalar_t__*,int) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_1)
{
 u8 VAR_2[4];
 u32 VAR_3;
 u8 VAR_4;
 int VAR_5;
 struct dib0700_state *VAR_6 = VAR_1->priv;

 if (VAR_6->fw_version >= 0x10200) {




  return 0;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_0, 2, VAR_2, 4);
 if (VAR_5 <= 0) {
  FUNC_2("RC Query Failed");
  return -1;
 }


 if (VAR_2[0] == 0 && VAR_2[1] == 0 && VAR_2[2] == 0 && VAR_2[3] == 0)
  return 0;



 FUNC_1(VAR_1);

 VAR_1->last_event = 0;
 switch (VAR_1->props.rc_core.protocol) {
 case 128:

  if ((VAR_2[3-2] == 0x00) && (VAR_2[3-3] == 0x00) &&
      (VAR_2[3] == 0xff))
   VAR_3 = VAR_1->last_event;
  else {
   VAR_3 = VAR_2[3-2] << 8 | VAR_2[3-3];
   VAR_1->last_event = VAR_3;
  }

  FUNC_3(VAR_1->rc_dev, VAR_3, 0);
  break;
 default:

  VAR_3 = VAR_2[3-2] << 8 | VAR_2[3-3];
  VAR_4 = VAR_2[3-1];
  FUNC_3(VAR_1->rc_dev, VAR_3, VAR_4);

  break;
 }
 return 0;
}

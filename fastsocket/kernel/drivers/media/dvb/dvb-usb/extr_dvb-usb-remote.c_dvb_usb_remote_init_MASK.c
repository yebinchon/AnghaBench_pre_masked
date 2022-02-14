
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc_codes; } ;
struct TYPE_4__ {scalar_t__ rc_mode; int rc_interval; TYPE_1__ rc_core; scalar_t__ rc_query; scalar_t__ rc_key_map; } ;
struct dvb_usb_device {int state; TYPE_2__ props; int rc_phys; int udev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct dvb_usb_device *VAR_4)
{
 int VAR_5;

 if (VAR_3)
  return 0;

 if (VAR_4->props.rc_key_map && VAR_4->props.rc_query)
  VAR_4->props.rc_mode = VAR_1;
 else if (VAR_4->props.rc_core.rc_codes)
  VAR_4->props.rc_mode = VAR_0;
 else
  return 0;

 FUNC_3(VAR_4->udev, VAR_4->rc_phys, sizeof(VAR_4->rc_phys));
 FUNC_2(VAR_4->rc_phys, "/ir0", sizeof(VAR_4->rc_phys));


 if (VAR_4->props.rc_interval < 40)
  VAR_4->props.rc_interval = 100;

 if (VAR_4->props.rc_mode == VAR_1)
  VAR_5 = FUNC_0(VAR_4);
 else
  VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->state |= VAR_2;

 return 0;
}

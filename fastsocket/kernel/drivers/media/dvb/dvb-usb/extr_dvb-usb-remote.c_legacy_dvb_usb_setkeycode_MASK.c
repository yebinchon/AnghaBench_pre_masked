
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct dvb_usb_rc_key {int scan; int event; } ;
struct TYPE_2__ {int rc_key_map_size; struct dvb_usb_rc_key* rc_key_map; } ;
struct dvb_usb_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dvb_usb_device* FUNC_0 (struct input_dev*) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_3,
    int VAR_4, int VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_0(VAR_3);

 struct dvb_usb_rc_key *VAR_7 = VAR_6->props.rc_key_map;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_6->props.rc_key_map_size; VAR_8++)
  if (VAR_7[VAR_8].scan == VAR_4) {
   VAR_7[VAR_8].event = VAR_5;
   return 0;
  }


 for (VAR_8 = 0; VAR_8 < VAR_6->props.rc_key_map_size; VAR_8++)
  if (VAR_7[VAR_8].event == VAR_1 ||
      VAR_7[VAR_8].event == VAR_2) {
   VAR_7[VAR_8].scan = VAR_4;
   VAR_7[VAR_8].event = VAR_5;
   return 0;
  }
 return -VAR_0;
}

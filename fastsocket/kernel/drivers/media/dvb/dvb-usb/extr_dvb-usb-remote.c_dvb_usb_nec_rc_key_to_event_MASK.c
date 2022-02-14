
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct dvb_usb_rc_key {scalar_t__ event; } ;
struct TYPE_2__ {int rc_key_map_size; struct dvb_usb_rc_key* rc_key_map; } ;
struct dvb_usb_device {TYPE_1__ props; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct dvb_usb_rc_key*) ;
 int FUNC_2 (struct dvb_usb_rc_key*) ;

int FUNC_3(struct dvb_usb_device *VAR_3,
  u8 VAR_4[5], u32 *VAR_5, int *VAR_6)
{
 int VAR_7;
 struct dvb_usb_rc_key *VAR_8 = VAR_3->props.rc_key_map;
 *VAR_5 = 0;
 *VAR_6 = VAR_2;
 switch (VAR_4[0]) {
  case 130:
   break;
  case 129:
   if ((u8) ~VAR_4[1] != VAR_4[2] ||
    (u8) ~VAR_4[3] != VAR_4[4]) {
    FUNC_0("remote control checksum failed.\n");
    break;
   }

   for (VAR_7 = 0; VAR_7 < VAR_3->props.rc_key_map_size; VAR_7++)
    if (FUNC_1(&VAR_8[VAR_7]) == VAR_4[1] &&
     FUNC_2(&VAR_8[VAR_7]) == VAR_4[3]) {
     *VAR_5 = VAR_8[VAR_7].event;
     *VAR_6 = VAR_0;
     return 0;
    }
   FUNC_0("key mapping failed - no appropriate key found in keymapping\n");
   break;
  case 128:
   *VAR_6 = VAR_1;
   break;
  default:
   FUNC_0("unknown type of remote status: %d\n",VAR_4[0]);
   break;
 }
 return 0;
}

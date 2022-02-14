
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct dvb_usb_rc_key {int event; } ;
struct TYPE_2__ {int rc_key_map_size; struct dvb_usb_rc_key* rc_key_map; } ;
struct dvb_usb_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int,int *,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (struct dvb_usb_rc_key*) ;
 scalar_t__ FUNC_2 (struct dvb_usb_rc_key*) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_2, u32 *VAR_3,
  int *VAR_4)
{
 struct dvb_usb_rc_key *VAR_5 = VAR_2->props.rc_key_map;
 u8 VAR_6[2];
 int VAR_7;

 *VAR_3 = 0;
 *VAR_4 = VAR_1;

 if (FUNC_0(VAR_2, 0x10, ((void*)0), 0, VAR_6, 2) < 0)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_2->props.rc_key_map_size; VAR_7++) {
  if (FUNC_1(&VAR_5[VAR_7]) == VAR_6[0] &&
      FUNC_2(&VAR_5[VAR_7]) == VAR_6[1]) {
   *VAR_3 = VAR_5[VAR_7].event;
   *VAR_4 = VAR_0;

   return 0;
  }
 }

 return 0;
}

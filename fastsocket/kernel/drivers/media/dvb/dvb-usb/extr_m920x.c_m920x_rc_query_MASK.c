
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct m920x_state {int rep_count; } ;
struct TYPE_3__ {int rc_key_map_size; TYPE_2__* rc_key_map; } ;
struct dvb_usb_device {TYPE_1__ props; int udev; struct m920x_state* priv; } ;
struct TYPE_4__ {int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int,int ,int*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_6, u32 *VAR_7, int *VAR_8)
{
 struct m920x_state *VAR_9 = VAR_6->priv;
 int VAR_10, VAR_11 = 0;
 u8 VAR_12[2];

 if ((VAR_11 = FUNC_1(VAR_6->udev, VAR_0, 0x0, VAR_2, VAR_12, 1)) != 0)
  goto unlock;

 if ((VAR_11 = FUNC_1(VAR_6->udev, VAR_0, 0x0, VAR_1, VAR_12 + 1, 1)) != 0)
  goto unlock;

 for (VAR_10 = 0; VAR_10 < VAR_6->props.rc_key_map_size; VAR_10++)
  if (FUNC_2(&VAR_6->props.rc_key_map[VAR_10]) == VAR_12[1]) {
   *VAR_7 = VAR_6->props.rc_key_map[VAR_10].event;

   switch(VAR_12[0]) {
   case 0x80:
    *VAR_8 = VAR_5;
    goto unlock;

   case 0x88:
   case 0x99:
   case 0xc0:
   case 0xd8:
    *VAR_8 = VAR_5;
    VAR_9->rep_count = 0;
    goto unlock;

   case 0x93:
   case 0x92:
   case 0x83:
   case 0x82:
    VAR_9->rep_count = 0;
    *VAR_8 = VAR_3;
    goto unlock;

   case 0x91:
   case 0x81:

    if (++VAR_9->rep_count > 2)
     *VAR_8 = VAR_4;
    else
     *VAR_8 = VAR_5;
    goto unlock;

   default:
    FUNC_0("Unexpected rc state %02x\n", VAR_12[0]);
    *VAR_8 = VAR_5;
    goto unlock;
   }
  }

 if (VAR_12[1] != 0)
  FUNC_0("Unknown rc key %02x\n", VAR_12[1]);

 *VAR_8 = VAR_5;

 unlock:

 return VAR_11;
}

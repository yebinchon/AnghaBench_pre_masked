
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_3__ {int* port_status; int pending_port; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(int VAR_5, enum usb_device_speed VAR_6)
{
 unsigned long VAR_7;

 FUNC_3("rh_port_connect %d\n", VAR_5);

 FUNC_0(&VAR_4->lock, VAR_7);

 VAR_4->port_status[VAR_5] |= VAR_1
  | (1 << VAR_0);

 switch (VAR_6) {
 case 129:
  VAR_4->port_status[VAR_5] |= VAR_2;
  break;
 case 128:
  VAR_4->port_status[VAR_5] |= VAR_3;
  break;
 default:
  break;
 }





 VAR_4->pending_port = VAR_5;

 FUNC_1(&VAR_4->lock, VAR_7);

 FUNC_2(FUNC_4(VAR_4));
}

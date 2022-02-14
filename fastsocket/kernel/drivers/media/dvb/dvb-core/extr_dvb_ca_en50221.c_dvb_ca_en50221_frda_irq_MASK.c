
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_ca_private {int open; TYPE_2__* slot_info; TYPE_1__* pub; } ;
struct dvb_ca_en50221 {struct dvb_ca_private* private; } ;
struct TYPE_4__ {int slot_state; int da_irq_supported; } ;
struct TYPE_3__ {int (* read_cam_control ) (struct dvb_ca_en50221*,int,int ) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct dvb_ca_private*) ;
 int FUNC_2 (struct dvb_ca_en50221*,int,int ) ;

void FUNC_3(struct dvb_ca_en50221 *VAR_2, int VAR_3)
{
 struct dvb_ca_private *VAR_4 = VAR_2->private;
 int VAR_5;

 FUNC_0("FR/DA IRQ slot:%i\n", VAR_3);

 switch (VAR_4->slot_info[VAR_3].slot_state) {
 case 129:
  VAR_5 = VAR_4->pub->read_cam_control(VAR_2, VAR_3, VAR_0);
  if (VAR_5 & VAR_1) {
   FUNC_0("CAM supports DA IRQ\n");
   VAR_4->slot_info[VAR_3].da_irq_supported = 1;
  }
  break;

 case 128:
  if (VAR_4->open)
   FUNC_1(VAR_4);
  break;
 }
}

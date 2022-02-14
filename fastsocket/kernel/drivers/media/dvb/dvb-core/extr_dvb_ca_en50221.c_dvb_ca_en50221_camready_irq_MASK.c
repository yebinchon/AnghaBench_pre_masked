
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_ca_private {TYPE_1__* slot_info; } ;
struct dvb_ca_en50221 {struct dvb_ca_private* private; } ;
struct TYPE_2__ {scalar_t__ slot_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_ca_private*) ;

void FUNC_2(struct dvb_ca_en50221 *VAR_2, int VAR_3)
{
 struct dvb_ca_private *VAR_4 = VAR_2->private;

 FUNC_0("CAMREADY IRQ slot:%i\n", VAR_3);

 if (VAR_4->slot_info[VAR_3].slot_state == VAR_1) {
  VAR_4->slot_info[VAR_3].slot_state = VAR_0;
  FUNC_1(VAR_4);
 }
}

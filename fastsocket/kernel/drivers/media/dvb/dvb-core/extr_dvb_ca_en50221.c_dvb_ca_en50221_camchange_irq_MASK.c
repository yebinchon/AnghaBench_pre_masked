
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_ca_private {TYPE_1__* slot_info; } ;
struct dvb_ca_en50221 {struct dvb_ca_private* private; } ;
struct TYPE_2__ {int camchange_type; int camchange_count; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct dvb_ca_private*) ;

void FUNC_3(struct dvb_ca_en50221 *VAR_0, int VAR_1, int VAR_2)
{
 struct dvb_ca_private *VAR_3 = VAR_0->private;

 FUNC_1("CAMCHANGE IRQ slot:%i change_type:%i\n", VAR_1, VAR_2);

 switch (VAR_2) {
 case 128:
 case 129:
  break;

 default:
  return;
 }

 VAR_3->slot_info[VAR_1].camchange_type = VAR_2;
 FUNC_0(&VAR_3->slot_info[VAR_1].camchange_count);
 FUNC_2(VAR_3);
}

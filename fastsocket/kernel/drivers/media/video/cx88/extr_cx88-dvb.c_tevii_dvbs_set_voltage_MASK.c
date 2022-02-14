
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx88_core {int (* prev_set_voltage ) (struct dvb_frontend*,int ) ;} ;
struct cx8802_dev {struct cx88_core* core; } ;
typedef int fe_sec_voltage_t ;
struct TYPE_2__ {struct cx8802_dev* priv; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
          fe_sec_voltage_t VAR_2)
{
 struct cx8802_dev *VAR_3= VAR_1->dvb->priv;
 struct cx88_core *VAR_4 = VAR_3->core;

 FUNC_1(VAR_0, 0x6040);
 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_0, 0x20);
  break;
 case 129:
  FUNC_1(VAR_0, 0x20);
  break;
 case 128:
  FUNC_0(VAR_0, 0x20);
  break;
 }

 if (VAR_4->prev_set_voltage)
  return VAR_4->prev_set_voltage(VAR_1, VAR_2);
 return 0;
}

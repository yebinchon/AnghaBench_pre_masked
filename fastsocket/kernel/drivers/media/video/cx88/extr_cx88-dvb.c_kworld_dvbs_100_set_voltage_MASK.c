
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
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_2,
           fe_sec_voltage_t VAR_3)
{
 struct cx8802_dev *VAR_4= VAR_2->dvb->priv;
 struct cx88_core *VAR_5 = VAR_4->core;

 if (VAR_3 == VAR_1)
  FUNC_0(VAR_0, 0x000006fb);
 else
  FUNC_0(VAR_0, 0x000006f9);

 if (VAR_5->prev_set_voltage)
  return VAR_5->prev_set_voltage(VAR_2, VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttusb {int voltage; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
typedef int fe_sec_voltage_t ;
struct TYPE_2__ {scalar_t__ priv; } ;


 int FUNC_0 (struct ttusb*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, fe_sec_voltage_t VAR_1)
{
 struct ttusb* VAR_2 = (struct ttusb*) VAR_0->dvb->priv;

 VAR_2->voltage = VAR_1;
 return FUNC_0(VAR_2);
}

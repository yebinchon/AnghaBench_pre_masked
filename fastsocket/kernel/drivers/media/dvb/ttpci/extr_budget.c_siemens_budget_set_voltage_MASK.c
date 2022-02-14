
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct budget {int dummy; } ;
typedef int fe_sec_voltage_t ;
struct TYPE_2__ {scalar_t__ priv; } ;


 int FUNC_0 (struct budget*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, fe_sec_voltage_t VAR_1)
{
 struct budget* VAR_2 = (struct budget*) VAR_0->dvb->priv;

 return FUNC_0 (VAR_2, VAR_1);
}

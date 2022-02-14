
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;
struct dvb_frontend {struct tda8083_state* demodulator_priv; } ;
typedef int fe_sec_voltage_t ;


 int FUNC_0 (struct tda8083_state*,int ) ;
 int FUNC_1 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, fe_sec_voltage_t VAR_1)
{
 struct tda8083_state* VAR_2 = VAR_0->demodulator_priv;

 FUNC_0 (VAR_2, VAR_1);
 FUNC_1 (VAR_2, 0x00, 0x3c);
 FUNC_1 (VAR_2, 0x00, 0x04);

 return 0;
}

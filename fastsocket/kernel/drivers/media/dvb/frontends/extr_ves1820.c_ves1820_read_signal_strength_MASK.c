
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ves1820_state {int dummy; } ;
struct dvb_frontend {struct ves1820_state* demodulator_priv; } ;


 int FUNC_0 (struct ves1820_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct ves1820_state* VAR_2 = VAR_0->demodulator_priv;

 u8 VAR_3 = FUNC_0(VAR_2, 0x17);
 *VAR_1 = (VAR_3 << 8) | VAR_3;

 return 0;
}

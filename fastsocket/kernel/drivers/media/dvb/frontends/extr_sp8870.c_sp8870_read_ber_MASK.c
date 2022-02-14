
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sp8870_state {int dummy; } ;
struct dvb_frontend {struct sp8870_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct sp8870_state*,int) ;

__attribute__((used)) static int FUNC_1 (struct dvb_frontend* VAR_1, u32 * VAR_2)
{
 struct sp8870_state* VAR_3 = VAR_1->demodulator_priv;
 int VAR_4;
 u32 VAR_5;

 *VAR_2 = 0;

 VAR_4 = FUNC_0(VAR_3, 0xC08);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_5 = VAR_4 & 0x3F;

 VAR_4 = FUNC_0(VAR_3, 0xC07);
 if (VAR_4 < 0)
  return -VAR_0;

  VAR_5 = VAR_4 << 6;

 if (VAR_5 >= 0x3FFF0)
  VAR_5 = ~0;

 *VAR_2 = VAR_5;

 return 0;
}

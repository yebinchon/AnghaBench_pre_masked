
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda8083_state {int dummy; } ;
struct dvb_frontend {struct tda8083_state* demodulator_priv; } ;
typedef int buf ;


 int FUNC_0 (struct tda8083_state*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct tda8083_state* VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;
 u8 VAR_4[3];

 if ((VAR_3 = FUNC_0(VAR_2, 0x0b, VAR_4, sizeof(VAR_4))))
  return VAR_3;

 *VAR_1 = ((VAR_4[0] & 0x1f) << 16) | (VAR_4[1] << 8) | VAR_4[2];

 return 0;
}

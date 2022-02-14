
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tda10023_state {int dummy; } ;
struct dvb_frontend {struct tda10023_state* demodulator_priv; } ;


 int FUNC_0 (struct tda10023_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct tda10023_state* VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3=FUNC_0(VAR_2, 0x2f);

 u16 VAR_4 = ((255-FUNC_0(VAR_2, 0x17))) + (255-VAR_3)/16;

 if (VAR_4>0x90)
  VAR_4=VAR_4+2*(VAR_4-0x90);
 if (VAR_4>255)
  VAR_4=255;

 *VAR_1 = (VAR_4<<8)|VAR_4;
 return 0;
}

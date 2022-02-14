
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda10023_state {int dummy; } ;
struct dvb_frontend {struct tda10023_state* demodulator_priv; } ;


 int FUNC_0 (struct tda10023_state*,int) ;
 int FUNC_1 (struct tda10023_state*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct tda10023_state* VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3,VAR_4,VAR_5;
 VAR_3=FUNC_0(VAR_2, 0x14);
 VAR_4=FUNC_0(VAR_2, 0x15);
 VAR_5=FUNC_0(VAR_2, 0x16)&0xf;
 FUNC_1 (VAR_2, 0x10, 0xc0, 0x00);

 *VAR_1 = VAR_3 | (VAR_4<<8)| (VAR_5<<16);
 return 0;
}

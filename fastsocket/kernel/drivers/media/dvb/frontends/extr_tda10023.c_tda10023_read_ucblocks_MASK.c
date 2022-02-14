
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
 u8 VAR_3,VAR_4,VAR_5,VAR_6;
 VAR_3= FUNC_0 (VAR_2, 0x74);
 VAR_4= FUNC_0 (VAR_2, 0x75);
 VAR_5= FUNC_0 (VAR_2, 0x76);
 VAR_6= FUNC_0 (VAR_2, 0x77);
 *VAR_1 = VAR_3 | (VAR_4<<8)|(VAR_5<<16)|(VAR_6<<24);

 FUNC_1 (VAR_2, 0x10, 0x20,0x00);
 FUNC_1 (VAR_2, 0x10, 0x20,0x20);
 FUNC_1 (VAR_2, 0x13, 0x01, 0x00);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nxt200x_state {int dummy; } ;
struct dvb_frontend {struct nxt200x_state* demodulator_priv; } ;


 int FUNC_0 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_1 (struct nxt200x_state*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u16* VAR_1)
{

 struct nxt200x_state* VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3[2];
 u16 VAR_4 = 0, VAR_5;
 u32 VAR_6 = 0;


 VAR_3[0] = 0x00;
 FUNC_1(VAR_2, 0xA1, VAR_3, 1);


 FUNC_0(VAR_2, 0xA6, VAR_3, 2);

 VAR_4 = (VAR_3[0] << 8) | VAR_3[1];
 VAR_5 = 0x7FFF - VAR_4;


 if (VAR_5 > 0x7F00)
  VAR_6 = 1000*24 + ( 1000*(30-24) * ( VAR_5 - 0x7F00 ) / ( 0x7FFF - 0x7F00 ) );
 else if (VAR_5 > 0x7EC0)
  VAR_6 = 1000*18 + ( 1000*(24-18) * ( VAR_5 - 0x7EC0 ) / ( 0x7F00 - 0x7EC0 ) );
 else if (VAR_5 > 0x7C00)
  VAR_6 = 1000*12 + ( 1000*(18-12) * ( VAR_5 - 0x7C00 ) / ( 0x7EC0 - 0x7C00 ) );
 else
  VAR_6 = 1000*0 + ( 1000*(12-0) * ( VAR_5 - 0 ) / ( 0x7C00 - 0 ) );


 *VAR_1 = VAR_6 * (0xFFFF/32000);

 return 0;
}

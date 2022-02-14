
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u16 * VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
 u16 VAR_3;
 s32 VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8 = 0;

 VAR_3 = FUNC_0(VAR_2, 542);
 VAR_6 = (VAR_3 >> 6) & 0xff;
 VAR_7 = (VAR_3 & 0x3f);

 VAR_3 = FUNC_0(VAR_2, 543);
 VAR_4 = (VAR_3 >> 6) & 0xff;
 VAR_5 = (VAR_3 & 0x3f);

 if ((VAR_7 & 0x20) != 0)
  VAR_7 -= 0x40;
 if ((VAR_5 & 0x20) != 0)
  VAR_5 -= 0x40;

 if (VAR_4 != 0)
  VAR_8 = FUNC_1(2) * 10 * VAR_5 + 10 * FUNC_1(VAR_4);
 else
  VAR_8 = FUNC_1(2) * 10 * VAR_5 - 100;
 if (VAR_6 != 0)
  VAR_8 -= FUNC_1(2) * 10 * VAR_7 + 10 * FUNC_1(VAR_6);
 else
  VAR_8 -= FUNC_1(2) * 10 * VAR_7 - 100;

 *VAR_1 = VAR_8 / ((1 << 24) / 10);
 return 0;
}

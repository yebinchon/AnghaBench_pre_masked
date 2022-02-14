
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib0070_state* tuner_priv; } ;
struct dib0070_state {int dummy; } ;


 int FUNC_0 (struct dib0070_state*,int) ;
 int FUNC_1 (struct dib0070_state*,int,int) ;

int FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1)
{
 struct dib0070_state *VAR_2 = VAR_0->tuner_priv;
 u16 VAR_3 = FUNC_0(VAR_2, 0x07) & 0xfe7ff;
 if (VAR_1 > 3)
  VAR_1 = 3;
 if (VAR_1 < 1)
  VAR_1 = 1;
 return FUNC_1(VAR_2, 0x07, VAR_3 | (VAR_1 << 11));
}

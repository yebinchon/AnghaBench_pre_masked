
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv6110_priv {int* regs; int mclk; } ;
struct dvb_frontend {struct stv6110_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, u32 *VAR_3)
{
 struct stv6110_priv *VAR_4 = VAR_2->tuner_priv;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 u8 VAR_9[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

 FUNC_0(VAR_2, VAR_9, 0, 8);

 VAR_6 = (VAR_4->regs[VAR_1] & 0x0f) << 8;
 VAR_6 += VAR_4->regs[VAR_0];


 VAR_5 = (VAR_4->regs[VAR_1] >> 6) & 3;

 VAR_7 = (VAR_4->regs[VAR_1] >> 4) & 1;

 VAR_8 = VAR_6 * (VAR_4->mclk / 1000);
 VAR_8 /= (1 << (VAR_5 + VAR_7));
 VAR_8 /= 4;

 *VAR_3 = VAR_8;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv6110_priv {int* regs; int mclk; int clk_div; } ;
struct dvb_frontend {struct stv6110_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int*,size_t,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct stv6110_priv *VAR_3 = VAR_2->tuner_priv;
 u8 VAR_4[] = { 0x07, 0x11, 0xdc, 0x85, 0x17, 0x01, 0xe6, 0x1e };

 FUNC_0(VAR_3->regs, VAR_4, 8);

 VAR_3->regs[VAR_0] &= ~(0x1f << 3);
 VAR_3->regs[VAR_0] |=
    ((((VAR_3->mclk / 1000000) - 16) & 0x1f) << 3);


 VAR_3->regs[VAR_1] &= ~0xc0;
 VAR_3->regs[VAR_1] |= (VAR_3->clk_div << 6);

 FUNC_3(VAR_2, &VAR_3->regs[VAR_0], VAR_0, 8);
 FUNC_1(1);
 FUNC_2(VAR_2, 72000000);

 return 0;
}

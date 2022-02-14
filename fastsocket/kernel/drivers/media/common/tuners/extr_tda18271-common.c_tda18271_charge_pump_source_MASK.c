
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
typedef enum tda18271_pll { ____Placeholder_tda18271_pll } tda18271_pll ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_frontend*,int,int) ;

int FUNC_1(struct dvb_frontend *VAR_3,
    enum tda18271_pll VAR_4, int VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_3->tuner_priv;
 unsigned char *VAR_7 = VAR_6->tda18271_regs;

 int VAR_8 = (VAR_4 == VAR_2) ? VAR_1 : VAR_0;

 VAR_7[VAR_8] &= ~0x20;
 VAR_7[VAR_8] |= ((VAR_5 & 1) << 5);

 return FUNC_0(VAR_3, VAR_8, 1);
}

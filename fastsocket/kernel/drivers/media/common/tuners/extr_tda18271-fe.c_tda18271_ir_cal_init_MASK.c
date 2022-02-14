
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct tda18271_priv *VAR_2 = VAR_1->tuner_priv;
 unsigned char *VAR_3 = VAR_2->tda18271_regs;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_2(VAR_4))
  goto fail;


 if ((VAR_3[VAR_0] & 0x08) == 0)
  VAR_4 = FUNC_0(VAR_1);
fail:
 return VAR_4;
}

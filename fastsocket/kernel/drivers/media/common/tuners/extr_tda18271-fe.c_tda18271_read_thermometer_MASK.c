
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,size_t,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct tda18271_priv *VAR_3 = VAR_2->tuner_priv;
 unsigned char *VAR_4 = VAR_3->tda18271_regs;
 int VAR_5;


 VAR_4[VAR_1] |= 0x10;
 FUNC_3(VAR_2, VAR_1, 1);


 FUNC_2(VAR_2);

 if ((((VAR_4[VAR_1] & 0x0f) == 0x00) && ((VAR_4[VAR_1] & 0x20) == 0x20)) ||
     (((VAR_4[VAR_1] & 0x0f) == 0x08) && ((VAR_4[VAR_1] & 0x20) == 0x00))) {

  if ((VAR_4[VAR_1] & 0x20) == 0x20)
   VAR_4[VAR_1] &= ~0x20;
  else
   VAR_4[VAR_1] |= 0x20;

  FUNC_3(VAR_2, VAR_1, 1);

  FUNC_0(10);


  FUNC_2(VAR_2);
 }

 VAR_5 = FUNC_1(VAR_2);


 VAR_4[VAR_1] &= ~0x10;
 FUNC_3(VAR_2, VAR_1, 1);


 VAR_4[VAR_0] &= ~0x03;
 FUNC_3(VAR_2, VAR_0, 1);

 return VAR_5;
}

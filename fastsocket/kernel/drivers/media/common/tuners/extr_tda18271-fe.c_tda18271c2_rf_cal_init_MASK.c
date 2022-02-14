
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; int cal_initialized; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct tda18271_priv *VAR_2 = VAR_1->tuner_priv;
 unsigned char *VAR_3 = VAR_2->tda18271_regs;
 int VAR_4;


 if ((VAR_3[VAR_0] & 0x10) == 0)
  VAR_2->cal_initialized = 0;

 if (VAR_2->cal_initialized)
  return 0;

 VAR_4 = FUNC_0(VAR_1);
 if (FUNC_2(VAR_4))
  goto fail;

 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_2(VAR_4))
  goto fail;

 FUNC_3("tda18271: RF tracking filter calibration complete\n");

 VAR_2->cal_initialized = 1;
 goto end;
fail:
 FUNC_3("tda18271: RF tracking filter calibration failed!\n");
end:
 return VAR_4;
}

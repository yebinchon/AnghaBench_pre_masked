
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
struct TYPE_2__ {unsigned char d; int r1; int r0; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int,int) ;

int FUNC_1(struct dvb_frontend *VAR_2)
{
 struct tda18271_priv *VAR_3 = VAR_2->tuner_priv;
 unsigned char *VAR_4 = VAR_3->tda18271_regs;
 int VAR_5, VAR_6 = 0;

 while (VAR_1[VAR_6].d < (VAR_4[VAR_0] & 0x0f)) {
  if (VAR_1[VAR_6 + 1].d == 0)
   break;
  VAR_6++;
 }

 if ((VAR_4[VAR_0] & 0x20) == 0x20)
  VAR_5 = VAR_1[VAR_6].r1;
 else
  VAR_5 = VAR_1[VAR_6].r0;

 FUNC_0("(%d) tm = %d\n", VAR_6, VAR_5);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int i2c_props; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0)
{
 struct microtune_priv *VAR_1 = VAR_0->tuner_priv;
 int VAR_2,VAR_3=0;
 unsigned char VAR_4[2];

 for(VAR_2=0;VAR_2<10;VAR_2++) {
  VAR_4[0]=0x0e;
  FUNC_2(&VAR_1->i2c_props,VAR_4,1);
  FUNC_1(&VAR_1->i2c_props,VAR_4,1);
  FUNC_0("mt2032 Reg.E=0x%02x\n",VAR_4[0]);
  VAR_3=VAR_4[0] &0x06;

  if (VAR_3==6)
   break;

  FUNC_0("mt2032: pll wait 1ms for lock (0x%2x)\n",VAR_4[0]);
  FUNC_3(1000);
 }
 return VAR_3;
}

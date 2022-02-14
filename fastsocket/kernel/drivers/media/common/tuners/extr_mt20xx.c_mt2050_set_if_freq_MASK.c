
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int i2c_props; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct dvb_frontend *VAR_1,unsigned int VAR_2, unsigned int VAR_3)
{
 struct microtune_priv *VAR_4 = VAR_1->tuner_priv;
 unsigned int VAR_5=1218*1000*1000;
 unsigned int VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17;
 int VAR_18;
 unsigned char VAR_19[6];

 FUNC_1("mt2050_set_if_freq freq=%d if1=%d if2=%d\n",
    VAR_2,VAR_5,VAR_3);

 VAR_6=VAR_2+VAR_5;
 VAR_6=(VAR_6/1000000)*1000000;

 VAR_7=VAR_6-VAR_2-VAR_3;
 VAR_7=(VAR_7/50000)*50000;

 VAR_8=VAR_6/4000000;
 VAR_9=VAR_7/4000000;

 VAR_10= VAR_6-(VAR_8*4000000);
 VAR_11= VAR_7-(VAR_9*4000000);

 VAR_12=4*VAR_10/4000000;
 VAR_13=4096*(VAR_11/1000)/4000;



 VAR_14=(VAR_8/12)-1;
 VAR_15=VAR_8-(VAR_14+1)*12;

 VAR_16=(VAR_9/8)-1;
 VAR_17=VAR_9-(VAR_16+1)*8;

 if (VAR_0 > 1) {
  FUNC_1("lo1 lo2 = %d %d\n", VAR_8, VAR_9);
  FUNC_1("num1 num2 div1a div1b div2a div2b= %x %x %x %x %x %x\n",
     VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17);
 }

 VAR_19[0]=1;
 VAR_19[1]= 4*VAR_15 + VAR_12;
 if(VAR_2<275*1000*1000) VAR_19[1] = VAR_19[1]|0x80;

 VAR_19[2]=VAR_14;
 VAR_19[3]=32*VAR_17 + VAR_13/256;
 VAR_19[4]=VAR_13-(VAR_13/256)*256;
 VAR_19[5]=VAR_16;
 if(VAR_13!=0) VAR_19[5]=VAR_19[5]|0x40;

 if (VAR_0 > 1) {
  int VAR_20;
  FUNC_1("bufs is: ");
  for(VAR_20=0;VAR_20<6;VAR_20++)
   FUNC_0("%x ",VAR_19[VAR_20]);
  FUNC_0("\n");
 }

 VAR_18=FUNC_2(&VAR_4->i2c_props,VAR_19,6);
 if (VAR_18!=6)
  FUNC_3("i2c i/o error: rc == %d (should be 6)\n",VAR_18);
}

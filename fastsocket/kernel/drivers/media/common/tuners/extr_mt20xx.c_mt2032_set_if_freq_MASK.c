
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int xogc; int i2c_props; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned char*,int*,int) ;
 int FUNC_3 (struct dvb_frontend*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(struct dvb_frontend *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3, unsigned int VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned char VAR_7[21];
 int VAR_8,VAR_9,VAR_10,VAR_11=0;
 struct microtune_priv *VAR_12 = VAR_1->tuner_priv;

 FUNC_4("mt2032_set_if_freq rfin=%d if1=%d if2=%d from=%d to=%d\n",
    VAR_2,VAR_3,VAR_4,VAR_5,VAR_6);

 VAR_7[0]=0;
 VAR_9=FUNC_6(&VAR_12->i2c_props,VAR_7,1);
 FUNC_5(&VAR_12->i2c_props,VAR_7,21);

 VAR_7[0]=0;
 VAR_9=FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,&VAR_7[1],&VAR_10,VAR_12->xogc);
 if (VAR_9<0)
  return;


 VAR_7[0]=0;
 VAR_9=FUNC_6(&VAR_12->i2c_props,VAR_7,4);
 VAR_7[5]=5;
 VAR_9=FUNC_6(&VAR_12->i2c_props,VAR_7+5,4);
 VAR_7[11]=11;
 VAR_9=FUNC_6(&VAR_12->i2c_props,VAR_7+11,3);
 if(VAR_9!=3)
  FUNC_7("i2c i/o error: rc == %d (should be 3)\n",VAR_9);


 for(VAR_8=0; VAR_8<2; VAR_8++) {
  VAR_11=FUNC_1(VAR_1);

  if(VAR_0)
   VAR_11=FUNC_3(VAR_1,VAR_10,VAR_11);
  if(VAR_11==6) break;

  FUNC_4("mt2032: re-init PLLs by LINT\n");
  VAR_7[0]=7;
  VAR_7[1]=0x80 +8+VAR_12->xogc;
  FUNC_6(&VAR_12->i2c_props,VAR_7,2);
  FUNC_0(10);
  VAR_7[1]=8+VAR_12->xogc;
  FUNC_6(&VAR_12->i2c_props,VAR_7,2);
 }

 if (VAR_11!=6)
  FUNC_7("MT2032 Fatal Error: PLLs didn't lock.\n");

 VAR_7[0]=2;
 VAR_7[1]=0x20;
 VAR_9=FUNC_6(&VAR_12->i2c_props,VAR_7,2);
 if (VAR_9!=2)
  FUNC_7("i2c i/o error: rc == %d (should be 2)\n",VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int*) ;
 int FUNC_4 (struct dvb_frontend*,int*) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int*) ;
 int FUNC_7 (struct dvb_frontend*,int ,int) ;
 int FUNC_8 (struct dvb_frontend*) ;
 int FUNC_9 (struct dvb_frontend*,size_t,int) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_12, u32 VAR_13)
{
 struct tda18271_priv *VAR_14 = VAR_12->tuner_priv;
 unsigned char *VAR_15 = VAR_14->tda18271_regs;
 u32 VAR_16;


 VAR_15[VAR_8] &= ~0x03;
 FUNC_9(VAR_12, VAR_8, 1);


 VAR_15[VAR_7] |= 0x40;

 VAR_15[VAR_3] |= 0x03;
 FUNC_9(VAR_12, VAR_3, 1);



 FUNC_1(VAR_12, &VAR_13);
 FUNC_3(VAR_12, &VAR_13);
 FUNC_6(VAR_12, &VAR_13);
 FUNC_4(VAR_12, &VAR_13);

 FUNC_9(VAR_12, VAR_5, 3);
 FUNC_9(VAR_12, VAR_1, 1);


 FUNC_7(VAR_12, VAR_11, 1);


 FUNC_7(VAR_12, VAR_10, 1);


 VAR_15[VAR_2] = 0x00;
 FUNC_9(VAR_12, VAR_2, 1);


 VAR_15[VAR_4] &= ~0x20;
 FUNC_9(VAR_12, VAR_4, 1);


 VAR_15[VAR_8] |= 0x03;
 FUNC_9(VAR_12, VAR_8, 2);




 VAR_16 = VAR_13;

 FUNC_2(VAR_12, VAR_16);
 FUNC_9(VAR_12, VAR_0, 4);


 VAR_16 += 1000000;

 FUNC_5(VAR_12, VAR_16);
 FUNC_9(VAR_12, VAR_9, 4);

 FUNC_0(5);

 FUNC_9(VAR_12, VAR_6, 1);
 FUNC_9(VAR_12, VAR_5, 1);
 FUNC_9(VAR_12, VAR_6, 1);
 FUNC_9(VAR_12, VAR_5, 1);




 FUNC_7(VAR_12, VAR_11, 0);


 FUNC_7(VAR_12, VAR_10, 0);

 FUNC_0(10);


 VAR_15[VAR_4] |= 0x20;
 FUNC_9(VAR_12, VAR_4, 1);

 FUNC_0(60);




 VAR_15[VAR_8] &= ~0x03;


 VAR_15[VAR_7] &= ~0x40;

 VAR_15[VAR_3] &= ~0x03;
 FUNC_9(VAR_12, VAR_3, 1);

 FUNC_9(VAR_12, VAR_7, 2);


 FUNC_9(VAR_12, VAR_5, 1);


 FUNC_8(VAR_12);

 return VAR_15[VAR_2];
}

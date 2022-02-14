
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int adap; } ;
struct tda18271_priv {unsigned char* tda18271_regs; int id; TYPE_1__ i2c_props; } ;
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
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;


 int VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int ,int) ;
 int FUNC_3 (struct dvb_frontend*,size_t,int) ;
 int FUNC_4 (char*,int ,int ) ;

int FUNC_5(struct dvb_frontend *VAR_41)
{
 struct tda18271_priv *VAR_42 = VAR_41->tuner_priv;
 unsigned char *VAR_43 = VAR_42->tda18271_regs;

 FUNC_4("initializing registers for device @ %d-%04x\n",
  FUNC_0(VAR_42->i2c_props.adap),
  VAR_42->i2c_props.addr);


 switch (VAR_42->id) {
 case 129:
  VAR_43[VAR_32] = 0x83;
  break;
 case 128:
  VAR_43[VAR_32] = 0x84;
  break;
 };

 VAR_43[VAR_38] = 0x08;
 VAR_43[VAR_37] = 0x80;
 VAR_43[VAR_27] = 0xc6;
 VAR_43[VAR_28] = 0xdf;
 VAR_43[VAR_29] = 0x16;
 VAR_43[VAR_30] = 0x60;
 VAR_43[VAR_31] = 0x80;
 VAR_43[VAR_3] = 0x80;
 VAR_43[VAR_0] = 0x00;
 VAR_43[VAR_1] = 0x00;
 VAR_43[VAR_2] = 0x00;
 VAR_43[VAR_36] = 0x00;
 VAR_43[VAR_33] = 0x00;
 VAR_43[VAR_34] = 0x00;
 VAR_43[VAR_35] = 0x00;

 switch (VAR_42->id) {
 case 129:
  VAR_43[VAR_4] = 0xff;
  break;
 case 128:
  VAR_43[VAR_4] = 0xfc;
  break;
 };

 VAR_43[VAR_15] = 0x01;
 VAR_43[VAR_20] = 0x84;
 VAR_43[VAR_21] = 0x41;
 VAR_43[VAR_22] = 0x01;
 VAR_43[VAR_23] = 0x84;
 VAR_43[VAR_24] = 0x40;
 VAR_43[VAR_25] = 0x07;
 VAR_43[VAR_26] = 0x00;
 VAR_43[VAR_5] = 0x00;
 VAR_43[VAR_6] = 0x96;

 switch (VAR_42->id) {
 case 129:
  VAR_43[VAR_7] = 0x0f;
  break;
 case 128:
  VAR_43[VAR_7] = 0x33;
  break;
 };

 VAR_43[VAR_8] = 0xc1;
 VAR_43[VAR_9] = 0x00;
 VAR_43[VAR_10] = 0x8f;
 VAR_43[VAR_11] = 0x00;
 VAR_43[VAR_12] = 0x00;

 switch (VAR_42->id) {
 case 129:
  VAR_43[VAR_13] = 0x00;
  break;
 case 128:
  VAR_43[VAR_13] = 0x8c;
  break;
 };

 VAR_43[VAR_14] = 0x00;
 VAR_43[VAR_16] = 0x20;

 switch (VAR_42->id) {
 case 129:
  VAR_43[VAR_17] = 0x33;
  break;
 case 128:
  VAR_43[VAR_17] = 0xb3;
  break;
 };

 VAR_43[VAR_18] = 0x48;
 VAR_43[VAR_19] = 0xb0;

 FUNC_3(VAR_41, 0x00, VAR_40);


 VAR_43[VAR_12] = 0x00;
 FUNC_3(VAR_41, VAR_12, 1);
 VAR_43[VAR_12] = 0x03;
 FUNC_3(VAR_41, VAR_12, 1);
 VAR_43[VAR_12] = 0x43;
 FUNC_3(VAR_41, VAR_12, 1);
 VAR_43[VAR_12] = 0x4c;
 FUNC_3(VAR_41, VAR_12, 1);


 if ((VAR_42->id) == 129) {
  VAR_43[VAR_16] = 0xa0;
  FUNC_3(VAR_41, VAR_16, 1);
  VAR_43[VAR_16] = 0xa7;
  FUNC_3(VAR_41, VAR_16, 1);
  VAR_43[VAR_16] = 0xe7;
  FUNC_3(VAR_41, VAR_16, 1);
  VAR_43[VAR_16] = 0xec;
  FUNC_3(VAR_41, VAR_16, 1);
 }




 VAR_43[VAR_29] = 0x1f;
 VAR_43[VAR_30] = 0x66;
 VAR_43[VAR_31] = 0x81;
 VAR_43[VAR_3] = 0xcc;
 VAR_43[VAR_0] = 0x6c;
 VAR_43[VAR_1] = 0x00;
 VAR_43[VAR_2] = 0x00;
 VAR_43[VAR_36] = 0xcd;
 VAR_43[VAR_33] = 0x77;
 VAR_43[VAR_34] = 0x08;
 VAR_43[VAR_35] = 0x00;

 FUNC_3(VAR_41, VAR_29, 11);

 if ((VAR_42->id) == 128) {

  FUNC_2(VAR_41, VAR_39, 1);
  FUNC_1(1);


  FUNC_2(VAR_41, VAR_39, 0);
 }

 FUNC_1(5);


 FUNC_3(VAR_41, VAR_27, 1);
 FUNC_1(5);

 VAR_43[VAR_31] = 0x85;
 VAR_43[VAR_3] = 0xcb;
 VAR_43[VAR_0] = 0x66;
 VAR_43[VAR_1] = 0x70;

 FUNC_3(VAR_41, VAR_29, 7);
 FUNC_1(5);


 FUNC_3(VAR_41, VAR_28, 1);
 FUNC_1(30);


 VAR_43[VAR_31] = 0x82;
 VAR_43[VAR_3] = 0xa8;
 VAR_43[VAR_1] = 0x00;
 VAR_43[VAR_36] = 0xa9;
 VAR_43[VAR_33] = 0x73;
 VAR_43[VAR_34] = 0x1a;

 FUNC_3(VAR_41, VAR_29, 11);
 FUNC_1(5);


 FUNC_3(VAR_41, VAR_27, 1);
 FUNC_1(5);

 VAR_43[VAR_31] = 0x86;
 VAR_43[VAR_3] = 0xa8;
 VAR_43[VAR_0] = 0x66;
 VAR_43[VAR_1] = 0xa0;

 FUNC_3(VAR_41, VAR_29, 7);
 FUNC_1(5);


 FUNC_3(VAR_41, VAR_28, 1);
 FUNC_1(30);


 VAR_43[VAR_31] = 0x83;
 VAR_43[VAR_3] = 0x98;
 VAR_43[VAR_0] = 0x65;
 VAR_43[VAR_1] = 0x00;
 VAR_43[VAR_36] = 0x99;
 VAR_43[VAR_33] = 0x71;
 VAR_43[VAR_34] = 0xcd;

 FUNC_3(VAR_41, VAR_29, 11);
 FUNC_1(5);


 FUNC_3(VAR_41, VAR_27, 1);
 FUNC_1(5);

 VAR_43[VAR_31] = 0x87;
 VAR_43[VAR_0] = 0x65;
 VAR_43[VAR_1] = 0x50;

 FUNC_3(VAR_41, VAR_29, 7);
 FUNC_1(5);


 FUNC_3(VAR_41, VAR_28, 1);
 FUNC_1(30);


 VAR_43[VAR_30] = 0x64;
 FUNC_3(VAR_41, VAR_30, 1);


 FUNC_3(VAR_41, VAR_27, 1);

 return 0;
}

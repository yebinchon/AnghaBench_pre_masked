
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tuner_go ;
typedef int trl_nom_cfg ;
typedef int tps_given_cfg ;
struct dvb_frontend {int dummy; } ;
typedef int rs_err_cfg ;
typedef int reset ;
typedef int input_freq_cfg ;
typedef int clock_config ;
typedef int capt_range_cfg ;
typedef int agc_cfg ;
typedef int adc_ctl_1_cfg ;
 int FUNC_0 (struct dvb_frontend*,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{

 static u8 VAR_1[] = { 134, 0x38, 0x2c };
 static u8 VAR_2[] = { 132, 0x80 };
 static u8 VAR_3[] = { 137, 0x40 };
 static u8 VAR_4[] = { 136, 0x28, 0xa0 };
 static u8 VAR_5[] = { 133, 0x31, 0xb8 };
 static u8 VAR_6[] = { 131, 0x00, 0x4d };
 static u8 VAR_7[] = { 135, 0x32 };
 static u8 VAR_8[] = { 129, 0x64, 0x00 };
 static u8 VAR_9[] = { 130, 0x40, 0x80, 0x50 };
 static u8 VAR_10[] = { 128, 0x01};

 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
 FUNC_1(200);
 FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_0, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_0, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_0, VAR_5, sizeof(VAR_5));
 FUNC_0(VAR_0, VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_0, VAR_7, sizeof(VAR_7));
 FUNC_0(VAR_0, VAR_8, sizeof(VAR_8));
 FUNC_0(VAR_0, VAR_9, sizeof(VAR_9));
 FUNC_0(VAR_0, VAR_10, sizeof(VAR_10));
 return 0;
}

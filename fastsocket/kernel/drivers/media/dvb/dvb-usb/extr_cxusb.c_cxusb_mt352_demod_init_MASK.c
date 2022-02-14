
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;
typedef int reset ;
typedef int gpp_ctl_cfg ;
typedef int clock_config ;
typedef int capt_range_cfg ;
typedef int agc_cfg ;
typedef int adc_ctl_1_cfg ;
 int FUNC_0 (struct dvb_frontend*,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0)
{
 static u8 VAR_1 [] = { 130, 0x38, 0x29 };
 static u8 VAR_2 [] = { 128, 0x80 };
 static u8 VAR_3 [] = { 133, 0x40 };
 static u8 VAR_4 [] = { 132, 0x24, 0x20 };
 static u8 VAR_5 [] = { 129, 0x33 };
 static u8 VAR_6[] = { 131, 0x32 };

 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
 FUNC_1(200);
 FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_0, VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_0, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_0, VAR_5, sizeof(VAR_5));
 FUNC_0(VAR_0, VAR_6, sizeof(VAR_6));
 return 0;
}

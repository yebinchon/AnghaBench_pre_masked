
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda10048_state {int dummy; } ;
struct dvb_ofdm_parameters {int transmission_mode; int guard_interval; void* code_rate_LP; void* code_rate_HP; int hierarchy_information; int constellation; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct tda10048_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct tda10048_state *VAR_23,
 struct dvb_ofdm_parameters *VAR_24)
{
 u8 VAR_25;


 if (!(FUNC_0(VAR_23, VAR_17) & 0x01))
  return -VAR_0;

 VAR_25 = FUNC_0(VAR_23, VAR_19);
 switch ((VAR_25 & 0x60) >> 5) {
 case 0:
  VAR_24->constellation = VAR_16;
  break;
 case 1:
  VAR_24->constellation = VAR_14;
  break;
 case 2:
  VAR_24->constellation = VAR_15;
  break;
 }
 switch ((VAR_25 & 0x18) >> 3) {
 case 0:
  VAR_24->hierarchy_information = VAR_13;
  break;
 case 1:
  VAR_24->hierarchy_information = VAR_10;
  break;
 case 2:
  VAR_24->hierarchy_information = VAR_11;
  break;
 case 3:
  VAR_24->hierarchy_information = VAR_12;
  break;
 }
 switch (VAR_25 & 0x07) {
 case 0:
  VAR_24->code_rate_HP = VAR_1;
  break;
 case 1:
  VAR_24->code_rate_HP = VAR_2;
  break;
 case 2:
  VAR_24->code_rate_HP = VAR_3;
  break;
 case 3:
  VAR_24->code_rate_HP = VAR_4;
  break;
 case 4:
  VAR_24->code_rate_HP = VAR_5;
  break;
 }

 VAR_25 = FUNC_0(VAR_23, VAR_20);
 switch (VAR_25 & 0x07) {
 case 0:
  VAR_24->code_rate_LP = VAR_1;
  break;
 case 1:
  VAR_24->code_rate_LP = VAR_2;
  break;
 case 2:
  VAR_24->code_rate_LP = VAR_3;
  break;
 case 3:
  VAR_24->code_rate_LP = VAR_4;
  break;
 case 4:
  VAR_24->code_rate_LP = VAR_5;
  break;
 }

 VAR_25 = FUNC_0(VAR_23, VAR_18);
 switch ((VAR_25 & 0x0c) >> 2) {
 case 0:
  VAR_24->guard_interval = VAR_7;
  break;
 case 1:
  VAR_24->guard_interval = VAR_6;
  break;
 case 2:
  VAR_24->guard_interval = VAR_9;
  break;
 case 3:
  VAR_24->guard_interval = VAR_8;
  break;
 }
 switch (VAR_25 & 0x03) {
 case 0:
  VAR_24->transmission_mode = VAR_21;
  break;
 case 1:
  VAR_24->transmission_mode = VAR_22;
  break;
 }

 return 0;
}

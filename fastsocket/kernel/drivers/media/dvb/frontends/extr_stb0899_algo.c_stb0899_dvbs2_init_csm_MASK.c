
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int master_clk; int srate; } ;
struct stb0899_state {struct stb0899_internal internal; } ;
typedef int s32 ;
typedef enum stb0899_modcod { ____Placeholder_stb0899_modcod } stb0899_modcod ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_23 ;
 int FUNC_0 (int ,int ) ;
 int VAR_24 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct stb0899_state*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct stb0899_state *VAR_25, int VAR_26, enum stb0899_modcod VAR_27)
{
 struct stb0899_internal *VAR_28 = &VAR_25->internal;

 s32 VAR_29 = 1, VAR_30 = 0, VAR_31 = 6, VAR_32 = 0, VAR_33 = 0, VAR_34 = 0x80;
 s32 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41, VAR_42, VAR_43;

 if (((VAR_28->master_clk / VAR_28->srate) <= 4) && (VAR_27 <= 11) && (VAR_26 == 1)) {
  switch (VAR_27) {
  case 135:
   VAR_35 = 25;
   VAR_36 = 2700;
   VAR_37 = 12;
   VAR_38 = 180;
   VAR_39 = 8;
   break;
  case 132:
   VAR_35 = 38;
   VAR_36 = 7182;
   VAR_37 = 14;
   VAR_38 = 308;
   VAR_39 = 8;
   break;
  case 134:
   VAR_35 = 42;
   VAR_36 = 9408;
   VAR_37 = 17;
   VAR_38 = 476;
   VAR_39 = 8;
   break;
  case 133:
   VAR_35 = 53;
   VAR_36 = 16642;
   VAR_37 = 19;
   VAR_38 = 646;
   VAR_39 = 8;
   break;
  case 131:
   VAR_35 = 53;
   VAR_36 = 17119;
   VAR_37 = 22;
   VAR_38 = 880;
   VAR_39 = 8;
   break;
  case 130:
   VAR_35 = 55;
   VAR_36 = 19250;
   VAR_37 = 23;
   VAR_38 = 989;
   VAR_39 = 8;
   break;
  case 129:
   VAR_35 = 60;
   VAR_36 = 24240;
   VAR_37 = 24;
   VAR_38 = 1176;
   VAR_39 = 8;
   break;
  case 128:
   VAR_35 = 66;
   VAR_36 = 29634;
   VAR_37 = 24;
   VAR_38 = 1176;
   VAR_39 = 8;
   break;
  default:
   VAR_35 = 66;
   VAR_36 = 29634;
   VAR_37 = 24;
   VAR_38 = 1176;
   VAR_39 = 8;
   break;
  }

  VAR_40 = FUNC_0(VAR_24, VAR_3);
  FUNC_1(VAR_2, VAR_40, 0);
  FUNC_2(VAR_25, VAR_24, VAR_16, VAR_20, VAR_40);

  VAR_40 = FUNC_0(VAR_24, VAR_3);
  VAR_41 = FUNC_0(VAR_24, VAR_4);
  VAR_42 = FUNC_0(VAR_24, VAR_5);
  VAR_43 = FUNC_0(VAR_24, VAR_6);

  FUNC_1(VAR_7, VAR_40, VAR_29);
  FUNC_1(VAR_14, VAR_40, VAR_30);
  FUNC_1(VAR_0, VAR_40, VAR_31);
  FUNC_1(VAR_1, VAR_40, VAR_32);
  FUNC_1(VAR_15, VAR_40, VAR_33);
  FUNC_1(VAR_8, VAR_41, VAR_35);
  FUNC_1(VAR_9, VAR_41, VAR_36);
  FUNC_1(VAR_11, VAR_42, VAR_37);
  FUNC_1(VAR_10, VAR_42, VAR_38);
  FUNC_1(VAR_12, VAR_43, VAR_39);
  FUNC_1(VAR_13, VAR_43, VAR_34);

  FUNC_2(VAR_25, VAR_24, VAR_16, VAR_20, VAR_40);
  FUNC_2(VAR_25, VAR_24, VAR_17, VAR_21, VAR_41);
  FUNC_2(VAR_25, VAR_24, VAR_18, VAR_22, VAR_42);
  FUNC_2(VAR_25, VAR_24, VAR_19, VAR_23, VAR_43);
 }
}

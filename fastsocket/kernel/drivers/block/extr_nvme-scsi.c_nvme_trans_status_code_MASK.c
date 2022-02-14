
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_hdr {int dummy; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct sg_io_hdr*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sg_io_hdr *VAR_33, int VAR_34)
{
 u8 VAR_35, VAR_36, VAR_37, VAR_38;
 int VAR_39 = VAR_32;


 if (VAR_34 < 0)
  return VAR_34;


 VAR_34 &= 0x7FF;

 switch (VAR_34) {

 case 129:
  VAR_35 = VAR_8;
  VAR_36 = VAR_6;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 case 138:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_20;
  VAR_38 = VAR_10;
  break;
 case 142:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_22;
  VAR_38 = VAR_10;
  break;
 case 149:
  VAR_35 = VAR_7;
  VAR_36 = VAR_3;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 case 134:
  VAR_35 = VAR_9;
  VAR_36 = VAR_0;
  VAR_37 = VAR_31;
  VAR_38 = VAR_16;
  break;
 case 143:
  VAR_35 = VAR_7;
  VAR_36 = VAR_1;
  VAR_37 = VAR_21;
  VAR_38 = VAR_10;
  break;
 case 159:
  VAR_35 = VAR_9;
  VAR_36 = VAR_0;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 case 160:
  VAR_35 = VAR_9;
  VAR_36 = VAR_0;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 case 146:
  VAR_35 = VAR_9;
  VAR_36 = VAR_0;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 case 145:
  VAR_35 = VAR_9;
  VAR_36 = VAR_0;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 case 139:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_17;
  VAR_38 = VAR_12;
  break;
 case 136:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_19;
  VAR_38 = VAR_10;
  break;
 case 154:
  VAR_35 = VAR_7;
  VAR_36 = VAR_3;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 case 135:
  VAR_35 = VAR_7;
  VAR_36 = VAR_5;
  VAR_37 = VAR_26;
  VAR_38 = VAR_10;
  break;


 case 141:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_18;
  VAR_38 = VAR_11;
  break;
 case 155:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_22;
  VAR_38 = VAR_10;
  break;


 case 128:
  VAR_35 = VAR_7;
  VAR_36 = VAR_3;
  VAR_37 = VAR_29;
  VAR_38 = VAR_10;
  break;
 case 131:
  VAR_35 = VAR_7;
  VAR_36 = VAR_3;
  VAR_37 = VAR_30;
  VAR_38 = VAR_10;
  break;
 case 144:
  VAR_35 = VAR_7;
  VAR_36 = VAR_3;
  VAR_37 = VAR_24;
  VAR_38 = VAR_14;
  break;
 case 157:
  VAR_35 = VAR_7;
  VAR_36 = VAR_3;
  VAR_37 = VAR_23;
  VAR_38 = VAR_13;
  break;
 case 130:
  VAR_35 = VAR_7;
  VAR_36 = VAR_3;
  VAR_37 = VAR_25;
  VAR_38 = VAR_15;
  break;
 case 151:
  VAR_35 = VAR_7;
  VAR_36 = VAR_4;
  VAR_37 = VAR_27;
  VAR_38 = VAR_10;
  break;
 case 158:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_17;
  VAR_38 = VAR_12;
  break;


 case 153:
 case 152:
 case 150:
 case 133:
 case 132:
 case 162:
 case 161:
 case 156:
 case 147:
 case 148:
 case 137:
 case 140:
 default:
  VAR_35 = VAR_7;
  VAR_36 = VAR_2;
  VAR_37 = VAR_28;
  VAR_38 = VAR_10;
  break;
 }

 VAR_39 = FUNC_0(VAR_33, VAR_35, VAR_36, VAR_37, VAR_38);

 return VAR_39;
}

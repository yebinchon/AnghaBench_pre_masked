
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct t4_cqe {int dummy; } ;


 int FUNC_0 (struct t4_cqe*) ;
 int FUNC_1 (struct t4_cqe*) ;
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
 int FUNC_2 (struct t4_cqe*) ;
__attribute__((used)) static inline void FUNC_3(struct t4_cqe *VAR_32, u8 *VAR_33,
        u8 *VAR_34)
{
 int VAR_35;
 int VAR_36;
 int VAR_37;
 int VAR_38;
 int VAR_39;

 if (!VAR_32) {
  *VAR_33 = VAR_18|VAR_9;
  *VAR_34 = 0;
  return;
 }

 VAR_35 = FUNC_1(VAR_32);
 VAR_37 = FUNC_0(VAR_32);
 VAR_38 = FUNC_2(VAR_32);
 VAR_39 = (VAR_37 == VAR_14) ||
     (VAR_37 == VAR_15);
 VAR_36 = (VAR_37 == VAR_12) ||
   (VAR_38 && (VAR_37 == VAR_13));

 switch (VAR_35) {
 case 130:
  if (VAR_39) {
   *VAR_33 = VAR_18|VAR_28;
   *VAR_34 = VAR_23;
  } else {
   *VAR_33 = VAR_18|VAR_29;
   *VAR_34 = VAR_25;
  }
  break;
 case 134:
  *VAR_33 = VAR_18|VAR_29;
  if ((VAR_37 == VAR_14) ||
      (VAR_37 == VAR_15))
   *VAR_34 = VAR_23;
  else
   *VAR_34 = VAR_30;
  break;
 case 132:
  *VAR_33 = VAR_18|VAR_29;
  *VAR_34 = VAR_30;
  break;
 case 153:
  *VAR_33 = VAR_18|VAR_29;
  *VAR_34 = VAR_21;
  break;
 case 128:
  *VAR_33 = VAR_18|VAR_29;
  *VAR_34 = VAR_31;
  break;
 case 152:
  if (VAR_36) {
   *VAR_33 = VAR_16|VAR_10;
   *VAR_34 = VAR_0;
  } else {
   *VAR_33 = VAR_18|VAR_29;
   *VAR_34 = VAR_22;
  }
  break;
 case 144:
 case 145:
  *VAR_33 = VAR_18|VAR_28;
  *VAR_34 = VAR_23;
  break;
 case 148:
 case 147:
 case 146:
  *VAR_33 = VAR_18|VAR_27;
  *VAR_34 = 0;
  break;
 case 136:
  *VAR_33 = VAR_16|VAR_11;
  *VAR_34 = VAR_3;
  break;
 case 135:
  *VAR_33 = VAR_16|VAR_10;
  *VAR_34 = VAR_0;
  break;
 case 151:
  *VAR_33 = VAR_17|VAR_8;
  *VAR_34 = VAR_19;
  break;
 case 142:
  *VAR_33 = VAR_17|VAR_8;
  *VAR_34 = VAR_20;
  break;
 case 133:
  *VAR_33 = VAR_16|VAR_11;
  *VAR_34 = VAR_7;
  break;
 case 149:
  if (VAR_36) {
   *VAR_33 = VAR_16|VAR_10;
   *VAR_34 = VAR_1;
  } else {
   *VAR_33 = VAR_16|VAR_11;
   *VAR_34 = VAR_6;
  }
  break;
 case 131:
  *VAR_33 = VAR_18|VAR_28;
  *VAR_34 = VAR_26;
  break;
 case 137:
  *VAR_33 = VAR_18|VAR_28;
  *VAR_34 = VAR_24;
  break;
 case 150:
  *VAR_33 = VAR_16|VAR_11;
  *VAR_34 = VAR_5;
  break;
 case 140:
 case 139:
 case 138:
 case 143:
  *VAR_33 = VAR_16|VAR_11;
  *VAR_34 = VAR_4;
  break;
 case 129:
  *VAR_33 = VAR_16|VAR_9;
  *VAR_34 = 0;
  break;
 case 141:
  *VAR_33 = VAR_16|VAR_11;
  *VAR_34 = VAR_2;
  break;
 default:
  *VAR_33 = VAR_18|VAR_9;
  *VAR_34 = 0;
  break;
 }
}

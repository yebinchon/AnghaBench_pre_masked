
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nes_terminate_hdr {int layer_etype; void* error_code; int hdrct; } ;
struct TYPE_2__ {int* q2_vbase; } ;
struct nes_qp {int term_sq_flush_code; int term_rq_flush_code; TYPE_1__ hwqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
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
 void* VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 void* VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nes_qp*,int) ;
 int* FUNC_2 (int*,int) ;
 int FUNC_3 (struct nes_terminate_hdr*,int*,int) ;
 int FUNC_4 (struct nes_terminate_hdr*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct nes_qp *VAR_52, u16 VAR_53, u32 VAR_54)
{
 u8 *VAR_55 = VAR_52->hwqp.q2_vbase + VAR_0;
 u16 VAR_56;
 int VAR_57 = 0;
 u8 VAR_58 = 0;
 u8 VAR_59 = 0;
 struct nes_terminate_hdr *VAR_60;

 VAR_60 = (struct nes_terminate_hdr *)VAR_52->hwqp.q2_vbase;
 FUNC_4(VAR_60, 0, 64);

 if (VAR_54 & VAR_33) {


  VAR_55 = FUNC_2(VAR_55, VAR_54);
  VAR_56 = FUNC_0(*(u16 *)VAR_55);
  if (VAR_56) {
   VAR_57 = 2;
   VAR_60->hdrct = VAR_4;
   if (VAR_55[2] & 0x80) {
    VAR_58 = 1;
    if (VAR_56 >= VAR_49) {
     VAR_57 += VAR_49;
     VAR_60->hdrct |= VAR_3;
    }
   } else {
    if (VAR_56 >= VAR_50) {
     VAR_57 += VAR_50;
     VAR_60->hdrct |= VAR_3;
    }

    if (VAR_56 >= (VAR_50 + VAR_51)) {
     if ((VAR_55[3] & VAR_47) == VAR_48) {
      VAR_57 += VAR_51;
      VAR_60->hdrct |= VAR_46;
     }
    }
   }
  }
 }

 switch (VAR_53) {
 case 144:
  switch (FUNC_1(VAR_52, VAR_54)) {
  case 154:
   VAR_59 = VAR_21;
   VAR_60->layer_etype = (VAR_25 << 4) | VAR_7;
   VAR_60->error_code = VAR_9;
   break;
  default:
   VAR_59 = VAR_23;
   VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
   VAR_60->error_code = VAR_39;
  }
  break;
 case 147:
  VAR_59 = VAR_23;
  VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
  VAR_60->error_code = VAR_39;
  break;
 case 152:
  VAR_59 = VAR_22;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_11;
  VAR_60->error_code = VAR_16;
  break;
 case 150:
 case 151:
  switch (FUNC_1(VAR_52, VAR_54)) {
  case 156:
  case 155:
   VAR_59 = VAR_24;
   VAR_60->layer_etype = (VAR_27 << 4) | VAR_40;
   VAR_60->error_code = VAR_36;
   break;
  default:
   VAR_59 = VAR_23;
   VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
   VAR_60->error_code = VAR_39;
  }
  break;
 case 149:
  if (VAR_54 & (VAR_31 | VAR_32)) {
   VAR_59 = VAR_21;
   VAR_60->layer_etype = (VAR_25 << 4) | VAR_7;
   VAR_60->error_code = VAR_6;
  } else {
   VAR_59 = VAR_23;
   VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
   VAR_60->error_code = VAR_37;
  }
  break;
 case 146:
 case 148:
 case 130:
  VAR_59 = VAR_23;
  VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
  VAR_60->error_code = VAR_35;
  break;
 case 145:
  VAR_59 = VAR_23;
  VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
  VAR_60->error_code = VAR_42;
  break;
 case 153:
  switch (FUNC_1(VAR_52, VAR_54)) {
  case 154:
   VAR_59 = VAR_21;
   VAR_60->layer_etype = (VAR_25 << 4) | VAR_7;
   VAR_60->error_code = VAR_10;
   break;
  case 156:
  case 155:
   VAR_59 = VAR_23;
   VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
   VAR_60->error_code = VAR_36;
   break;
  default:
   VAR_59 = VAR_23;
   VAR_60->layer_etype = (VAR_27 << 4) | VAR_41;
   VAR_60->error_code = VAR_43;
  }
  break;
 case 134:
  VAR_59 = VAR_20;
  VAR_60->layer_etype = (VAR_26 << 4) | VAR_5;
  VAR_60->error_code = VAR_29;
  break;
 case 133:
  VAR_59 = VAR_19;
  VAR_60->layer_etype = (VAR_26 << 4) | VAR_5;
  VAR_60->error_code = VAR_28;
  break;
 case 132:
 case 131:
  VAR_59 = VAR_20;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_1;
  VAR_60->error_code = VAR_2;
  break;
 case 141:
 case 140:
  VAR_59 = VAR_18;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_1;
  VAR_60->error_code = VAR_2;
  break;
 case 143:
 case 142:
  VAR_59 = VAR_19;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_11;
  VAR_60->error_code = VAR_15;
  break;
 case 139:
  VAR_59 = VAR_20;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_11;
  VAR_60->error_code = VAR_17;
  break;
 case 138:
  VAR_59 = VAR_19;
  if (VAR_58) {
   VAR_60->layer_etype = (VAR_25 << 4) | VAR_7;
   VAR_60->error_code = VAR_8;
  } else {
   VAR_60->layer_etype = (VAR_25 << 4) | VAR_11;
   VAR_60->error_code = VAR_12;
  }
  break;
 case 137:
  VAR_59 = VAR_19;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_11;
  VAR_60->error_code = VAR_13;
  break;
 case 136:
  VAR_59 = VAR_24;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_11;
  VAR_60->error_code = VAR_14;
  break;
 case 135:
  VAR_59 = VAR_19;
  VAR_60->layer_etype = (VAR_25 << 4) | VAR_11;
  VAR_60->error_code = VAR_16;
  break;
 case 129:
  VAR_59 = VAR_19;
  VAR_60->layer_etype = (VAR_27 << 4) | VAR_40;
  VAR_60->error_code = VAR_38;
  break;
 case 128:
  VAR_59 = VAR_22;
  VAR_60->layer_etype = (VAR_27 << 4) | VAR_40;
  VAR_60->error_code = VAR_44;
  break;
 default:
  VAR_59 = VAR_18;
  VAR_60->layer_etype = (VAR_27 << 4) | VAR_40;
  VAR_60->error_code = VAR_45;
  break;
 }

 if (VAR_57)
  FUNC_3(VAR_60 + 1, VAR_55, VAR_57);

 if ((VAR_59) && ((VAR_30 & VAR_54) == 0)) {
  if (VAR_54 & VAR_34)
   VAR_52->term_sq_flush_code = VAR_59;
  else
   VAR_52->term_rq_flush_code = VAR_59;
 }

 return sizeof(struct nes_terminate_hdr) + VAR_57;
}

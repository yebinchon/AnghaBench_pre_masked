
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_91__ TYPE_76__ ;
typedef struct TYPE_90__ TYPE_75__ ;
typedef struct TYPE_89__ TYPE_1__ ;


struct pt_regs {int * regs; } ;
struct mips_fpu_struct {unsigned int fcr31; int * fpr; } ;
typedef void* s64 ;
typedef int mips_instruction ;
struct TYPE_89__ {int bits; } ;
typedef TYPE_1__ ieee754sp ;
typedef TYPE_1__ ieee754dp ;
struct TYPE_91__ {int cp1ops; } ;
struct TYPE_90__ {unsigned int rm; } ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (TYPE_1__,size_t) ;
 int FUNC_2 (TYPE_1__,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_1__,size_t) ;
 int FUNC_10 (TYPE_1__,int) ;
 int * VAR_20 ;





 int VAR_21 ;
 TYPE_1__ FUNC_11 (TYPE_1__) ;
 TYPE_1__ FUNC_12 (TYPE_1__) ;
 TYPE_1__ FUNC_13 (TYPE_1__) ;
 TYPE_1__ FUNC_14 (TYPE_1__) ;
 unsigned int* VAR_22 ;
 TYPE_76__ VAR_23 ;
 TYPE_75__ VAR_24 ;
 int FUNC_15 (int ) ;
 TYPE_1__ FUNC_16 (TYPE_1__) ;
 TYPE_1__ FUNC_17 (TYPE_1__,TYPE_1__) ;
 int FUNC_18 (TYPE_1__,TYPE_1__,int ,unsigned int) ;
 TYPE_1__ FUNC_19 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_20 (int ) ;
 TYPE_1__ FUNC_21 (int ) ;
 TYPE_1__ FUNC_22 (TYPE_1__) ;
 TYPE_1__ FUNC_23 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_24 (TYPE_1__) ;
 TYPE_1__ FUNC_25 (TYPE_1__) ;
 TYPE_1__ FUNC_26 (TYPE_1__,TYPE_1__) ;
 void* FUNC_27 (TYPE_1__) ;
 void* FUNC_28 (TYPE_1__) ;
 TYPE_1__ FUNC_29 (TYPE_1__) ;
 TYPE_1__ FUNC_30 (TYPE_1__,TYPE_1__) ;
 int FUNC_31 (TYPE_1__,TYPE_1__,int ,unsigned int) ;
 TYPE_1__ FUNC_32 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_33 (TYPE_1__) ;
 TYPE_1__ FUNC_34 (int ) ;
 TYPE_1__ FUNC_35 (int ) ;
 TYPE_1__ FUNC_36 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_37 (TYPE_1__) ;
 TYPE_1__ FUNC_38 (TYPE_1__) ;
 TYPE_1__ FUNC_39 (TYPE_1__,TYPE_1__) ;
 void* FUNC_40 (TYPE_1__) ;
 void* FUNC_41 (TYPE_1__) ;
 void** VAR_25 ;


 TYPE_1__ FUNC_42 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_43 (TYPE_1__) ;
 TYPE_1__ FUNC_44 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_45 (TYPE_1__) ;


__attribute__((used)) static int FUNC_46(struct pt_regs *VAR_26, struct mips_fpu_struct *VAR_27,
 mips_instruction VAR_28)
{
 int VAR_29;
 unsigned VAR_30 = 0;
 unsigned VAR_31;
 union {
  ieee754dp d;
  ieee754sp s;
  int w;



 } VAR_32;

 VAR_23.cp1ops++;
 switch (VAR_29 = (FUNC_4(VAR_28) & 0xf)) {
 case 129:{
  union {
   ieee754sp(*b) (ieee754sp, ieee754sp);
   ieee754sp(*u) (ieee754sp);
  } VAR_33;

  switch (FUNC_7(VAR_28)) {

  case 154:
   VAR_33.b = FUNC_30;
   goto scopbop;
  case 133:
   VAR_33.b = FUNC_39;
   goto scopbop;
  case 140:
   VAR_33.b = FUNC_36;
   goto scopbop;
  case 147:
   VAR_33.b = FUNC_32;
   goto scopbop;
  case 155:
   VAR_33.u = FUNC_29;
   goto scopuop;
  case 139:
   VAR_33.u = FUNC_37;
   goto scopuop;
  case 144:

   FUNC_9(VAR_32.s, FUNC_5(VAR_28));
   goto copcsr;


        scopbop:
   {
    ieee754sp VAR_34, VAR_35;

    FUNC_9(VAR_34, FUNC_5(VAR_28));
    FUNC_9(VAR_35, FUNC_6(VAR_28));

    VAR_32.s = (*VAR_33.b) (VAR_34, VAR_35);
    goto copcsr;
   }
        scopuop:
   {
    ieee754sp VAR_36;

    FUNC_9(VAR_36, FUNC_5(VAR_28));
    VAR_32.s = (*VAR_33.u) (VAR_36);
    goto copcsr;
   }
        copcsr:
   if (FUNC_15(VAR_13))
    VAR_30 |= VAR_6 | VAR_5;
   if (FUNC_15(VAR_16))
    VAR_30 |= VAR_12 | VAR_11;
   if (FUNC_15(VAR_15))
    VAR_30 |= VAR_10 | VAR_9;
   if (FUNC_15(VAR_17))
    VAR_30 |= VAR_4 | VAR_3;
   if (FUNC_15(VAR_14))
    VAR_30 |= VAR_8 | VAR_7;
   break;


  case 149:
   return VAR_19;
  case 151:{
   ieee754sp VAR_37;

   FUNC_9(VAR_37, FUNC_5(VAR_28));
   VAR_32.d = FUNC_22(VAR_37);
   VAR_29 = 156;
   goto copcsr;
  }
  case 148:{
   ieee754sp VAR_38;

   FUNC_9(VAR_38, FUNC_5(VAR_28));
   VAR_32.w = FUNC_40(VAR_38);
   VAR_29 = 128;
   goto copcsr;
  }
  default:
   if (FUNC_7(VAR_28) >= VAR_21) {
    unsigned VAR_39 = FUNC_7(VAR_28) - VAR_21;
    ieee754sp VAR_40, VAR_41;

    FUNC_9(VAR_40, FUNC_5(VAR_28));
    FUNC_9(VAR_41, FUNC_6(VAR_28));
    VAR_32.w = FUNC_31(VAR_40, VAR_41,
     VAR_20[VAR_39 & 0x7], VAR_39 & 0x8);
    VAR_29 = -1;
    if ((VAR_39 & 0x8) && FUNC_15
     (VAR_14))
     VAR_30 = VAR_8 | VAR_7;
    else
     goto copcsr;

   }
   else {
    return VAR_19;
   }
   break;
  }
  break;
 }

 case 156:{
  union {
   ieee754dp(*b) (ieee754dp, ieee754dp);
   ieee754dp(*u) (ieee754dp);
  } VAR_42;

  switch (FUNC_7(VAR_28)) {

  case 154:
   VAR_42.b = FUNC_17;
   goto dcopbop;
  case 133:
   VAR_42.b = FUNC_26;
   goto dcopbop;
  case 140:
   VAR_42.b = FUNC_23;
   goto dcopbop;
  case 147:
   VAR_42.b = FUNC_19;
   goto dcopbop;
  case 155:
   VAR_42.u = FUNC_16;
   goto dcopuop;

  case 139:
   VAR_42.u = FUNC_24;
   goto dcopuop;

  case 144:

   FUNC_1(VAR_32.d, FUNC_5(VAR_28));
   goto copcsr;


        dcopbop:{
    ieee754dp VAR_43, VAR_44;

    FUNC_1(VAR_43, FUNC_5(VAR_28));
    FUNC_1(VAR_44, FUNC_6(VAR_28));

    VAR_32.d = (*VAR_42.b) (VAR_43, VAR_44);
    goto copcsr;
   }
        dcopuop:{
    ieee754dp VAR_45;

    FUNC_1(VAR_45, FUNC_5(VAR_28));
    VAR_32.d = (*VAR_42.u) (VAR_45);
    goto copcsr;
   }


  case 149:{
   ieee754dp VAR_46;

   FUNC_1(VAR_46, FUNC_5(VAR_28));
   VAR_32.s = FUNC_33(VAR_46);
   VAR_29 = 129;
   goto copcsr;
  }
  case 151:
   return VAR_19;

  case 148:{
   ieee754dp VAR_47;

   FUNC_1(VAR_47, FUNC_5(VAR_28));
   VAR_32.w = FUNC_27(VAR_47);
   VAR_29 = 128;
   goto copcsr;
  }
  default:
   if (FUNC_7(VAR_28) >= VAR_21) {
    unsigned VAR_48 = FUNC_7(VAR_28) - VAR_21;
    ieee754dp VAR_49, VAR_50;

    FUNC_1(VAR_49, FUNC_5(VAR_28));
    FUNC_1(VAR_50, FUNC_6(VAR_28));
    VAR_32.w = FUNC_18(VAR_49, VAR_50,
     VAR_20[VAR_48 & 0x7], VAR_48 & 0x8);
    VAR_29 = -1;
    if ((VAR_48 & 0x8)
     &&
     FUNC_15
     (VAR_14))
     VAR_30 = VAR_8 | VAR_7;
    else
     goto copcsr;

   }
   else {
    return VAR_19;
   }
   break;
  }
  break;
 }

 case 128:{
  ieee754sp VAR_51;

  switch (FUNC_7(VAR_28)) {
  case 149:

   FUNC_9(VAR_51, FUNC_5(VAR_28));
   VAR_32.s = FUNC_34(VAR_51.bits);
   VAR_29 = 129;
   goto copcsr;
  case 151:

   FUNC_9(VAR_51, FUNC_5(VAR_28));
   VAR_32.d = FUNC_20(VAR_51.bits);
   VAR_29 = 156;
   goto copcsr;
  default:
   return VAR_19;
  }
  break;
 }
 default:
  return VAR_19;
 }
 VAR_27->fcr31 = (VAR_27->fcr31 & ~VAR_1) | VAR_30;
 if ((VAR_27->fcr31 >> 5) & VAR_27->fcr31 & VAR_0) {

  return VAR_18;
 }




 switch (VAR_29) {
 case -1:{



  VAR_31 = VAR_2;

  if (VAR_32.w)
   VAR_27->fcr31 |= VAR_31;
  else
   VAR_27->fcr31 &= ~VAR_31;
  break;
 }
 case 156:
  FUNC_2(VAR_32.d, FUNC_3(VAR_28));
  break;
 case 129:
  FUNC_10(VAR_32.s, FUNC_3(VAR_28));
  break;
 case 128:
  FUNC_8(VAR_32.w, FUNC_3(VAR_28));
  break;





 default:
  return VAR_19;
 }

 return 0;
}

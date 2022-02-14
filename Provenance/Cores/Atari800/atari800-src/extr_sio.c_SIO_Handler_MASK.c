
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* UWORD ;
typedef size_t UBYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,int ) ;
 int VAR_13 ;
 size_t FUNC_10 (size_t,int ) ;
 size_t FUNC_11 (size_t,int ,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t FUNC_12 (size_t,int,int ) ;
 size_t FUNC_13 (size_t,int ) ;
 int FUNC_14 (size_t,int,int*,int *) ;
 size_t FUNC_15 (size_t,int,int ) ;
 size_t FUNC_16 (size_t,int ) ;
 scalar_t__* VAR_18 ;
 int* VAR_19 ;
 int* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

void FUNC_17(void)
{
 int VAR_26 = FUNC_7(0x30a);
 UBYTE VAR_27 = (FUNC_6(0x300) + FUNC_6(0x301) + 0xff ) - 0x31;
 UBYTE VAR_28 = 0x00;
 UWORD VAR_29 = FUNC_7(0x304);
 int VAR_30 = FUNC_7(0x308);
 int VAR_31 = 0;
 int VAR_32 = FUNC_6(0x302);

 if ((unsigned int)FUNC_6(0x300) + (unsigned int)FUNC_6(0x301) > 0xff) {

  VAR_27++;
 }




 if (FUNC_6(0x300) != 0x60 && VAR_27 < VAR_16 && (VAR_18[VAR_27] != VAR_17 || VAR_1)) {






  switch (VAR_32) {
  case 0x4e:
   if (12 == VAR_30) {
    VAR_28 = FUNC_13(VAR_27, VAR_8);
    if (VAR_28 == 'C')
     FUNC_5(VAR_8, VAR_29, 12);
   }
   else
    VAR_28 = 'E';
   break;
  case 0x4f:
   if (12 == VAR_30) {
    FUNC_4(VAR_29, VAR_8, 12);
    VAR_28 = FUNC_16(VAR_27, VAR_8);
   }
   else
    VAR_28 = 'E';
   break;
  case 0x50:
  case 0x57:
  case 0xD0:
  case 0xD7:
   FUNC_14(VAR_27, VAR_26, &VAR_31, ((void*)0));
   if (VAR_31 == VAR_30) {
    FUNC_4(VAR_29, VAR_8, VAR_31);
    VAR_28 = FUNC_15(VAR_27, VAR_26, VAR_8);
   }
   else
    VAR_28 = 'E';
   break;
  case 0x52:
  case 0xD2:

   if (VAR_26 == 1) {
    if (VAR_24 > 0) {
     if (VAR_25 != VAR_0) {
      VAR_25 = VAR_0;
      VAR_24--;
     }
     VAR_6 = 0xe459;
     return;
    }
    VAR_24 = VAR_13;
   }
   else {
    VAR_24 = 0;
   }

   FUNC_14(VAR_27, VAR_26, &VAR_31, ((void*)0));
   if (VAR_31 == VAR_30) {
    VAR_28 = FUNC_12(VAR_27, VAR_26, VAR_8);
    if (VAR_28 == 'C')
     FUNC_5(VAR_8, VAR_29, VAR_31);
   }
   else
    VAR_28 = 'E';
   break;
  case 0x53:
   if (4 == VAR_30) {
    VAR_28 = FUNC_10(VAR_27, VAR_8);
    if (VAR_28 == 'C') {
     FUNC_5(VAR_8, VAR_29, 4);
    }
   }
   else
    VAR_28 = 'E';
   break;

  case 0x21:
  case 0xA1:
   VAR_31 = VAR_20[VAR_27];
   if (VAR_31 == VAR_30) {
    VAR_28 = FUNC_11(VAR_27, VAR_8, VAR_31, VAR_19[VAR_27]);
    if (VAR_28 == 'C')
     FUNC_5(VAR_8, VAR_29, VAR_31);
   }
   else {

    FUNC_11(VAR_27, VAR_8, VAR_31, VAR_19[VAR_27]);
    VAR_28 = 'E';
   }
   break;
  case 0x22:
  case 0xA2:
   VAR_31 = 128;
   if (VAR_31 == VAR_30) {
    VAR_28 = FUNC_11(VAR_27, VAR_8, 128, 1040);
    if (VAR_28 == 'C')
     FUNC_5(VAR_8, VAR_29, VAR_31);
   }
   else {
    FUNC_11(VAR_27, VAR_8, 128, 1040);
    VAR_28 = 'E';
   }
   break;
  default:
   VAR_28 = 'N';
  }
 }

 else if (FUNC_6(0x300) == 0x60) {
  UBYTE VAR_33 = FUNC_6(0x30b);
  switch (VAR_32){
  case 0x52:
   VAR_22 = VAR_14;
   VAR_21 = 0x61;
   VAR_23 = 0x10;

   FUNC_0(VAR_33 == 0 ? 2000 : 160);

   if (FUNC_1(VAR_29, VAR_30))
    VAR_28 = 'C';
   else
    VAR_28 = 'E';
   break;
  case 0x57:
   VAR_22 = VAR_15;
   VAR_21 = 0x61;
   VAR_23 = 0x10;

   FUNC_0(VAR_33 == 0 ? 3000 : 260);

   if (FUNC_2(VAR_29, VAR_30))
    VAR_28 = 'C';
   else
    VAR_28 = 'E';
   break;
  default:
   VAR_28 = 'N';
  }
 }

 switch (VAR_28) {
 case 0x00:
  VAR_7 = 138;
  VAR_4;
  break;
 case 'A':
 case 'C':
  VAR_7 = 1;
  VAR_2;
  break;
 case 'N':
  VAR_7 = 144;
  VAR_4;
  break;
 case 'E':
 default:
  VAR_7 = 146;
  VAR_4;
  break;
 }
 VAR_5 = 0;
 FUNC_8(0x0303, VAR_7);
 FUNC_8(0x42,0);
 VAR_3;
 FUNC_9(VAR_9, 0);
 FUNC_9(VAR_10, 0);
 FUNC_9(VAR_11, 0);
 FUNC_9(VAR_12, 0);
}

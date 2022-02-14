
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int const,int,int,int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int const VAR_25 ;





 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_31 ;
 int FUNC_9 (char*,int,...) ;

void FUNC_10(UWORD VAR_32, UBYTE VAR_33)
{



 VAR_32 &= 0x0f;

 switch (VAR_32) {
 case 142:
  VAR_4[VAR_10] = VAR_33;
  FUNC_2(142, VAR_33, 0, VAR_30);
  break;
 case 141:
  VAR_4[VAR_11] = VAR_33;
  FUNC_2(141, VAR_33, 0, VAR_30);
  break;
 case 140:
  VAR_4[VAR_12] = VAR_33;
  FUNC_2(140, VAR_33, 0, VAR_30);
  break;
 case 139:
  VAR_4[VAR_13] = VAR_33;
  FUNC_2(139, VAR_33, 0, VAR_30);
  break;
 case 138:
  VAR_5[0] = VAR_33;


  if (VAR_33 & VAR_15)
   VAR_7[0] = VAR_19;
  else
   VAR_7[0] = VAR_20;

  FUNC_6((1 << VAR_10) | (1 << VAR_11) | (1 << VAR_12) | (1 << VAR_13));
  FUNC_2(138, VAR_33, 0, VAR_30);
  break;
 case 137:
  VAR_6[VAR_10] = VAR_33;
  FUNC_6((VAR_5[0] & VAR_8) ? ((1 << VAR_11) | (1 << VAR_10)) : (1 << VAR_10));
  FUNC_2(137, VAR_33, 0, VAR_30);
  break;
 case 136:
  VAR_6[VAR_11] = VAR_33;
  FUNC_6(1 << VAR_11);
  FUNC_2(136, VAR_33, 0, VAR_30);
  break;
 case 135:
  VAR_6[VAR_12] = VAR_33;
  FUNC_6((VAR_5[0] & VAR_9) ? ((1 << VAR_13) | (1 << VAR_12)) : (1 << VAR_12));
  FUNC_2(135, VAR_33, 0, VAR_30);
  break;
 case 134:
  VAR_6[VAR_13] = VAR_33;
  FUNC_6(1 << VAR_13);
  FUNC_2(134, VAR_33, 0, VAR_30);
  break;
 case 133:
  VAR_23 = VAR_33;



  VAR_24 |= ~VAR_33 & 0xf7;
  if ((~VAR_24 & VAR_23) == 0 && VAR_1 == 0)
   VAR_0 = 0;
  else
   FUNC_1();
  break;
 case 129:
  VAR_27 |= 0xe0;
  break;
 case 132:
  if (!(VAR_26 & 4))
   VAR_31 = 0;
  break;
 case 131:



  if ((VAR_26 & 0x70) == 0x20 && FUNC_4())
   FUNC_5(VAR_33);

  if ((VAR_26 & 0x08) == 0x00) {

   VAR_17 = VAR_28;
   VAR_24 |= 0x08;
   VAR_18 = VAR_29;
  }
  else {



                        VAR_17 = 312*50*10*(VAR_6[VAR_12] + VAR_6[VAR_13]*0x100)/895000;

   if (VAR_17 >= 3) {
                         VAR_24 |= 0x08;
                         VAR_18 = 2*VAR_17 - 2;
   }
   else {
    VAR_17 = 0;
    VAR_18 = 0;
   }
  };



  break;
 case 128:
  VAR_21[VAR_10] = VAR_22[VAR_10];
  VAR_21[VAR_11] = VAR_22[VAR_11];
  VAR_21[VAR_13] = VAR_22[VAR_13];
  FUNC_2(128, VAR_33, 0, VAR_30);



  break;
 case 130:



  VAR_26 = VAR_33;
  FUNC_2(130, VAR_33, 0, VAR_30);
  if (VAR_33 & 4)
   VAR_31 = 228;
  if ((VAR_33 & 0x03) == 0) {


   VAR_16 = 0;
   VAR_17 = 0;
   VAR_18 = 0;
   FUNC_0();

  }
  break;
 }
}

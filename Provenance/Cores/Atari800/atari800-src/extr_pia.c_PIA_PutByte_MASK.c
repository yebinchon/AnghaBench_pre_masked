
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;

void FUNC_5(UWORD VAR_9, UBYTE VAR_10)
{
 switch (VAR_9 & 0x03) {
 case 131:


  FUNC_3(VAR_10 & 0x08 ? 0 : 1);

  VAR_2 = VAR_10;
  break;
 case 130:

  if ((VAR_3 ^ VAR_10) & 0x08) {

   FUNC_2(VAR_10 & 0x08 ? 0 : 1);
  }
  VAR_3 = VAR_10;
  break;
 case 129:
  if ((VAR_2 & 0x04) == 0) {

    VAR_5 = ~VAR_10;
  }
  else {






   VAR_4 = VAR_10;
  }

  FUNC_0((VAR_4 | VAR_5) >> 4);

  break;
 case 128:
  if (VAR_1 == VAR_0) {
   if ((VAR_3 & 0x04) == 0) {

    FUNC_1((UBYTE) (VAR_6 | ~VAR_10), (UBYTE) (VAR_6 | VAR_7));
    VAR_7 = ~VAR_10;
   }
   else {

    FUNC_1((UBYTE) (VAR_10 | VAR_7), (UBYTE) (VAR_6 | VAR_7));
    VAR_6 = VAR_10;
   }
  }
  else {
   if ((VAR_3 & 0x04) == 0) {

    VAR_7 = ~VAR_10;
   }
   else {

    VAR_6 = VAR_10;
   }
  }
  break;
 }
}

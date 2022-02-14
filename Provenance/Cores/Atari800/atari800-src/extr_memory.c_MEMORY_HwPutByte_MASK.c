
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;

void FUNC_12(UWORD VAR_2, UBYTE VAR_3)
{
 switch (VAR_2 & 0xff00) {
 case 0x4f00:
 case 0x8f00:
  FUNC_2(VAR_2);
  break;
 case 0x5f00:
 case 0x9f00:
  FUNC_3(VAR_2);
  break;
 case 0xd000:
 case 0xc000:
 case 0xc100:
 case 0xc200:
 case 0xc300:
 case 0xc400:
 case 0xc500:
 case 0xc600:
 case 0xc700:
 case 0xc800:
 case 0xc900:
 case 0xca00:
 case 0xcb00:
 case 0xcc00:
 case 0xcd00:
 case 0xce00:
  FUNC_5(VAR_2, VAR_3);
  break;
 case 0xd200:
 case 0xe800:
 case 0xe900:
 case 0xea00:
 case 0xeb00:
 case 0xec00:
 case 0xed00:
 case 0xee00:
 case 0xef00:
  FUNC_11(VAR_2, VAR_3);
  break;
 case 0xd300:
  FUNC_10(VAR_2, VAR_3);
  break;
 case 0xd400:
  FUNC_0(VAR_2, VAR_3);
  break;
 case 0xd500:
  FUNC_4(VAR_2, VAR_3);
  break;
 case 0xff00:
  FUNC_6(VAR_2,VAR_3);
  break;
 case 0xcf00:
 case 0x0f00:
  if (VAR_1 == VAR_0) {
   FUNC_5(VAR_2, VAR_3);
  }
  else {
   FUNC_1(VAR_2,VAR_3);
  }
  break;
 case 0xd100:
  FUNC_7(VAR_2, VAR_3);
  break;
 case 0xd600:
  FUNC_8(VAR_2, VAR_3);
  break;
 case 0xd700:
  FUNC_9(VAR_2, VAR_3);
  break;
 default:
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int,int,int) ;
 short VAR_3 ;

__attribute__((used)) static void FUNC_1(short VAR_4)
{
 int VAR_5;
 VAR_3 = VAR_4;

 if(VAR_2==VAR_0)
  VAR_5=0x42;
 else if(VAR_2==VAR_1)
  VAR_5=0x8A;
 else
  return;

 switch(VAR_4)
 {
  case 0:
   FUNC_0(VAR_5, 0x0D, 0xFE,0x00);
   FUNC_0(VAR_5, 0x0F, 0x3F,0x80);
   break;
  case 1:
   FUNC_0(VAR_5, 0x0D, 0xFE, 0x00);
   FUNC_0(VAR_5, 0x0F, 0x3F, 0x40);
   break;
  case 2:
   FUNC_0(VAR_5, 0x0D, 0xFE, 0x00);
   FUNC_0(VAR_5, 0x0F, 0x3F, 0x00);
   break;
  case 3:
   FUNC_0(VAR_5, 0x0D, 0xFE, 0x01);
   FUNC_0(VAR_5, 0x0F, 0x3F, 0x00);
   break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (short,int) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(short VAR_2, short VAR_3)
{
 int VAR_4;

 VAR_4=VAR_3;
 if(VAR_4>280)
  VAR_4=280;

 FUNC_1(0x18, VAR_4);
 FUNC_1(0x19, VAR_4>>8);

 if(VAR_1==1)
 {
  FUNC_1(0x1A, 0xFC);
  FUNC_1(0x1B, 0x00);
  if(VAR_3>VAR_4)
   FUNC_3(240,240);
  else
   FUNC_3(VAR_4,240);
 }
 else
 {
  FUNC_1(0x1A, 0x1A);
  FUNC_1(0x1B, 0x01);
  if(VAR_4>256)
   FUNC_3(270,270);
  else
   FUNC_3(VAR_4, 270);
 }
 FUNC_1(0x12,0);
 FUNC_1(0x13, VAR_0);
 FUNC_1(0x42, 0x00);
 FUNC_1(0x43, 0x00);
 FUNC_1(0x44, VAR_0);

 FUNC_1(0x22, VAR_2+8);
 FUNC_1(0x23, (VAR_2+8)>> 8);

 if(VAR_1==1)
  FUNC_2(VAR_2,640);
 else
  FUNC_2(VAR_2+8, 768);

 FUNC_1(0x30, FUNC_0(0x30)&0xFE);
 FUNC_1(0x08, FUNC_0(0x08)|0x01);
 FUNC_1(0x01, FUNC_0(0x01)&0xFD);
 FUNC_1(0x32, 0x00);
 FUNC_1(0x33, VAR_0);
}

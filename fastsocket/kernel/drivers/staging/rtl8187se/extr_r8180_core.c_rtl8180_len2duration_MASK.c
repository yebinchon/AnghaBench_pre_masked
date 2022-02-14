
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



u16 FUNC_0(u32 VAR_0, short VAR_1,short* VAR_2)
{
 u16 VAR_3;
 u16 VAR_4;
 *VAR_2=0;

 switch(VAR_1){
 case 0:
  *VAR_2=0;
  VAR_3 = ((VAR_0+4)<<4) /0x2;
  VAR_4 = ((VAR_0+4)<<4) % 0x2;
  if(VAR_4 ==0 ) break;
  VAR_3++;
  break;
 case 1:
  *VAR_2=0;
  VAR_3 = ((VAR_0+4)<<4) /0x4;
  VAR_4 = ((VAR_0+4)<<4) % 0x4;
  if(VAR_4 ==0 ) break;
  VAR_3++;
  break;
 case 2:
  *VAR_2=0;
  VAR_3 = ((VAR_0+4)<<4) /0xb;
  VAR_4 = ((VAR_0+4)<<4) % 0xb;
  if(VAR_4 ==0 )
   break;
  VAR_3++;
  break;
 default:
 case 3:
  *VAR_2=0;
  VAR_3 = ((VAR_0+4)<<4) /0x16;
  VAR_4 = ((VAR_0+4)<<4) % 0x16;
  if(VAR_4 ==0 )
   break;
  VAR_3++;
  if(VAR_4 > 6)
   break;
  *VAR_2=1;
  break;
 }

 return VAR_3;
}

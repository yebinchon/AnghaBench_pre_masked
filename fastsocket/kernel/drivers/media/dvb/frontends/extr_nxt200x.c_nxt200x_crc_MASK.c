
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(u16 VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 u16 VAR_4 = (u16) VAR_2 & 0xFF;

 VAR_4<<=8;
 for(VAR_3=0; VAR_3<8; VAR_3++) {
  if((VAR_1^VAR_4) & 0x8000)
   VAR_1=(VAR_1<<1)^VAR_0;
  else
   VAR_1<<=1;
  VAR_4<<=1;
 }
 return VAR_1;
}

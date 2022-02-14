
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u32 FUNC_0(u16 VAR_0,u32 VAR_1)
{
 u32 VAR_2,VAR_3;

 VAR_2 = (((VAR_0-1)<<8)/VAR_1)+1;
 if(VAR_1>128 && VAR_1<256) {
  while(VAR_1&0x01) VAR_1 >>= 1;
  VAR_3 = VAR_1*(VAR_0/VAR_1);
  if(!(VAR_0-VAR_3)) VAR_2++;
 }
 if(VAR_2>1024) VAR_2 = 1024;

 return VAR_2;
}

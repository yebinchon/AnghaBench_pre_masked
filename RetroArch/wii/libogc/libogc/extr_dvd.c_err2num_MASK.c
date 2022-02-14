
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int* VAR_0 ;

__attribute__((used)) static u8 FUNC_0(u32 VAR_1)
{
 u32 VAR_2;

 VAR_2=0;
 while(VAR_2<18) {
  if(VAR_1==VAR_0[VAR_2]) return VAR_2;
  VAR_2++;
 }
 if(VAR_1<0x00100000 || VAR_1>0x00100008) return 29;

 return 17;
}

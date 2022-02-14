
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



u32 FUNC_0(u32 VAR_0,u32 *VAR_1)
{
  if(VAR_0==0) {*VAR_1=0;return 1;}
  int VAR_2=32;
  while(VAR_2>0)
  {
    if(VAR_0<256) {
      *VAR_1=((VAR_2&30)<<7)|VAR_0;
      return 1;
    }
    VAR_0=(VAR_0>>2)|(VAR_0<<30);VAR_2-=2;
  }
  return 0;
}

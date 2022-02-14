
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,short) ;

__attribute__((used)) static void FUNC_1(short VAR_0, short VAR_1)
{
 if(VAR_0<=512)
 {
  if(VAR_0%5==0)
  {
   VAR_0/=5;
   VAR_1/=5;
  }
 }
 else
 {
  VAR_0=512;
  VAR_1=640;
 }

 while(((VAR_0|VAR_1)&1)==0)
 {
  VAR_0>>=1;
  VAR_1>>=1;
 }
 while(VAR_1>32)
 {
  VAR_1>>=1;
  VAR_0=(VAR_0+1)>>1;
 }
 if(VAR_1==32)
  VAR_1--;

 FUNC_0(0x24, 0x80|VAR_1);
 FUNC_0(0x25, VAR_0);
}

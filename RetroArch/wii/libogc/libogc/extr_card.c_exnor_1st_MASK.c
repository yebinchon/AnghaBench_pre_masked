
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0,u32 VAR_1)
{
 u32 VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;

 VAR_2 = 0;
 while(VAR_2<VAR_1) {
  VAR_3 = (VAR_0>>23);
  VAR_4 = (VAR_0>>15);
  VAR_5 = (VAR_0>>7);
  VAR_6 = (VAR_0^VAR_5);
  VAR_7 = (VAR_4^VAR_6);
  VAR_8 = ~(VAR_3^VAR_7);
  VAR_4 = (VAR_0>>1);
  VAR_9 = ((VAR_8<<30)&0x40000000);
  VAR_0 = (VAR_4|VAR_9);
  VAR_2++;
 };
 return VAR_0;
}

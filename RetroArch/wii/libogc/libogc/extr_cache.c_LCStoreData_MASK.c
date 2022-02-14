
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (void*,void*,int) ;

u32 FUNC_1(void *VAR_0,void *VAR_1,u32 VAR_2)
{
 u32 VAR_3,VAR_4;

 if((s32)VAR_2<=0) return 0;

 VAR_3 = (VAR_2+31)>>5;
 VAR_4 = (VAR_3+127)>>7;
 while(VAR_3) {
  if(VAR_3<0x80) {
   FUNC_0(VAR_0,VAR_1,VAR_3);
   VAR_3 = 0;
   break;
  }
  FUNC_0(VAR_0,VAR_1,0);
  VAR_3 -= 128;
  VAR_0 += 4096;
  VAR_1 += 4096;
 }
 return VAR_4;
}

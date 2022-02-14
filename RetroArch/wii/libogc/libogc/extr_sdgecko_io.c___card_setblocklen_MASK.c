
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int *,int) ;
 size_t FUNC_1 (size_t,int*,int) ;
 size_t FUNC_2 (size_t,int ) ;
 int ** VAR_3 ;

__attribute__((used)) static s32 FUNC_3(s32 VAR_4,u32 VAR_5)
{
 u8 VAR_6[5];
 s32 VAR_7;

 if(VAR_4<0 || VAR_4>=VAR_1) return VAR_0;
 if(VAR_5>VAR_2) VAR_5 = VAR_2;

 VAR_6[0] = 0x10;
 VAR_6[1] = (VAR_5>>24)&0xff;
 VAR_6[2] = (VAR_5>>16)&0xff;
 VAR_6[3] = (VAR_5>>8)&0xff;
 VAR_6[4] = VAR_5&0xff;
 if((VAR_7=FUNC_1(VAR_4,VAR_6,5))!=0) {
  return VAR_7;
 }
 if((VAR_7=FUNC_0(VAR_4,VAR_3[VAR_4],1))<0) return VAR_7;
 VAR_7 = FUNC_2(VAR_4,VAR_3[VAR_4][0]);

 return VAR_7;
}

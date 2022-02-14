
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int* VAR_6 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9,VAR_10,VAR_11;

 if(VAR_7&~0xffff) return 0;
 if(VAR_7&0x03) return 0;

 VAR_8 = 0;
 VAR_10 = VAR_7&0xfc;
 if(VAR_10==VAR_5 || VAR_10==VAR_1
  || VAR_10==VAR_3 || VAR_10==VAR_4
  || VAR_10==VAR_0 || VAR_10==VAR_2) {
  VAR_9 = FUNC_0(VAR_7,23)&0x1c;
  if((VAR_11=VAR_6[VAR_9>>2])==0) return 0;
  VAR_10 = ((VAR_10<<20)&0x1FFE0000)/VAR_11;
  if(VAR_10>8) VAR_8 = 1;
 }
 return VAR_8;
}

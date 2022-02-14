
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static u32 FUNC_1(s32 VAR_3,u32 VAR_4,u32 VAR_5)
{
 u32 VAR_6,VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_0();
 if(VAR_6<VAR_4) {
  VAR_7 = (VAR_6+(-1-VAR_4))+1;
 } else
  VAR_7 = (VAR_6-VAR_4);

 VAR_8 = (VAR_7/VAR_1);
 if(VAR_8<=VAR_5) return 0;

 VAR_2[VAR_3] |= VAR_0;
 return 1;
}

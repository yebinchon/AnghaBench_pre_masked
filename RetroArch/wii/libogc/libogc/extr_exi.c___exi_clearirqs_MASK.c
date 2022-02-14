
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static __inline__ void FUNC_0(s32 VAR_4,u32 VAR_5,u32 VAR_6,u32 VAR_7)
{
 u32 VAR_8;
 VAR_8 = (VAR_3[VAR_4*5]&~(VAR_0|VAR_2|VAR_1));
 if(VAR_5) VAR_8 |= VAR_0;
 if(VAR_6) VAR_8 |= VAR_2;
 if(VAR_7) VAR_8 |= VAR_1;
 VAR_3[VAR_4*5] = VAR_8;
}

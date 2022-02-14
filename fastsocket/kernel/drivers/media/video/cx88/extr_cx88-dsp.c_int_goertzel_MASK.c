
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
typedef int s64 ;
typedef int s32 ;
typedef int s16 ;


 int FUNC_0 (int,size_t) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static u32 FUNC_2(s16 VAR_0[], u32 VAR_1, u32 VAR_2)
{


 s32 VAR_3 = 0;
 s32 VAR_4 = 0;
 s32 VAR_5 = 2*FUNC_1(VAR_2);
 u32 VAR_6;

 u64 VAR_7;
 u32 VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  s32 VAR_9 = VAR_0[VAR_6] + ((s64)VAR_5*VAR_3/32768) - VAR_4;
  VAR_4 = VAR_3;
  VAR_3 = VAR_9;
 }

 VAR_7 = (s64)VAR_4 * VAR_4 + (s64)VAR_3 * VAR_3 -
        (s64)VAR_5 * VAR_4 * VAR_3 / 32768;



 VAR_8 = VAR_1 * VAR_1;
 FUNC_0(VAR_7, VAR_8);

 return (u32) VAR_7;
}

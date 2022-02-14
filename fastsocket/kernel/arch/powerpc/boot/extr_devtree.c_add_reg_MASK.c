
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 *VAR_1, u32 *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = VAR_0 - 1; VAR_4 >= VAR_0 - VAR_3; VAR_4--) {
  u64 VAR_6 = (u64)VAR_1[VAR_4] + VAR_2[VAR_4] + VAR_5;
  VAR_5 = VAR_6 >> 32;
  VAR_1[VAR_4] = (u32)VAR_6;
 }

 return !VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;



__attribute__((used)) static u8 FUNC_0(u8 *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 u8 VAR_3 = 0;

 if (!VAR_0)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 += VAR_0[VAR_2];

 return (u8) (0 - VAR_3);
}

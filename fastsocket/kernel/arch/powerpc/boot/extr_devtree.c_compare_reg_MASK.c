
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4] < VAR_2[VAR_4])
   return 0;
  if (VAR_1[VAR_4] > VAR_2[VAR_4])
   break;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_2[VAR_4] + VAR_3[VAR_4];

  if (VAR_1[VAR_4] < VAR_5)
   break;
  if (VAR_1[VAR_4] > VAR_5)
   return 0;
 }

 return VAR_1[VAR_4] != VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 if (VAR_1 == 0)
  return 0;

 VAR_5 = (VAR_0 < VAR_1) ? (VAR_1 - VAR_0) : (VAR_0 - VAR_1);

 if (VAR_5 <= VAR_2)

  return 1;

 VAR_4 = VAR_0 / VAR_1;
 VAR_3 = VAR_0 % VAR_1;
 if (VAR_3 > VAR_2) {

  if ((VAR_1 - VAR_3) <= VAR_2)

   VAR_4++;
  else
   VAR_4 = 0;
 }
 return VAR_4;
}

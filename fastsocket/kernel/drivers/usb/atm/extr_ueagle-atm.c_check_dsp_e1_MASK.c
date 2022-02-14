
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;


 int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (int const*) ;
 unsigned int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_0, unsigned int VAR_1)
{
 u8 VAR_2, VAR_3;
 u16 VAR_4;
 u32 VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_2 = FUNC_0(VAR_0);
 VAR_8 = 1;


 if (VAR_8 + 4 * VAR_2 > VAR_1)
  return 1;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  VAR_5 = FUNC_2(VAR_0 + VAR_8);
  VAR_8 += 4;

  if (VAR_5 == 0)
   continue;


  if (VAR_5 >= VAR_1)
   return 1;

  VAR_9 = VAR_5;
  VAR_3 = FUNC_0(VAR_0 + VAR_9);
  VAR_9 += 1;

  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {


   if (VAR_9 + 4 > VAR_1)
    return 1;

   VAR_9 += 2;
   VAR_4 = FUNC_1(VAR_0 + VAR_9);
   VAR_9 += 2;


   if (VAR_9 + VAR_4 > VAR_1)
    return 1;

   VAR_9 += VAR_4;
  }
 }

 return 0;
}

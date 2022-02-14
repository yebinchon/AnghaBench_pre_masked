
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static const u8 * FUNC_2(const char *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_2 < VAR_4)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_2 - VAR_4; VAR_3++) {
  if (FUNC_0(VAR_1 + VAR_3, VAR_0, VAR_4) == 0)
   return VAR_1 + VAR_3;
 }

 return ((void*)0);
}

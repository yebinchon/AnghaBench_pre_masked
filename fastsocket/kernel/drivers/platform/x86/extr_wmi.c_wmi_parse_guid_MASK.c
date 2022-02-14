
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static bool FUNC_1(const u8 *VAR_0, u8 *VAR_1)
{
 static const int VAR_2[] = { 4, 2, 2, 2, 6 };
 int VAR_3, VAR_4, VAR_5;

 if (VAR_0[8] != '-' || VAR_0[13] != '-' ||
  VAR_0[18] != '-' || VAR_0[23] != '-')
  return 0;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++, VAR_0++) {
  for (VAR_3 = 0; VAR_3 < VAR_2[VAR_4]; VAR_3++, VAR_0 += 2, *VAR_1++ = VAR_5) {
   VAR_5 = FUNC_0(VAR_0);
   if (VAR_5 < 0)
    return 0;
  }
 }

 return 1;
}

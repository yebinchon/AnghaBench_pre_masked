
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const) ;

__attribute__((used)) static int FUNC_2(const unsigned char *VAR_1,
    const unsigned char *VAR_2,
    const unsigned char *VAR_3,
    const unsigned char *VAR_4)
{
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_0 / 2; VAR_5++)
  if (FUNC_1(VAR_1[VAR_5]) != FUNC_1(VAR_2[VAR_5]) ||
   FUNC_0(VAR_1[VAR_5]) !=
      FUNC_0(VAR_2[VAR_5]))
   return 0;





 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3[VAR_5] != VAR_4[VAR_5])
   return 0;

 return 1;
}

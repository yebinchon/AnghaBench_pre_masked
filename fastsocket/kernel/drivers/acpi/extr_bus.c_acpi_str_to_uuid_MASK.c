
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static acpi_status FUNC_3(char *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 static int VAR_5[16] = {6, 4, 2, 0, 11, 9, 16, 14, 19, 21,
  24, 26, 28, 30, 32, 34};

 if (FUNC_2(VAR_2) != 36)
  return VAR_0;
 for (VAR_4 = 0; VAR_4 < 36; VAR_4++) {
  if (VAR_4 == 8 || VAR_4 == 13 || VAR_4 == 18 || VAR_4 == 23) {
   if (VAR_2[VAR_4] != '-')
    return VAR_0;
  } else if (!FUNC_1(VAR_2[VAR_4]))
   return VAR_0;
 }
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  VAR_3[VAR_4] = FUNC_0(VAR_2[VAR_5[VAR_4]]) << 4;
  VAR_3[VAR_4] |= FUNC_0(VAR_2[VAR_5[VAR_4] + 1]);
 }
 return VAR_1;
}

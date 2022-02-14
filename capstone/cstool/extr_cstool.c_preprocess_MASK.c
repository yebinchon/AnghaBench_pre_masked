
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static uint8_t *FUNC_4(char *VAR_0, size_t *VAR_1)
{
 size_t VAR_2 = 0, VAR_3 = 0;
 uint8_t VAR_4, VAR_5;
 uint8_t *VAR_6;

 if (FUNC_3(VAR_0) == 0)
  return ((void*)0);

 VAR_6 = (uint8_t *)FUNC_2(FUNC_3(VAR_0));
 if (VAR_6 != ((void*)0)) {
  while (VAR_0[VAR_2] != '\0') {
   if (FUNC_1(VAR_0[VAR_2]) && FUNC_1(VAR_0[VAR_2+1])) {
    VAR_4 = 16 * FUNC_0(VAR_0[VAR_2]);
    VAR_5 = FUNC_0(VAR_0[VAR_2+1]);
    VAR_6[VAR_3] = VAR_4 + VAR_5;
    VAR_2++;
    VAR_3++;
   }
   VAR_2++;
  }
  *VAR_1 = VAR_3;
 }

 return VAR_6;
}

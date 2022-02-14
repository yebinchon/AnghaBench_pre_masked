
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;



__attribute__((used)) static char *FUNC_0(uint16_t * VAR_0, char *VAR_1, int VAR_2)
{

 int VAR_3;
 uint16_t VAR_4;
 char *VAR_5 = VAR_1 + 6 + 2 * VAR_2;

 VAR_1 += 6;

 while (VAR_2 && VAR_1 < VAR_5) {
  char *VAR_6 = (char *)VAR_0;

  VAR_4 = *VAR_0++;
  VAR_3 = 1;
  VAR_2--;
  while (VAR_2 && *VAR_0 == VAR_4)
   VAR_2--, VAR_3++, VAR_0++;
  *VAR_1++ = VAR_3;
  *VAR_1++ = VAR_6[1];
  *VAR_1++ = VAR_6[0];
 }

 return VAR_1;
}

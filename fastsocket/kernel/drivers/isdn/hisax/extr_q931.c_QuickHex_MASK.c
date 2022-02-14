
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



int
FUNC_0(char *VAR_0, u_char * VAR_1, int VAR_2)
{
 register int VAR_3;
 register char *VAR_4 = VAR_0;
 register u_char VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  *VAR_4++ = ' ';
  VAR_5 = (VAR_1[VAR_3] >> 4) & 0x0f;
  if (VAR_5 < 10)
   *VAR_4++ = '0' + VAR_5;
  else
   *VAR_4++ = 'A' - 10 + VAR_5;
  VAR_5 = VAR_1[VAR_3] & 0x0f;
  if (VAR_5 < 10)
   *VAR_4++ = '0' + VAR_5;
  else
   *VAR_4++ = 'A' - 10 + VAR_5;
 }
 *VAR_4++ = 0;
 return (VAR_4 - VAR_0);
}

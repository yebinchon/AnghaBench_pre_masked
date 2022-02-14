
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static int
FUNC_0(char *VAR_0, u_char VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_0;

 VAR_1 = VAR_1 << (8 - VAR_2);
 while (VAR_3--) {
  if (VAR_1 & 0x80)
   *VAR_4++ = '1';
  else
   *VAR_4++ = '0';
  VAR_1 = VAR_1 << 1;
 }
 return (VAR_4 - VAR_0);
}

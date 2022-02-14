
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 FUNC_0(VAR_0, "string: %s", VAR_2);

 if (!*VAR_2)
  return -1;

 do {
  if (VAR_3 > (VAR_1 - 15) / 16)
   return -1;
  VAR_4 = *VAR_2;
  if (VAR_4 >= '0' && VAR_4 <= '9')
   VAR_4 -= '0';
  else if (VAR_4 >= 'a' && VAR_4 <= 'f')
   VAR_4 -= 'a' - 10;
  else if (VAR_4 >= 'A' && VAR_4 <= 'F')
   VAR_4 -= 'A' - 10;
  else
   return -1;
  VAR_3 = VAR_3 * 16 + VAR_4;
 } while (*++VAR_2);

 return VAR_3;
}

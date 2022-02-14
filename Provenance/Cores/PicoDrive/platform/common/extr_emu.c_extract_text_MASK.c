
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, const unsigned char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_0;
 int VAR_5;

 if (VAR_3) VAR_3 = 1;

 for (VAR_5 = VAR_2 - 1; VAR_5 >= 0; VAR_5--)
 {
  if (VAR_1[VAR_5^VAR_3] != ' ') break;
 }
 VAR_2 = VAR_5 + 1;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  unsigned char VAR_6 = VAR_1[VAR_5^VAR_3];
  if (VAR_6 >= 0x20 && VAR_6 < 0x7f && VAR_6 != '#' && VAR_6 != '|' &&
   VAR_6 != '[' && VAR_6 != ']' && VAR_6 != '\\')
  {
   *VAR_4++ = VAR_6;
  }
  else
  {
   FUNC_0(VAR_4, "\\%02x", VAR_6);
   VAR_4 += 3;
  }
 }

 return VAR_4 - VAR_0;
}

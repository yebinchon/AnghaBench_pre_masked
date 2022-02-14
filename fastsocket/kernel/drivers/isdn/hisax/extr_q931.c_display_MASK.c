
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, u_char * VAR_1)
{
 char *VAR_2 = VAR_0;
 char VAR_3 = ' ';
 int VAR_4, VAR_5 = 3;

 VAR_1++;
 VAR_4 = *VAR_1++;

 VAR_2 += FUNC_0(VAR_2, "   \"");
 while (VAR_4--) {
  VAR_2 += FUNC_0(VAR_2, "%c", *VAR_1++);


  if (*VAR_1 & 0x80) {
   VAR_5++;
   VAR_3 = ' ';
  } else if (VAR_3 == ' ')
   VAR_3 = 'a';

  else
   VAR_3++;
 }
 *VAR_2++ = '\"';
 *VAR_2++ = '\n';
 return (VAR_2 - VAR_0);
}

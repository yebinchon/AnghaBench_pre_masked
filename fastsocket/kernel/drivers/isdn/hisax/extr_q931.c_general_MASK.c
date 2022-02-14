
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,char*,int,char) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, u_char * VAR_1)
{
 char *VAR_2 = VAR_0;
 char VAR_3 = ' ';
 int VAR_4, VAR_5 = 3;

 VAR_1++;
 VAR_4 = *VAR_1++;

 while (VAR_4--) {
  VAR_2 += FUNC_1(VAR_2, "    octet %d%c ", VAR_5, VAR_3);
  VAR_2 += FUNC_0(VAR_2, *VAR_1++, 8, 8);
  *VAR_2++ = '\n';


  if (*VAR_1 & 0x80) {
   VAR_5++;
   VAR_3 = ' ';
  } else if (VAR_3 == ' ')
   VAR_3 = 'a';
  else
   VAR_3++;
 }
 return (VAR_2 - VAR_0);
}

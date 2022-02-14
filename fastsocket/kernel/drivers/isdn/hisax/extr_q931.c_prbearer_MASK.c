
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static
int
FUNC_2(char *VAR_0, u_char * VAR_1)
{
 char *VAR_2 = VAR_0, VAR_3;

 VAR_1 += 2;
 VAR_2 += FUNC_1(VAR_2, "    octet 3  ");
 VAR_2 += FUNC_0(VAR_2, *VAR_1++, 8, 8);
 *VAR_2++ = '\n';
 VAR_2 += FUNC_1(VAR_2, "    octet 4  ");
 VAR_2 += FUNC_0(VAR_2, *VAR_1, 8, 8);
 *VAR_2++ = '\n';
 if ((*VAR_1++ & 0x1f) == 0x18) {
  VAR_2 += FUNC_1(VAR_2, "    octet 4.1 ");
  VAR_2 += FUNC_0(VAR_2, *VAR_1++, 8, 8);
  *VAR_2++ = '\n';
 }

 if ((*VAR_1 & 0x60) == 0x20) {
  VAR_3 = ' ';
  do {
   VAR_2 += FUNC_1(VAR_2, "    octet 5%c ", VAR_3);
   VAR_2 += FUNC_0(VAR_2, *VAR_1, 8, 8);
   *VAR_2++ = '\n';
   if (VAR_3 == ' ')
    VAR_3 = 'a';
   else
    VAR_3++;
  }
  while (!(*VAR_1++ & 0x80));
 }

 if ((*VAR_1 & 0x60) == 0x40) {
  VAR_2 += FUNC_1(VAR_2, "    octet 6  ");
  VAR_2 += FUNC_0(VAR_2, *VAR_1++, 8, 8);
  *VAR_2++ = '\n';
 }

 if ((*VAR_1 & 0x60) == 0x60) {
  VAR_2 += FUNC_1(VAR_2, "    octet 7  ");
  VAR_2 += FUNC_0(VAR_2, *VAR_1++, 8, 8);
  *VAR_2++ = '\n';
 }
 return (VAR_2 - VAR_0);
}

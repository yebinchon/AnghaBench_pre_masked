
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, u_char * VAR_1)
{
 int VAR_2;
 char *VAR_3 = VAR_0;

 VAR_1++;
 VAR_2 = *VAR_1++ - 1;
 VAR_3 += FUNC_1(VAR_3, "    octet 3 ");
 VAR_3 += FUNC_0(VAR_3, *VAR_1, 8, 8);
 *VAR_3++ = '\n';
 if (!(*VAR_1 & 0x80)) {
  VAR_3 += FUNC_1(VAR_3, "    octet 3a ");
  VAR_3 += FUNC_0(VAR_3, *++VAR_1, 8, 8);
  *VAR_3++ = '\n';
  VAR_2--;
 };
 VAR_1++;

 VAR_3 += FUNC_1(VAR_3, "    number digits ");
 while (VAR_2--)
  *VAR_3++ = *VAR_1++;
 *VAR_3++ = '\n';
 return (VAR_3 - VAR_0);
}

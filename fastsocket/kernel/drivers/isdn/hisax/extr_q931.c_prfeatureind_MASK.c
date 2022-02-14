
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, u_char * VAR_1)
{
 char *VAR_2 = VAR_0;

 VAR_1 += 2;
 VAR_2 += FUNC_1(VAR_2, "    octet 3  ");
 VAR_2 += FUNC_0(VAR_2, *VAR_1, 8, 8);
 *VAR_2++ = '\n';
 if (!(*VAR_1++ & 80)) {
  VAR_2 += FUNC_1(VAR_2, "    octet 4  ");
  VAR_2 += FUNC_0(VAR_2, *VAR_1++, 8, 8);
  *VAR_2++ = '\n';
 }
 VAR_2 += FUNC_1(VAR_2, "    Status:  ");
 switch (*VAR_1) {
  case 0:
   VAR_2 += FUNC_1(VAR_2, "Idle");
   break;
  case 1:
   VAR_2 += FUNC_1(VAR_2, "Active");
   break;
  case 2:
   VAR_2 += FUNC_1(VAR_2, "Prompt");
   break;
  case 3:
   VAR_2 += FUNC_1(VAR_2, "Pending");
   break;
  default:
   VAR_2 += FUNC_1(VAR_2, "(Reserved)");
   break;
 }
 *VAR_2++ = '\n';
 return (VAR_2 - VAR_0);
}

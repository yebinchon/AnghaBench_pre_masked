
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char) ;

int FUNC_1(char* VAR_0, int *VAR_1)
{
 int VAR_2 = 0;
 char* VAR_3 = VAR_0;
 while(*VAR_3 >= '0' && *VAR_3 <= '9')
 {
  VAR_2 *= 10;
  VAR_2 += *VAR_3++ - '0';
 }
 if(*VAR_3 != ' ' && *VAR_3 != 0)
  FUNC_0("Malformed integer value (%c)", *VAR_3);
 *VAR_1 = VAR_2;
 return VAR_3 - VAR_0;
}

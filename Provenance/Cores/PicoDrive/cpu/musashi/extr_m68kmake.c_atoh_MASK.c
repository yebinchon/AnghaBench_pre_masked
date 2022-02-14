
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char* VAR_0)
{
 int VAR_1 = 0;

 for(;;VAR_0++)
 {
  if(*VAR_0 >= '0' && *VAR_0 <= '9')
  {
   VAR_1 <<= 4;
   VAR_1 += *VAR_0 - '0';
  }
  else if(*VAR_0 >= 'a' && *VAR_0 <= 'f')
  {
   VAR_1 <<= 4;
   VAR_1 += *VAR_0 - 'a' + 10;
  }
  else break;
 }
 return VAR_1;
}

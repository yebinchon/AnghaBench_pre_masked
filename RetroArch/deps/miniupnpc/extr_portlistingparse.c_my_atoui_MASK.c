
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNSIGNED_INTEGER ;



__attribute__((used)) static UNSIGNED_INTEGER
FUNC_0(const char * VAR_0, int VAR_1)
{
 UNSIGNED_INTEGER VAR_2 = 0;
 while(VAR_1 > 0 && *VAR_0)
 {
  if(*VAR_0 >= '0' && *VAR_0 <= '9')
   VAR_2 = VAR_2*10 + (*VAR_0 - '0');
  else
   break;
  VAR_0++;
  VAR_1--;
 }
 return VAR_2;
}

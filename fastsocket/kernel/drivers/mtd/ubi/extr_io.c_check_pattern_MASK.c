
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, uint8_t VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (((const uint8_t *)VAR_0)[VAR_3] != VAR_1)
   return 0;
 return 1;
}

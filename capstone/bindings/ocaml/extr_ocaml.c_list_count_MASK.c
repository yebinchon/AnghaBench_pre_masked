
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static unsigned int FUNC_0(uint8_t *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 for(VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (VAR_0[VAR_2] == 0)
   return VAR_2;

 return VAR_1;
}

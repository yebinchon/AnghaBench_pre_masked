
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int RegSetSize; int* RegSet; } ;
typedef TYPE_1__ MCRegisterClass ;



bool FUNC_0(const MCRegisterClass *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = VAR_1 % 8;
 unsigned VAR_3 = VAR_1 / 8;

 if (VAR_3 >= VAR_0->RegSetSize)
  return 0;

 return (VAR_0->RegSet[VAR_3] & (1 << VAR_2)) != 0;
}

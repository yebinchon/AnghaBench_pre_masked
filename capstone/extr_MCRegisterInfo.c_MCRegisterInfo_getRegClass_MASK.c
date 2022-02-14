
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int NumClasses; int const* Classes; } ;
typedef TYPE_1__ MCRegisterInfo ;
typedef int MCRegisterClass ;



const MCRegisterClass* FUNC_0(const MCRegisterInfo *VAR_0, unsigned VAR_1)
{

 if (VAR_1 >= VAR_0->NumClasses)
  return 0;
 return &(VAR_0->Classes[VAR_1]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int size; scalar_t__ address; scalar_t__ handle; } ;
typedef TYPE_1__ __dpmi_meminfo ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;

int FUNC_3(void *VAR_0, int VAR_1)
{
   uint32_t VAR_2;
   __dpmi_meminfo VAR_3;

   if (FUNC_0(FUNC_2(), &VAR_2) == -1)
      return (-1);

   VAR_3.handle = 0;
   VAR_3.size = VAR_1;
   VAR_3.address = VAR_2 + (uint32_t)VAR_0;

   if (FUNC_1(&VAR_3) == -1)
      return (-1);

   return 0;
}

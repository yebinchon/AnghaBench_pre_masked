
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pte_osThreadHandle ;
struct TYPE_3__ {int size; int currentPriority; } ;
typedef TYPE_1__ SceKernelThreadInfo ;


 int FUNC_0 (int ,TYPE_1__*) ;

int FUNC_1(pte_osThreadHandle VAR_0)
{
   SceKernelThreadInfo VAR_1;

   VAR_1.size = sizeof(SceKernelThreadInfo);

   FUNC_0(VAR_0, &VAR_1);

   return VAR_1.currentPriority;
}

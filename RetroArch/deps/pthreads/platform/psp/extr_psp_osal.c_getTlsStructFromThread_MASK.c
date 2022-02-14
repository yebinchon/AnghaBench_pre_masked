
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int name; } ;
typedef int SceUID ;
typedef TYPE_1__ SceKernelThreadInfo ;


 void* VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void *FUNC_2(SceUID VAR_1)
{
   SceKernelThreadInfo VAR_2;
   unsigned int VAR_3;
   unsigned int VAR_4;
   int VAR_5;

   VAR_2.size = sizeof(SceKernelThreadInfo);

   FUNC_0(VAR_1, &VAR_2);

   VAR_5 = FUNC_1(VAR_2.name,"pthread%04d__%x", &VAR_4, &VAR_3);





   if (VAR_5 == 2)
      return (void *) VAR_3;

   return VAR_0;
}

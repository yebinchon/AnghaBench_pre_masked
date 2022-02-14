
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int threadName ;
typedef scalar_t__ pte_osThreadHandle ;
typedef int pte_osThreadEntryPoint ;
typedef int pte_osResult ;
struct TYPE_4__ {int cancelSem; void* argv; int entryPoint; } ;
typedef TYPE_1__ pspThreadData ;
typedef int cancelSemName ;
typedef scalar_t__ SceUID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int ,int,int,int) ;
 int VAR_6 ;
 int FUNC_4 (void*,int ,TYPE_1__*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 () ;
 int FUNC_7 (char*,int ,int ,int,int ) ;
 scalar_t__ FUNC_8 (char*,int ,int,int,int,int *) ;
 int FUNC_9 (char*,int,char*,int,...) ;
 int VAR_7 ;

pte_osResult FUNC_10(pte_osThreadEntryPoint VAR_8,
                                int VAR_9,
                                int VAR_10,
                                void *VAR_11,
                                pte_osThreadHandle* VAR_12)
{
   char VAR_13[64];
   char VAR_14[64];
   static int VAR_15 = 1;
   int VAR_16;
   void *VAR_17;
   SceUID VAR_18;
   pte_osResult VAR_19;
   pspThreadData *VAR_20;

   if (VAR_15++ > VAR_1)
      VAR_15 = 0;


   if (VAR_9 < VAR_0)
      VAR_9 = VAR_0;


   VAR_17 = FUNC_6();
   if (VAR_17 == ((void*)0))
   {
      FUNC_0("pteTlsThreadInit: PTE_OS_NO_RESOURCES\n");
      VAR_19 = VAR_3;
      goto FAIL0;
   }





   VAR_20 = (pspThreadData *) FUNC_2(sizeof(pspThreadData));

   if (VAR_20 == ((void*)0))
   {
      FUNC_5(VAR_17);

      FUNC_0("malloc(pspThreadData): PTE_OS_NO_RESOURCES\n");
      VAR_19 = VAR_3;
      goto FAIL0;
   }


   FUNC_4(VAR_17, VAR_7, VAR_20);

   VAR_20->entryPoint = VAR_8;
   VAR_20->argv = VAR_11;


   FUNC_9(VAR_14, sizeof(VAR_14), "pthread_cancelSem%04d", VAR_15);

   VAR_20->cancelSem = FUNC_7(VAR_14,
         0,
         0,
         255,
         0);







   FUNC_9(VAR_13, sizeof(VAR_13), "pthread%04d__%x", VAR_15, (unsigned int) VAR_17);

   VAR_16 = 0;




   VAR_18 = FUNC_8(VAR_13,
         VAR_6,
         VAR_10,
         VAR_9,
         VAR_16,
         ((void*)0));

   if (VAR_18 == (SceUID) VAR_5)
   {
      FUNC_1(VAR_20);
      FUNC_5(VAR_17);

      FUNC_0("sceKernelCreateThread: PTE_OS_NO_RESOURCES\n");
      VAR_19 = VAR_3;
   }
   else if (VAR_18 < 0)
   {
      FUNC_1(VAR_20);
      FUNC_5(VAR_17);

      FUNC_0("sceKernelCreateThread: PTE_OS_GENERAL_FAILURE\n");
      VAR_19 = VAR_2;
   }
   else
   {
      *VAR_12 = VAR_18;
      VAR_19 = VAR_4;
   }

FAIL0:
   return VAR_19;
}

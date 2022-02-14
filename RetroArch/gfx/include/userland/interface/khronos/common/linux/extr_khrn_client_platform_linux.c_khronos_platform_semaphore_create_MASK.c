
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int VCOS_STATUS_T ;
typedef int PLATFORM_SEMAPHORE_T ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int,char*,int,int,int) ;

VCOS_STATUS_T FUNC_2(PLATFORM_SEMAPHORE_T *VAR_0, int VAR_1[3], int VAR_2)
{
   char VAR_3[64];
   FUNC_1(VAR_3,sizeof(VAR_3),"KhanSemaphore%08x%08x%08x", VAR_1[0], VAR_1[1], VAR_1[2]);
   return FUNC_0(VAR_0, VAR_3, VAR_2);
}

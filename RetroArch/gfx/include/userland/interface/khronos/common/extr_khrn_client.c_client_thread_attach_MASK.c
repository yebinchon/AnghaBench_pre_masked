
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLATFORM_MUTEX_T ;
typedef scalar_t__ KHR_STATUS_T ;
typedef int CLIENT_THREAD_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

bool FUNC_8()
{
   CLIENT_THREAD_STATE_T *VAR_3 = (CLIENT_THREAD_STATE_T *)FUNC_3(sizeof(CLIENT_THREAD_STATE_T), "CLIENT_THREAD_STATE_T");

   if (!VAR_3)
      return 0;

   FUNC_1(VAR_3);

   FUNC_5(VAR_1, VAR_3);
   FUNC_0(VAR_3);

   return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMALCAM_BEHAVIOUR_T ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1)
{
   MMALCAM_BEHAVIOUR_T *VAR_2 = (MMALCAM_BEHAVIOUR_T *)VAR_1;
   int VAR_3;

   VAR_3 = FUNC_1(&VAR_0, VAR_2);

   FUNC_0("Thread terminating, result %d", VAR_3);
   return (void *)VAR_3;
}

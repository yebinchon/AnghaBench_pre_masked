
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VCOS_STATUS_T ;
typedef int GX_CLIENT_STATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

VCOS_STATUS_T FUNC_4(const char *VAR_1)
{
   GX_CLIENT_STATE_T VAR_2;
   VCOS_STATUS_T VAR_3;

   FUNC_3(&VAR_2, ((void*)0));

   VAR_3 = FUNC_1();
   if (VAR_3 == VAR_0)
      VAR_3 = FUNC_0(VAR_1);

   FUNC_2(&VAR_2);

   return VAR_3;
}

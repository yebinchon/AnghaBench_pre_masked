
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

VCOS_STATUS_T FUNC_5(void)
{
   VCOS_STATUS_T VAR_4;

   FUNC_1(VAR_1, VAR_3);
   FUNC_0("wfccsapi", VAR_1);

   VAR_4 = FUNC_4();

   FUNC_2("%s: result %d", VAR_0, VAR_4);

   if (VAR_4 != VAR_2)
   {
      FUNC_3(VAR_1);
   }

   return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VCHI_MEM_HANDLE_T ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_BULK_MODE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,void const*,int,void*,int ) ;
 int FUNC_1 (int) ;

VCHIQ_STATUS_T
FUNC_2(VCHIQ_SERVICE_HANDLE_T VAR_1,
   VCHI_MEM_HANDLE_T VAR_2,
   const void *VAR_3,
   int VAR_4,
   void *VAR_5,
   VCHIQ_BULK_MODE_T VAR_6)
{
   FUNC_1(VAR_2 == VAR_0);

   return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);
}

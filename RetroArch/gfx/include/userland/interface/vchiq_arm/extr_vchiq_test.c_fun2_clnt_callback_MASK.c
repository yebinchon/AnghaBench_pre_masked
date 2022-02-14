
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCHIQ_STATUS_T ;
typedef void* VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_REASON_T ;
typedef void VCHIQ_HEADER_T ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_2(VCHIQ_REASON_T VAR_3, VCHIQ_HEADER_T *VAR_4,
   VCHIQ_SERVICE_HANDLE_T VAR_5, void *VAR_6)
{
   FUNC_1(VAR_4);
   FUNC_1(VAR_5);
   FUNC_1(VAR_6);

   switch (VAR_3)
   {
   case 128:
   case 129:
   case 130:
      break;
   case 131:
      FUNC_0(&VAR_2);
      break;
   default:
      VAR_1 = 1;
      FUNC_0(&VAR_2);
      break;
   }

   return VAR_0;
}

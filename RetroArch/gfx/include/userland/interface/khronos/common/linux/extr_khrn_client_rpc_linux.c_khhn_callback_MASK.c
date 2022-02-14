
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_REASON_T ;
typedef int VCHIQ_HEADER_T ;


 int FUNC_0 () ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

VCHIQ_STATUS_T FUNC_3(VCHIQ_REASON_T VAR_3, VCHIQ_HEADER_T *VAR_4,
                  VCHIQ_SERVICE_HANDLE_T VAR_5, void *VAR_6)
{
   switch (VAR_3) {
   case 130:
      FUNC_1(&VAR_2, VAR_4);
      break;
   case 131:
   case 133:
      FUNC_2(&VAR_1);
      break;
   case 128:
   case 129:
   case 132:
   case 134:
      FUNC_0();
   }

   return VAR_0;
}

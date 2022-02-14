
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_REASON_T ;
struct TYPE_4__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;
typedef int PLATFORM_SEMAPHORE_T ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 () ;







 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;

VCHIQ_STATUS_T FUNC_10(VCHIQ_REASON_T VAR_3, VCHIQ_HEADER_T *VAR_4,
                  VCHIQ_SERVICE_HANDLE_T VAR_5, void *VAR_6)
{
   switch (VAR_3) {
   case 130:
   {
      int32_t *VAR_7 = (int32_t *) VAR_4->data;
      int32_t VAR_8 = VAR_7[0];
      int32_t *VAR_9 = &VAR_7[1];
      FUNC_8(VAR_4->size == 16);




      uint64_t VAR_10 = FUNC_6(VAR_5);
      if((VAR_9[0] != (uint32_t) VAR_10) || (VAR_9[1] != (uint32_t) (VAR_10 >> 32)))
      {
         FUNC_5("khan_callback: message for wrong process; pid = %X, msg pid = %X\n",
            (uint32_t) VAR_10, VAR_9[0]);
         return VAR_2;
      }

      if (VAR_8 == VAR_0)
      {

      }
      else
      {
         PLATFORM_SEMAPHORE_T VAR_11;
         if (FUNC_2(&VAR_11, VAR_9, 1) == VAR_1)
         {
            switch (VAR_8) {
            case 135:
               FUNC_1(&VAR_11);
               break;
            case 136:
               FUNC_4(&VAR_11);
               break;
            default:
               FUNC_9(0, "khan_callback: unknown message type");
               break;
            }
            FUNC_3(&VAR_11);
         }
      }
      FUNC_7(VAR_5, VAR_4);
      break;
   }
   case 131:
   case 133:
      FUNC_0();
      break;
   case 128:
      FUNC_9(0, "khan_callback: VCHIQ_SERVICE_OPENED");
      break;
   case 129:
      FUNC_9(0, "khan_callback: VCHIQ_SERVICE_CLOSED");
      break;
   case 132:
   case 134:
   default:
      FUNC_0();
   }

   return VAR_2;
}

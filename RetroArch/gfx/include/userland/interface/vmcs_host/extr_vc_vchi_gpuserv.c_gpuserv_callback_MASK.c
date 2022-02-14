
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gpu_callback_s {int cookie; int (* func ) (int ) ;} ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_REASON_T ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static VCHIQ_STATUS_T FUNC_2( VCHIQ_REASON_T VAR_0,
                                        VCHIQ_HEADER_T *VAR_1,
                                        VCHIQ_SERVICE_HANDLE_T VAR_2,
                                        void *VAR_3 )
{

   switch (VAR_0)
   {
      case 128:
      {
         struct gpu_callback_s *VAR_4 = (struct gpu_callback_s *)VAR_1->data;
         if (VAR_4->func)
            VAR_4->func(VAR_4->cookie);
         FUNC_1(VAR_2, VAR_1);
         break;
      }
      default:
        ;
   }
   return 0;
}

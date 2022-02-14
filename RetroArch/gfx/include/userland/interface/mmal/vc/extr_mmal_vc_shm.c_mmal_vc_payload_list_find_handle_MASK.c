
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int lock; TYPE_1__* list; } ;
struct TYPE_4__ {void* vc_handle; int in_use; } ;
typedef TYPE_1__ MMAL_VC_PAYLOAD_ELEM_T ;


 unsigned int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MMAL_VC_PAYLOAD_ELEM_T *FUNC_2(uint8_t *VAR_2)
{
   MMAL_VC_PAYLOAD_ELEM_T *VAR_3 = 0;
   unsigned int VAR_4;

   FUNC_0(&VAR_1.lock);
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   {
      if (!VAR_1.list[VAR_4].in_use)
         continue;
      if (VAR_1.list[VAR_4].vc_handle != (void *)VAR_2)
         continue;
      VAR_3 = &VAR_1.list[VAR_4];
      break;
   }
   FUNC_1(&VAR_1.lock);

   return VAR_3;
}

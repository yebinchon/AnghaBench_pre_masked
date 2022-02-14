
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int mem; scalar_t__ vc_handle; } ;
typedef TYPE_1__ MMAL_VC_PAYLOAD_ELEM_T ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

uint8_t *FUNC_3(uint8_t *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{

   MMAL_VC_PAYLOAD_ELEM_T *VAR_3 = FUNC_1(VAR_0);
   FUNC_0(VAR_2);

   if (VAR_3)
   {
      *VAR_1 = 0;
      VAR_0 = (uint8_t *)VAR_3->vc_handle;



   }

   return VAR_0;
}

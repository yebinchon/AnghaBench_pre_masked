
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ handle; int * mem; } ;
typedef TYPE_1__ MMAL_VC_PAYLOAD_ELEM_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 void* FUNC_3 (unsigned int) ;

uint8_t *FUNC_4(uint8_t *VAR_0, uint32_t VAR_1)
{

   MMAL_VC_PAYLOAD_ELEM_T *VAR_2 = FUNC_2(VAR_0);
   FUNC_0(VAR_1);

   if (VAR_2) {
      VAR_0 = VAR_2->mem;





   }

   return VAR_0;
}

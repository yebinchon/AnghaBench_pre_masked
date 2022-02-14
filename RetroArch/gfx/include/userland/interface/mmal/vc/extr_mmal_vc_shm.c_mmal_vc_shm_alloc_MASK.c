
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {void* vc_handle; void* handle; int * mem; } ;
typedef TYPE_1__ MMAL_VC_PAYLOAD_ELEM_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (scalar_t__,int ,char*) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (unsigned int) ;

uint8_t *FUNC_9(uint32_t VAR_1)
{
   uint8_t *VAR_2 = ((void*)0);

   MMAL_VC_PAYLOAD_ELEM_T *VAR_3 = FUNC_2();
   if (!VAR_3)
   {
      FUNC_0("could not get a free slot in the payload list");
      return ((void*)0);
   }
   FUNC_1(VAR_1);
   FUNC_3(VAR_3);


   return VAR_2;
}

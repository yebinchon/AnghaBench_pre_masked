
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* userdata; int cb; } ;
typedef int MMAL_POOL_T ;
typedef TYPE_1__ MMAL_POOL_PRIVATE_T ;
typedef int MMAL_POOL_BH_CB_T ;



void FUNC_0(MMAL_POOL_T *VAR_0, MMAL_POOL_BH_CB_T VAR_1, void *VAR_2)
{
   MMAL_POOL_PRIVATE_T *VAR_3 = (MMAL_POOL_PRIVATE_T *)VAR_0;
   VAR_3->cb = VAR_1;
   VAR_3->userdata = VAR_2;
}

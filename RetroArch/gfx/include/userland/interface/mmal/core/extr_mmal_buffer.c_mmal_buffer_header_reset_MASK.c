
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* dts; void* pts; scalar_t__ flags; scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;


 void* VAR_0 ;

void FUNC_0(MMAL_BUFFER_HEADER_T *VAR_1)
{
   VAR_1->length = 0;
   VAR_1->offset = 0;
   VAR_1->flags = 0;
   VAR_1->pts = VAR_0;
   VAR_1->dts = VAR_0;
}

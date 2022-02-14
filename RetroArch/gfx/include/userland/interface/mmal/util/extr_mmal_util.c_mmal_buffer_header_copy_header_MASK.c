
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * type; int dts; int pts; int flags; int length; int offset; int cmd; } ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;



void FUNC_0(MMAL_BUFFER_HEADER_T *VAR_0, const MMAL_BUFFER_HEADER_T *VAR_1)
{
   VAR_0->cmd = VAR_1->cmd;
   VAR_0->offset = VAR_1->offset;
   VAR_0->length = VAR_1->length;
   VAR_0->flags = VAR_1->flags;
   VAR_0->pts = VAR_1->pts;
   VAR_0->dts = VAR_1->dts;
   *VAR_0->type = *VAR_1->type;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * type; int dts; int pts; int flags; int length; int offset; int data; int alloc_size; int cmd; TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_2__* reference; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

MMAL_STATUS_T FUNC_2(MMAL_BUFFER_HEADER_T *VAR_2,
   MMAL_BUFFER_HEADER_T *VAR_3)
{




   if (!VAR_2 || !VAR_3 || VAR_2->priv->reference)
      return VAR_0;

   FUNC_1(VAR_3);
   VAR_2->priv->reference = VAR_3;


   VAR_2->cmd = VAR_3->cmd;
   VAR_2->alloc_size = VAR_3->alloc_size;
   VAR_2->data = VAR_3->data;
   VAR_2->offset = VAR_3->offset;
   VAR_2->length = VAR_3->length;
   VAR_2->flags = VAR_3->flags;
   VAR_2->pts = VAR_3->pts;
   VAR_2->dts = VAR_3->dts;
   *VAR_2->type = *VAR_3->type;
   return VAR_1;
}

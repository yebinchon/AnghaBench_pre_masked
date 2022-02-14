
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ index; scalar_t__ type; TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* core; } ;
struct TYPE_6__ {int (* buffer_header_callback ) (TYPE_3__*,int *) ;} ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;

void FUNC_3(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   if (VAR_0->priv->core->buffer_header_callback)
   {
      VAR_0->priv->core->buffer_header_callback(VAR_0, VAR_1);
   }
   else
   {
      FUNC_0("event lost on port %i,%i (buffer header callback not defined)",
                (int)VAR_0->type, (int)VAR_0->index);
      FUNC_1(VAR_1);
   }
}

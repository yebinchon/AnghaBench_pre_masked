
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ length; int alloc_size; int data; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__* priv; } ;
struct TYPE_13__ {TYPE_1__* core; } ;
struct TYPE_12__ {TYPE_3__* connected_port; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,TYPE_4__*,TYPE_3__*,int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   FUNC_0("buffer %p from connected input port %p: data %p, alloc_size %u, length %u",
             VAR_2, VAR_1, VAR_2->data, VAR_2->alloc_size, VAR_2->length);




   if (VAR_1->type == VAR_0 && VAR_2->length)
   {
      MMAL_PORT_T* VAR_3 = VAR_1->priv->core->connected_port;
      FUNC_2(VAR_3, VAR_2);
      return;
   }


   FUNC_1(VAR_2);
}

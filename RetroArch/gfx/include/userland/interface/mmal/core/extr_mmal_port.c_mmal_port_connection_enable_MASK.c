
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_10__ {int * pool_for_connection; int core_owns_connection; } ;
struct TYPE_9__ {scalar_t__ type; int capabilities; TYPE_1__* priv; void* buffer_size; void* buffer_num; } ;
struct TYPE_8__ {TYPE_3__* core; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_PRIVATE_CORE_T ;
typedef int MMAL_POOL_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;
 int VAR_6 ;
 int * FUNC_3 (TYPE_2__*,void*,void*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_7, MMAL_PORT_T *VAR_8)
{
   MMAL_PORT_T *VAR_9 = VAR_7->type == VAR_4 ? VAR_7 : VAR_8;
   MMAL_PORT_T *VAR_10 = VAR_8->type == VAR_3 ? VAR_8 : VAR_7;
   MMAL_PORT_T *VAR_11 = (VAR_9->capabilities & VAR_1) ? VAR_9 : VAR_10;
   MMAL_PORT_PRIVATE_CORE_T *VAR_12 = VAR_11->priv->core;
   uint32_t VAR_13, VAR_14;
   MMAL_POOL_T *VAR_15;




   VAR_14 = FUNC_1(VAR_7->buffer_num, VAR_8->buffer_num);
   VAR_13 = FUNC_1(VAR_7->buffer_size, VAR_8->buffer_size);
   VAR_7->buffer_num = VAR_8->buffer_num = VAR_14;
   VAR_7->buffer_size = VAR_8->buffer_size = VAR_13;

   if (VAR_9->capabilities & VAR_2)
      VAR_13 = 0;

   if (!VAR_7->priv->core->core_owns_connection)
      return VAR_5;

   VAR_15 = FUNC_3(VAR_11, VAR_14, VAR_13);
   if (!VAR_15)
   {
      FUNC_0("failed to create pool for connection");
      return VAR_0;
   }

   VAR_12->pool_for_connection = VAR_15;
   FUNC_2(VAR_15, VAR_6, VAR_9);
   return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__ headers_num; int queue; } ;
struct TYPE_10__ {scalar_t__ type; size_t index; int is_enabled; int name; scalar_t__ userdata; } ;
struct TYPE_8__ {scalar_t__ time_disable; int ** output_queue; TYPE_4__** output_pool; } ;
struct TYPE_9__ {TYPE_1__ wrapper; } ;
typedef TYPE_1__ MMAL_WRAPPER_T ;
typedef TYPE_2__ MMAL_WRAPPER_PRIVATE_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_POOL_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;

MMAL_STATUS_T FUNC_8(MMAL_PORT_T *VAR_4)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_5 = (MMAL_WRAPPER_PRIVATE_T *)VAR_4->userdata;
   MMAL_WRAPPER_T *VAR_6 = &VAR_5->wrapper;
   int64_t VAR_7 = FUNC_6();
   MMAL_STATUS_T VAR_8;

   FUNC_1("%p, %s", VAR_6, VAR_4->name);

   if (VAR_4->type != VAR_1 && VAR_4->type != VAR_2)
      return VAR_0;

   if (!VAR_4->is_enabled)
      return VAR_3;


   VAR_8 = FUNC_3(VAR_4);
   if (VAR_8 != VAR_3)
   {
      FUNC_0("could not disable port");
      return VAR_8;
   }


   if (VAR_4->type == VAR_2)
   {
      MMAL_POOL_T *VAR_9 = VAR_6->output_pool[VAR_4->index];
      MMAL_QUEUE_T *VAR_10 = VAR_6->output_queue[VAR_4->index];
      MMAL_BUFFER_HEADER_T *VAR_11;

      while ((VAR_11 = FUNC_4(VAR_10)) != ((void*)0))
         FUNC_2(VAR_11);

      if ( !FUNC_7(FUNC_5(VAR_9->queue) == VAR_9->headers_num) )
      {
         FUNC_0("coul dnot release all buffers");
      }
   }

   VAR_6->time_disable = FUNC_6() - VAR_7;
   return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_11__ {int queue; } ;
struct TYPE_10__ {int is_enabled; void* time_enable; int flags; TYPE_6__* pool; int name; TYPE_1__* out; TYPE_1__* in; } ;
struct TYPE_9__ {int capabilities; scalar_t__ type; void* buffer_size; void* buffer_num; void* buffer_size_recommended; void* buffer_num_recommended; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (void*,void*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_6__*,void*,void*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (int ) ;
 void* FUNC_8 () ;

MMAL_STATUS_T FUNC_9(MMAL_CONNECTION_T *VAR_8)
{
   MMAL_PORT_T *VAR_9 = VAR_8->in, *VAR_10 = VAR_8->out;
   uint32_t VAR_11, VAR_12;
   MMAL_STATUS_T VAR_13;

   FUNC_1("%p, %s", VAR_8, VAR_8->name);

   if (VAR_8->is_enabled)
      return VAR_4;

   VAR_8->time_enable = FUNC_8();


   if (!(VAR_8->flags & VAR_0))
   {
      if (VAR_10->buffer_num_recommended)
         VAR_10->buffer_num = VAR_10->buffer_num_recommended;
      if (VAR_10->buffer_size_recommended)
         VAR_10->buffer_size = VAR_10->buffer_size_recommended;
      if (VAR_9->buffer_num_recommended)
         VAR_9->buffer_num = VAR_9->buffer_num_recommended;
      if (VAR_9->buffer_size_recommended)
         VAR_9->buffer_size = VAR_9->buffer_size_recommended;
   }


   if (VAR_8->flags & VAR_1)
   {


      VAR_13 = FUNC_5(VAR_10, ((void*)0));
      if (VAR_13)
         FUNC_0("output port couldn't be enabled");
      goto done;
   }


   VAR_11 = FUNC_2(VAR_10->buffer_num, VAR_9->buffer_num);
   VAR_12 = FUNC_2(VAR_10->buffer_size, VAR_9->buffer_size);
   VAR_10->buffer_num = VAR_9->buffer_num = VAR_11;
   VAR_10->buffer_size = VAR_9->buffer_size = VAR_12;


   if (VAR_10->capabilities & VAR_2)
      VAR_12 = 0;


   VAR_13 = FUNC_3(VAR_8->pool, VAR_11, VAR_12);
   if (VAR_13 != VAR_4)
   {
      FUNC_0("couldn't resize pool");
      goto done;
   }



   VAR_13 = FUNC_5(VAR_10, (VAR_10->type == VAR_3) ?
                             VAR_5 : VAR_7);
   if(VAR_13)
   {
      FUNC_0("output port couldn't be enabled");
      goto done;
   }



   VAR_13 = FUNC_5(VAR_9, (VAR_9->type == VAR_3) ?
                             VAR_5 : VAR_6);
   if(VAR_13)
   {
      FUNC_0("input port couldn't be enabled");
      FUNC_4(VAR_10);
      goto done;
   }



   if ((VAR_10->type == VAR_3) && (VAR_9->type == VAR_3))
   {
      MMAL_BUFFER_HEADER_T *VAR_14 = FUNC_7(VAR_8->pool->queue);
      while (VAR_14)
      {
         FUNC_6(VAR_10, VAR_14);
         VAR_14 = FUNC_7(VAR_8->pool->queue);
         if (VAR_14)
         {
            FUNC_6(VAR_9, VAR_14);
            VAR_14 = FUNC_7(VAR_8->pool->queue);
         }
      }
   }

 done:
   VAR_8->time_enable = FUNC_8() - VAR_8->time_enable;
   VAR_8->is_enabled = VAR_13 == VAR_4;
   return VAR_13;
}

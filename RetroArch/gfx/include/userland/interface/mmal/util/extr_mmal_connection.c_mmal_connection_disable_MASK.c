
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int is_enabled; void* time_disable; int flags; TYPE_1__* pool; int queue; int out; int in; int name; } ;
struct TYPE_5__ {scalar_t__ headers_num; int queue; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 void* FUNC_7 () ;

MMAL_STATUS_T FUNC_8(MMAL_CONNECTION_T *VAR_2)
{
   MMAL_STATUS_T VAR_3;
   MMAL_BUFFER_HEADER_T *VAR_4;

   FUNC_1("%p, %s", VAR_2, VAR_2->name);

   if (!VAR_2->is_enabled)
      return VAR_1;

   VAR_2->time_disable = FUNC_7();


   if (VAR_2->flags & VAR_0)
   {

      VAR_3 = FUNC_3(VAR_2->out);
      if (VAR_3)
         FUNC_0("output port couldn't be disabled");
      goto done;
   }


   VAR_3 = FUNC_3(VAR_2->in);
   if(VAR_3)
   {
      FUNC_0("input port couldn't be disabled");
      goto done;
   }


   VAR_3 = FUNC_3(VAR_2->out);
   if(VAR_3)
   {
      FUNC_0("output port couldn't be disabled");
      goto done;
   }


   VAR_4 = FUNC_4(VAR_2->queue);
   while (VAR_4)
   {
      FUNC_2(VAR_4);
      VAR_4 = FUNC_4(VAR_2->queue);
   }
   FUNC_6(FUNC_5(VAR_2->pool->queue) == VAR_2->pool->headers_num);

 done:
   VAR_2->time_disable = FUNC_7() - VAR_2->time_disable;
   VAR_2->is_enabled = !(VAR_3 == VAR_1);
   return VAR_3;
}

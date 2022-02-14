
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int ctx; int (* stop_cb ) (int ,scalar_t__) ;} ;
struct TYPE_9__ {int sema; TYPE_1__* out_pool; TYPE_3__ callbacks; TYPE_4__* video_output; } ;
struct TYPE_8__ {int queue; } ;
typedef TYPE_2__ SVP_T ;
typedef TYPE_3__ SVP_CALLBACKS_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void *FUNC_8(void *VAR_1)
{
   SVP_T *VAR_2 = VAR_1;
   MMAL_PORT_T *VAR_3 = VAR_2->video_output;
   SVP_CALLBACKS_T *VAR_4 = &VAR_2->callbacks;
   MMAL_BUFFER_HEADER_T *VAR_5;
   MMAL_STATUS_T VAR_6;
   uint32_t VAR_7;

   while (FUNC_5(VAR_2) == 0)
   {

      while ((VAR_5 = FUNC_3(VAR_2->out_pool->queue)) != ((void*)0))
      {
         VAR_6 = FUNC_2(VAR_3, VAR_5);
         if (VAR_6 != VAR_0)
         {
            FUNC_0("Failed to send buffer to %s", VAR_3->name);
         }
      }


      FUNC_6(VAR_2);


      FUNC_7(&VAR_2->sema);
   }


   FUNC_6(VAR_2);


   VAR_7 = FUNC_5(VAR_2);
   FUNC_1("Worker thread exiting: stop=0x%x", (unsigned)VAR_7);
   VAR_4->stop_cb(VAR_4->ctx, VAR_7);

   return ((void*)0);
}

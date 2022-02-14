
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int name; } ;
struct TYPE_11__ {int (* create_native_window ) (TYPE_3__*) ;int (* gl_init ) (TYPE_3__*) ;int (* gl_term ) (TYPE_3__*) ;} ;
struct TYPE_12__ {int preview_stop; TYPE_2__ ops; int preview_queue; TYPE_1__* preview_pool; TYPE_4__* preview_port; } ;
struct TYPE_10__ {int queue; } ;
typedef TYPE_3__ RASPITEX_STATE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void *FUNC_9(void *VAR_2)
{
   RASPITEX_STATE* VAR_3 = VAR_2;
   MMAL_PORT_T *VAR_4 = VAR_3->preview_port;
   MMAL_BUFFER_HEADER_T *VAR_5;
   MMAL_STATUS_T VAR_6;
   int VAR_7;

   FUNC_8("%s: port %p", VAR_1, VAR_4);

   VAR_7 = VAR_3->ops.create_native_window(VAR_3);
   if (VAR_7 != 0)
      goto end;

   VAR_7 = VAR_3->ops.gl_init(VAR_3);
   if (VAR_7 != 0)
      goto end;

   while (VAR_3->preview_stop == 0)
   {

      while ((VAR_5 = FUNC_2(VAR_3->preview_pool->queue)) != ((void*)0))
      {
         VAR_6 = FUNC_1(VAR_4, VAR_5);
         if (VAR_6 != VAR_0)
         {
            FUNC_7("Failed to send buffer to %s", VAR_4->name);
         }
      }

      if (FUNC_3(VAR_3) != 0)
      {
         FUNC_7("Preview error. Exiting.");
         VAR_3->preview_stop = 1;
      }
   }

end:

   while ((VAR_5 = FUNC_2(VAR_3->preview_queue)) != ((void*)0))
      FUNC_0(VAR_5);


   VAR_3->ops.gl_term(VAR_3);
   FUNC_8("Exiting preview worker");
   return ((void*)0);
}

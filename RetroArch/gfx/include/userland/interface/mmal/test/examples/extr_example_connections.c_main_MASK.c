
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_19__ {void* userdata; } ;
struct TYPE_18__ {int * input; int * output; TYPE_5__* control; } ;
struct TYPE_17__ {int flags; int in; int queue; int out; TYPE_1__* pool; void* callback; TYPE_14__* user_data; } ;
struct TYPE_16__ {int queue; } ;
struct TYPE_15__ {scalar_t__ status; int semaphore; scalar_t__ eos; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 void* VAR_5 ;
 TYPE_14__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__**) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__**,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int * FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_5__*,char*) ;
 int VAR_8 ;
 unsigned int FUNC_14 (TYPE_2__**) ;
 int FUNC_15 (int *,char*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(int VAR_9, char **VAR_10)
{
   MMAL_STATUS_T VAR_11;
   MMAL_COMPONENT_T *VAR_12 = 0, *VAR_13 = 0, *VAR_14 = 0;
   MMAL_CONNECTION_T *VAR_15[2] = {0};
   unsigned int VAR_16, VAR_17, VAR_18 = FUNC_14(VAR_15);

   if (VAR_9 < 2)
   {
      FUNC_2(VAR_8, "invalid arguments\n");
      return -1;
   }

   FUNC_1();

   FUNC_15(&VAR_6.semaphore, "example", 1);


   VAR_11 = FUNC_3(VAR_0, &VAR_12);
   FUNC_0(VAR_11, "failed to create reader");
   VAR_12->control->userdata = (void *)&VAR_6;
   VAR_11 = FUNC_10(VAR_12->control, VAR_7);
   FUNC_0(VAR_11, "failed to enable control port");
   VAR_11 = FUNC_5(VAR_12);
   FUNC_0(VAR_11, "failed to enable component");

   VAR_11 = FUNC_3(VAR_1, &VAR_13);
   FUNC_0(VAR_11, "failed to create decoder");
   VAR_13->control->userdata = (void *)&VAR_6;
   VAR_11 = FUNC_10(VAR_13->control, VAR_7);
   FUNC_0(VAR_11, "failed to enable control port");
   VAR_11 = FUNC_5(VAR_13);
   FUNC_0(VAR_11, "failed to enable component");

   VAR_11 = FUNC_3(VAR_2, &VAR_14);
   FUNC_0(VAR_11, "failed to create renderer");
   VAR_14->control->userdata = (void *)&VAR_6;
   VAR_11 = FUNC_10(VAR_14->control, VAR_7);
   FUNC_0(VAR_11, "failed to enable control port");
   VAR_11 = FUNC_5(VAR_14);
   FUNC_0(VAR_11, "failed to enable component");


   VAR_11 = FUNC_13(VAR_12->control, VAR_10[1]);
   FUNC_0(VAR_11, "failed to set uri");


   VAR_11 = FUNC_6(&VAR_15[0], VAR_12->output[0], VAR_13->input[0], 0);
   FUNC_0(VAR_11, "failed to create connection between reader / decoder");
   VAR_15[0]->user_data = &VAR_6;
   VAR_15[0]->callback = VAR_5;
   VAR_11 = FUNC_6(&VAR_15[1], VAR_13->output[0], VAR_14->input[0], 0);
   FUNC_0(VAR_11, "failed to create connection between decoder / renderer");
   VAR_15[1]->user_data = &VAR_6;
   VAR_15[1]->callback = VAR_5;


   for (VAR_16 = VAR_18; VAR_16; VAR_16--)
   {
      VAR_11 = FUNC_9(VAR_15[VAR_16-1]);
      FUNC_0(VAR_11, "failed to enable connection");
   }


   FUNC_2(VAR_8, "start playback\n");


   for (VAR_17 = 0; VAR_17 < 500; VAR_17++)
   {
      MMAL_BUFFER_HEADER_T *VAR_19;
      FUNC_17(&VAR_6.semaphore);


      VAR_11 = VAR_6.status;
      FUNC_0(VAR_11, "error during playback");


      if (VAR_6.eos)
         break;


      for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++)
      {
         if (VAR_15[VAR_16]->flags & VAR_3)
            continue;


         while ((VAR_19 = FUNC_12(VAR_15[VAR_16]->pool->queue)) != ((void*)0))
         {
            VAR_11 = FUNC_11(VAR_15[VAR_16]->out, VAR_19);
            FUNC_0(VAR_11, "failed to send buffer");
         }


         while ((VAR_19 = FUNC_12(VAR_15[VAR_16]->queue)) != ((void*)0))
         {
            VAR_11 = FUNC_11(VAR_15[VAR_16]->in, VAR_19);
            FUNC_0(VAR_11, "failed to send buffer");
         }
      }
   }


   FUNC_2(VAR_8, "stop playback\n");
   for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++)
   {
      FUNC_8(VAR_15[VAR_16]);
   }

 error:

   for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++)
   {
      if (VAR_15[VAR_16])
         FUNC_7(VAR_15[VAR_16]);
   }
   if (VAR_12)
      FUNC_4(VAR_12);
   if (VAR_13)
      FUNC_4(VAR_13);
   if (VAR_14)
      FUNC_4(VAR_14);

   FUNC_16(&VAR_6.semaphore);
   return VAR_11 == VAR_4 ? 0 : -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * input; int * output; int control; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;


 int FUNC_0 (scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_1__**) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int) ;
 int VAR_4 ;

int FUNC_12(int VAR_5, char **VAR_6)
{
   MMAL_STATUS_T VAR_7;
   MMAL_GRAPH_T *VAR_8 = 0;
   MMAL_COMPONENT_T *VAR_9 = 0, *VAR_10 = 0, *VAR_11 = 0;

   if (VAR_5 < 2)
   {
      FUNC_2(VAR_4, "invalid arguments\n");
      return -1;
   }

   FUNC_1();


   VAR_7 = FUNC_4(&VAR_8, 0);
   FUNC_0(VAR_7, "failed to create graph");


   VAR_7 = FUNC_8(VAR_8, VAR_0, &VAR_9);
   FUNC_0(VAR_7, "failed to create reader");

   VAR_7 = FUNC_8(VAR_8, VAR_1, &VAR_10);
   FUNC_0(VAR_7, "failed to create decoder");

   VAR_7 = FUNC_8(VAR_8, VAR_2, &VAR_11);
   FUNC_0(VAR_7, "failed to create renderer");


   VAR_7 = FUNC_10(VAR_9->control, VAR_6[1]);
   FUNC_0(VAR_7, "failed to set uri");


   VAR_7 = FUNC_9(VAR_8, VAR_9->output[0], VAR_10->input[0], 0, ((void*)0));
   FUNC_0(VAR_7, "failed to connect reader to decoder");
   VAR_7 = FUNC_9(VAR_8, VAR_10->output[0], VAR_11->input[0], 0, ((void*)0));
   FUNC_0(VAR_7, "failed to connect decoder to renderer");


   FUNC_2(VAR_4, "start playback\n");
   VAR_7 = FUNC_7(VAR_8, ((void*)0), ((void*)0));
   FUNC_0(VAR_7, "failed to enable graph");

   FUNC_11(5);


   FUNC_2(VAR_4, "stop playback\n");
   FUNC_6(VAR_8);

 error:

   if (VAR_9)
      FUNC_3(VAR_9);
   if (VAR_10)
      FUNC_3(VAR_10);
   if (VAR_11)
      FUNC_3(VAR_11);
   if (VAR_8)
      FUNC_5(VAR_8);

   return VAR_7 == VAR_3 ? 0 : -1;
}

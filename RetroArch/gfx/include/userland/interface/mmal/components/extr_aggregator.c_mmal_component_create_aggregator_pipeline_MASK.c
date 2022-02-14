
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct MMAL_COMPONENT_MODULE_T {int dummy; } ;
struct TYPE_16__ {int input_num; int output_num; TYPE_1__* priv; scalar_t__* output; scalar_t__* input; } ;
struct TYPE_15__ {int pf_parameter_set; int pf_parameter_get; } ;
struct TYPE_14__ {struct MMAL_COMPONENT_MODULE_T* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_GRAPH_USERDATA_T ;
typedef TYPE_2__ MMAL_GRAPH_T ;
typedef int MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*,TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int **,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_8 (char const*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_2__**,int) ;
 int FUNC_10 (TYPE_2__*) ;
 unsigned int FUNC_11 (char const*) ;
 char* FUNC_12 (int,unsigned int,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_14(const char *VAR_4,
   const char *VAR_5, MMAL_COMPONENT_T *VAR_6)
{
   MMAL_GRAPH_T *VAR_7 = 0;
   MMAL_COMPONENT_T *VAR_8[2] = {0};
   MMAL_STATUS_T VAR_9 = VAR_0;
   unsigned int VAR_10;
   char *VAR_11, *VAR_12;

   VAR_10 = FUNC_11(VAR_5);
   VAR_12 = VAR_11 = FUNC_12(1, VAR_10 + 1, "mmal aggregator");
   if (!VAR_12)
      goto error;
   FUNC_0(VAR_12, VAR_5, VAR_10);


   VAR_9 = FUNC_9(&VAR_7, sizeof(MMAL_GRAPH_USERDATA_T));
   if (VAR_9 != VAR_1)
      goto error;
   VAR_7->pf_parameter_get = VAR_2;
   VAR_7->pf_parameter_set = VAR_3;


   while (*VAR_12)
   {
      MMAL_CONNECTION_T *VAR_13;
      const char *VAR_14;


      if (VAR_8[0])
         FUNC_2(VAR_8[0]);
      VAR_8[0] = VAR_8[1];
      VAR_8[1] = 0;


      for (VAR_14 = VAR_12; *VAR_12 && *VAR_12 != ':'; VAR_12++);


      if (*VAR_12)
         *(VAR_12++) = 0;


      if (!*VAR_14)
         continue;

      VAR_9 = FUNC_1(VAR_14, &VAR_8[1]);
      if (VAR_9 != VAR_1)
         goto error;

      VAR_9 = FUNC_5(VAR_7, VAR_8[1]);
      if (VAR_9 != VAR_1)
         goto error;


      if (!VAR_8[0])
      {

         if (VAR_8[1]->input_num)
         {
            VAR_9 = FUNC_7(VAR_7, VAR_8[1]->input[0]);
            if (VAR_9 != VAR_1)
               goto error;
         }
         continue;
      }


      if (VAR_8[0]->output_num < 1 || VAR_8[1]->input_num < 1)
         goto error;
      VAR_9 = FUNC_3(&VAR_13, VAR_8[0]->output[0],
         VAR_8[1]->input[0], 0);
      if (VAR_9 != VAR_1)
         goto error;

      VAR_9 = FUNC_6(VAR_7, VAR_13);

      FUNC_4(VAR_13);
      if (VAR_9 != VAR_1)
         goto error;
   }


   if (VAR_8[1] && VAR_8[1]->output_num && VAR_8[1]->output[0])
   {
      VAR_9 = FUNC_7(VAR_7, VAR_8[1]->output[0]);
      if (VAR_9 != VAR_1)
         goto error;
   }


   VAR_6->priv->module = (struct MMAL_COMPONENT_MODULE_T *)VAR_7;
   VAR_9 = FUNC_8(VAR_4, VAR_6);
   if (VAR_9 != VAR_1)
      goto error;

 end:
   if (VAR_8[0])
      FUNC_2(VAR_8[0]);
   if (VAR_8[1])
      FUNC_2(VAR_8[1]);
   FUNC_13(VAR_11);
   return VAR_9;

 error:
   if (VAR_7)
      FUNC_10(VAR_7);
   goto end;
}

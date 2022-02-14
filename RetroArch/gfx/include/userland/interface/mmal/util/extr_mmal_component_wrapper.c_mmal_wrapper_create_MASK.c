
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_17__ {void* userdata; } ;
struct TYPE_16__ {void* userdata; } ;
struct TYPE_15__ {int input_num; int output_num; TYPE_8__** output; TYPE_8__** input; TYPE_9__* control; } ;
struct TYPE_13__ {unsigned int input_num; unsigned int output_num; scalar_t__ time_setup; TYPE_9__* control; TYPE_8__** output; int ** output_pool; int ** output_queue; TYPE_8__** input; int ** input_pool; TYPE_3__* component; } ;
struct TYPE_14__ {TYPE_1__ wrapper; int sema; } ;
typedef TYPE_1__ MMAL_WRAPPER_T ;
typedef TYPE_2__ MMAL_WRAPPER_PRIVATE_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef int MMAL_POOL_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,TYPE_1__**,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char const*,TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ,void*) ;
 scalar_t__ FUNC_4 (TYPE_9__*,int ) ;
 void* FUNC_5 (TYPE_8__*,int ,int ) ;
 int * FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_2__* FUNC_8 (int,int,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int *,char*,int ) ;

MMAL_STATUS_T FUNC_12(MMAL_WRAPPER_T **VAR_6, const char *VAR_7)
{
   MMAL_STATUS_T VAR_8;
   MMAL_COMPONENT_T *VAR_9;
   MMAL_WRAPPER_PRIVATE_T *VAR_10;
   MMAL_WRAPPER_T *VAR_11;
   int64_t VAR_12;
   unsigned int VAR_13, VAR_14;

   FUNC_0("wrapper %p, name %s", VAR_6, VAR_7);


   if (!VAR_6 || !VAR_7)
      return VAR_0;

   VAR_12 = FUNC_10();

   VAR_8 = FUNC_1(VAR_7, &VAR_9);
   if (VAR_8 != VAR_2)
      return VAR_8;

   VAR_14 = (VAR_9->input_num * sizeof(MMAL_POOL_T*)) + (VAR_9->output_num * (sizeof(MMAL_POOL_T*) + sizeof(MMAL_QUEUE_T*)));
   VAR_10 = FUNC_8(1, sizeof(*VAR_10) + VAR_14, "mmal wrapper");
   if (!VAR_10)
   {
      FUNC_2(VAR_9);
      return VAR_1;
   }

   if (FUNC_11(&VAR_10->sema, "mmal wrapper", 0) != VAR_3)
   {
      FUNC_2(VAR_9);
      FUNC_9(VAR_10);
      return VAR_1;
   }

   VAR_11 = &VAR_10->wrapper;
   VAR_11->component = VAR_9;
   VAR_11->control = VAR_9->control;
   VAR_11->input_num = VAR_9->input_num;
   VAR_11->input = VAR_9->input;
   VAR_11->output_num = VAR_9->output_num;
   VAR_11->output = VAR_9->output;
   VAR_11->input_pool = (MMAL_POOL_T **)&VAR_10[1];
   VAR_11->output_pool = (MMAL_POOL_T **)&VAR_11->input_pool[VAR_9->input_num];
   VAR_11->output_queue = (MMAL_QUEUE_T **)&VAR_11->output_pool[VAR_9->output_num];


   for (VAR_13 = 0; VAR_13 < VAR_11->input_num; VAR_13++)
   {
      VAR_11->input_pool[VAR_13] = FUNC_5(VAR_11->input[VAR_13], 0, 0);
      if (!VAR_11->input_pool[VAR_13])
         goto error;
      FUNC_3(VAR_11->input_pool[VAR_13], VAR_4, (void *)VAR_11);

      VAR_11->input[VAR_13]->userdata = (void *)VAR_11;
   }
   for (VAR_13 = 0; VAR_13 < VAR_11->output_num; VAR_13++)
   {
      VAR_11->output_pool[VAR_13] = FUNC_5(VAR_11->output[VAR_13], 0, 0);
      VAR_11->output_queue[VAR_13] = FUNC_6();
      if (!VAR_11->output_pool[VAR_13] || !VAR_11->output_queue[VAR_13])
         goto error;
      FUNC_3(VAR_11->output_pool[VAR_13], VAR_4, (void *)VAR_11);

      VAR_11->output[VAR_13]->userdata = (void *)VAR_11;
   }


   VAR_11->control->userdata = (void *)VAR_11;
   VAR_8 = FUNC_4(VAR_11->control, VAR_5);
   if (VAR_8 != VAR_2)
      goto error;

   VAR_11->time_setup = FUNC_10() - VAR_12;
   *VAR_6 = VAR_11;
   return VAR_2;

 error:
   FUNC_7(VAR_11);
   return VAR_8 == VAR_2 ? VAR_1 : VAR_8;
}

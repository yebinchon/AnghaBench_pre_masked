
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int queue; } ;
struct TYPE_9__ {scalar_t__ type; size_t index; int name; scalar_t__ userdata; } ;
struct TYPE_7__ {scalar_t__ status; TYPE_4__** output_pool; TYPE_4__** input_pool; } ;
struct TYPE_8__ {int sema; TYPE_1__ wrapper; } ;
typedef TYPE_1__ MMAL_WRAPPER_T ;
typedef TYPE_2__ MMAL_WRAPPER_PRIVATE_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_POOL_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_6, MMAL_BUFFER_HEADER_T **VAR_7,
   uint32_t VAR_8)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_9 = (MMAL_WRAPPER_PRIVATE_T *)VAR_6->userdata;
   MMAL_WRAPPER_T *VAR_10 = &VAR_9->wrapper;
   MMAL_POOL_T *VAR_11;

   FUNC_0("%p, %s", VAR_10, VAR_6->name);

   if (!VAR_7 || (VAR_6->type != VAR_2 && VAR_6->type != VAR_3))
      return VAR_1;

   VAR_11 = VAR_6->type == VAR_2 ?
      VAR_10->input_pool[VAR_6->index] : VAR_10->output_pool[VAR_6->index];

   while (VAR_10->status == VAR_4 &&
          (*VAR_7 = FUNC_1(VAR_11->queue)) == ((void*)0))
   {
      if (!(VAR_8 & VAR_5))
         break;
      FUNC_2(&VAR_9->sema);
   }

   return VAR_10->status == VAR_4 && !*VAR_7 ? VAR_0 : VAR_10->status;
}

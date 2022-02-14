
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ type; size_t index; int name; scalar_t__ userdata; } ;
struct TYPE_6__ {scalar_t__ status; int ** output_queue; } ;
struct TYPE_7__ {int sema; TYPE_1__ wrapper; } ;
typedef TYPE_1__ MMAL_WRAPPER_T ;
typedef TYPE_2__ MMAL_WRAPPER_PRIVATE_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_5, MMAL_BUFFER_HEADER_T **VAR_6,
   uint32_t VAR_7)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_8 = (MMAL_WRAPPER_PRIVATE_T *)VAR_5->userdata;
   MMAL_WRAPPER_T *VAR_9 = &VAR_8->wrapper;
   MMAL_QUEUE_T *VAR_10;

   FUNC_0("%p, %s", VAR_9, VAR_5->name);

   if (!VAR_6 || VAR_5->type != VAR_2)
      return VAR_1;
   VAR_10 = VAR_9->output_queue[VAR_5->index];

   while (VAR_9->status == VAR_3 &&
          (*VAR_6 = FUNC_1(VAR_10)) == ((void*)0))
   {
      if (!(VAR_7 & VAR_4))
         break;
      FUNC_2(&VAR_8->sema);
   }

   return VAR_9->status == VAR_3 && !*VAR_6 ? VAR_0 : VAR_9->status;
}

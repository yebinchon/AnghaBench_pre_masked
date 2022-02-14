
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_10__ {int member_1; int member_0; } ;
struct TYPE_14__ {int member_1; int hdr; TYPE_1__ member_0; } ;
struct TYPE_13__ {scalar_t__ type; size_t index; int buffer_size; scalar_t__ buffer_num; int name; scalar_t__ is_enabled; scalar_t__ userdata; } ;
struct TYPE_11__ {int time_enable; int ** output_pool; int ** input_pool; } ;
struct TYPE_12__ {TYPE_2__ wrapper; } ;
typedef TYPE_2__ MMAL_WRAPPER_T ;
typedef TYPE_3__ MMAL_WRAPPER_PRIVATE_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;
typedef TYPE_5__ MMAL_PARAMETER_BOOLEAN_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 () ;

MMAL_STATUS_T FUNC_6(MMAL_PORT_T *VAR_10, uint32_t VAR_11)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_12 = (MMAL_WRAPPER_PRIVATE_T *)VAR_10->userdata;
   MMAL_WRAPPER_T *VAR_13 = &VAR_12->wrapper;
   int64_t VAR_14 = FUNC_5();
   uint32_t VAR_15;
   MMAL_STATUS_T VAR_16;
   MMAL_POOL_T *VAR_17;

   FUNC_1("%p, %s", VAR_13, VAR_10->name);

   if (VAR_10->type != VAR_3 && VAR_10->type != VAR_4)
      return VAR_0;

   if (VAR_10->is_enabled)
      return VAR_5;

   VAR_17 = VAR_10->type == VAR_3 ?
      VAR_13->input_pool[VAR_10->index] : VAR_13->output_pool[VAR_10->index];
   VAR_15 = (VAR_11 & VAR_6) ? VAR_10->buffer_size : 0;



   if (VAR_11 & VAR_7)
   {
      MMAL_PARAMETER_BOOLEAN_T VAR_18 =
         {{VAR_2, sizeof(MMAL_PARAMETER_BOOLEAN_T)}, 1};
      VAR_16 = FUNC_4(VAR_10, &VAR_18.hdr);
      if (VAR_16 != VAR_5 && VAR_16 != VAR_1)
      {
         FUNC_0("failed to set zero copy on %s", VAR_10->name);
         return VAR_16;
      }
   }


   VAR_16 = FUNC_2(VAR_17, VAR_10->buffer_num, VAR_15);
   if (VAR_16 != VAR_5)
   {
      FUNC_0("could not resize pool (%i/%i)", (int)VAR_10->buffer_num, (int)VAR_15);
      return VAR_16;
   }



   VAR_16 = FUNC_3(VAR_10, VAR_10->type == VAR_3 ?
                             VAR_8 : VAR_9);
   if (VAR_16 != VAR_5)
   {
      FUNC_0("could not enable port");
      return VAR_16;
   }

   VAR_13->time_enable += FUNC_5() - VAR_14;
   return VAR_5;
}

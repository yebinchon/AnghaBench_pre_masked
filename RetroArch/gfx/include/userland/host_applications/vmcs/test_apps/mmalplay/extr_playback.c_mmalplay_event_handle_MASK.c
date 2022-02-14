
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cmd; scalar_t__ length; } ;
struct TYPE_12__ {int buffer_size_min; int buffer_size_recommended; int buffer_num_min; int buffer_num_recommended; int format; } ;
struct TYPE_11__ {scalar_t__ type; int format; int name; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef int MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_CONNECTION_T *VAR_3, MMAL_PORT_T *VAR_4,
   MMAL_BUFFER_HEADER_T *VAR_5)
{
   MMAL_STATUS_T VAR_6 = VAR_2;

   FUNC_0("%s(%p) received event %4.4s (%i bytes)", VAR_4->name, VAR_4,
            (char *)&VAR_5->cmd, (int)VAR_5->length);

   if (VAR_5->cmd == VAR_0 && VAR_4->type == VAR_1)
   {
      MMAL_EVENT_FORMAT_CHANGED_T *VAR_7 = FUNC_4(VAR_5);
      if (VAR_7)
      {
         FUNC_0("----------Port format changed----------");
         FUNC_1(VAR_4->format, VAR_4);
         FUNC_0("-----------------to---------------------");
         FUNC_1(VAR_7->format, 0);
         FUNC_0(" buffers num (opt %i, min %i), size (opt %i, min: %i)",
                  VAR_7->buffer_num_recommended, VAR_7->buffer_num_min,
                  VAR_7->buffer_size_recommended, VAR_7->buffer_size_min);
         FUNC_0("----------------------------------------");
      }

      VAR_6 = FUNC_3(VAR_3, VAR_5);
   }

   FUNC_2(VAR_5);
   return VAR_6;
}

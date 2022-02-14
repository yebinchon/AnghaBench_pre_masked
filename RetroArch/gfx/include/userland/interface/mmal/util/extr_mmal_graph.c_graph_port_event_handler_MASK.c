
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ cmd; } ;
struct TYPE_14__ {int buffer_size_min; int buffer_size_recommended; int buffer_num_min; int buffer_num_recommended; int format; } ;
struct TYPE_13__ {scalar_t__ type; int component; int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef int MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,TYPE_1__*,TYPE_3__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(MMAL_CONNECTION_T *VAR_3,
   MMAL_PORT_T *VAR_4, MMAL_BUFFER_HEADER_T *VAR_5)
{
   MMAL_STATUS_T VAR_6;

   FUNC_1("port: %s(%p), buffer: %p, event: %4.4s", VAR_4->name, VAR_4,
             VAR_5, (char *)&VAR_5->cmd);

   if (VAR_5->cmd == VAR_0 && VAR_4->type == VAR_1)
   {
      MMAL_EVENT_FORMAT_CHANGED_T *VAR_7 = FUNC_5(VAR_5);
      if (VAR_7)
      {
         FUNC_0("----------Port format changed----------");
         FUNC_7(VAR_4);
         FUNC_0("-----------------to---------------------");
         FUNC_6(VAR_7->format);
         FUNC_0(" buffers num (opt %i, min %i), size (opt %i, min: %i)",
                   VAR_7->buffer_num_recommended, VAR_7->buffer_num_min,
                   VAR_7->buffer_size_recommended, VAR_7->buffer_size_min);
         FUNC_0("----------------------------------------");
      }

      VAR_6 = FUNC_3(VAR_3, VAR_5);
   }

   else
      VAR_6 = VAR_2;

   FUNC_2(VAR_5);

   if (VAR_6 != VAR_2)
      FUNC_4(VAR_4->component, VAR_6);
}

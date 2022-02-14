
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ cmd; scalar_t__ length; } ;
struct TYPE_15__ {int format; } ;
struct TYPE_14__ {size_t index; TYPE_1__* component; int name; int format; } ;
struct TYPE_13__ {int * output; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   MMAL_STATUS_T VAR_5 = VAR_0;

   if (VAR_4->cmd == VAR_1)
   {
      MMAL_EVENT_FORMAT_CHANGED_T *VAR_6 =
         FUNC_2(VAR_4);
      if (!VAR_6)
         goto end;

      VAR_5 = FUNC_4(VAR_3->format, VAR_6->format);
      if (VAR_5 == VAR_2)
         VAR_5 = FUNC_6(VAR_3);
      if (VAR_5 != VAR_2)
      {
         FUNC_1("format commit failed on port %s (%i)",
                   VAR_3->name, VAR_5);
         goto end;
      }

      VAR_5 = VAR_2;
   }

   else
   {
      FUNC_0("forwarding unknown event %4.4s", (char *)&VAR_4->cmd);
      VAR_5 = FUNC_3(VAR_4, VAR_3->component->output[VAR_3->index]);
      if (VAR_5 != VAR_2)
      {
         FUNC_1("unable to forward event %4.4s", (char *)&VAR_4->cmd);
         goto end;
      }
   }

 end:
   VAR_4->length = 0;
   FUNC_5(VAR_3, VAR_4);
   return VAR_5;
}

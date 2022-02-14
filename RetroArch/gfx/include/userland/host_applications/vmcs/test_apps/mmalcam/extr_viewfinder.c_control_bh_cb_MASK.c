
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cmd; int length; scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ size; int id; } ;
struct TYPE_12__ {TYPE_1__ hdr; } ;
struct TYPE_11__ {int status; } ;
struct TYPE_10__ {int value; } ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_PARAMETER_UINT32_T ;
typedef TYPE_3__ MMAL_PARAMETER_FOCUS_STATUS_T ;
typedef TYPE_4__ MMAL_EVENT_PARAMETER_CHANGED_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int *,TYPE_5__*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(MMAL_PORT_T *VAR_4, MMAL_BUFFER_HEADER_T *VAR_5)
{
   FUNC_0("control_bh_cb %p,%p (cmd=0x%08x)", VAR_4, VAR_5, VAR_5->cmd);
   if (VAR_5->cmd == VAR_1)
   {
      MMAL_EVENT_PARAMETER_CHANGED_T *VAR_6 = (MMAL_EVENT_PARAMETER_CHANGED_T *)VAR_5->data;

      FUNC_4(VAR_5->length >= sizeof(MMAL_EVENT_PARAMETER_CHANGED_T));
      FUNC_4(VAR_5->length == VAR_6->hdr.size);
      switch (VAR_6->hdr.id)
      {
         case 128:
            FUNC_4(VAR_6->hdr.size == sizeof(MMAL_PARAMETER_FOCUS_STATUS_T));
            {
               MMAL_PARAMETER_FOCUS_STATUS_T *VAR_7 = (MMAL_PARAMETER_FOCUS_STATUS_T *)VAR_6;
               FUNC_2("Focus status: %d", VAR_7->status);
               FUNC_5(&VAR_3, VAR_0, VAR_2);
            }
            break;
         case 129:
            FUNC_4(VAR_6->hdr.size == sizeof(MMAL_PARAMETER_UINT32_T));
            {
               MMAL_PARAMETER_UINT32_T *VAR_8 = (MMAL_PARAMETER_UINT32_T *)VAR_6;
               FUNC_2("Camera number: %d", VAR_8->value);
            }
            break;
         default:
            FUNC_1("Unexpected changed event for parameter 0x%08x", VAR_6->hdr.id);
      }
   }
   else
   {
      FUNC_1("Unexpected event, 0x%08x", VAR_5->cmd);
   }
   FUNC_3(VAR_5);
}

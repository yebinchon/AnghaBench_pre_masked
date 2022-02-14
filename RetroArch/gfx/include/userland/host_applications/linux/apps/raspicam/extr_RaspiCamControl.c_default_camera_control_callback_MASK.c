
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {int cmd; scalar_t__ data; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_17__ {TYPE_1__ hdr; } ;
struct TYPE_15__ {int den; int num; } ;
struct TYPE_14__ {int den; int num; } ;
struct TYPE_13__ {int den; int num; } ;
struct TYPE_12__ {int den; int num; } ;
struct TYPE_16__ {TYPE_5__ awb_blue_gain; TYPE_4__ awb_red_gain; TYPE_3__ digital_gain; TYPE_2__ analog_gain; int exposure; } ;
typedef int MMAL_PORT_T ;
typedef TYPE_6__ MMAL_PARAMETER_CAMERA_SETTINGS_T ;
typedef TYPE_7__ MMAL_EVENT_PARAMETER_CHANGED_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;

void FUNC_3(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   FUNC_0(VAR_2, "Camera control callback  cmd=0x%08x", VAR_4->cmd);

   if (VAR_4->cmd == VAR_1)
   {
      MMAL_EVENT_PARAMETER_CHANGED_T *VAR_5 = (MMAL_EVENT_PARAMETER_CHANGED_T *)VAR_4->data;
      switch (VAR_5->hdr.id)
      {
      case 128:
      {
         MMAL_PARAMETER_CAMERA_SETTINGS_T *VAR_6 = (MMAL_PARAMETER_CAMERA_SETTINGS_T*)VAR_5;
         FUNC_2("Exposure now %u, analog gain %u/%u, digital gain %u/%u",
                        VAR_6->exposure,
                        VAR_6->analog_gain.num, VAR_6->analog_gain.den,
                        VAR_6->digital_gain.num, VAR_6->digital_gain.den);
         FUNC_2("AWB R=%u/%u, B=%u/%u",
                        VAR_6->awb_red_gain.num, VAR_6->awb_red_gain.den,
                        VAR_6->awb_blue_gain.num, VAR_6->awb_blue_gain.den);
      }
      break;
      }
   }
   else if (VAR_4->cmd == VAR_0)
   {
      FUNC_2("No data received from sensor. Check all connections, including the Sunny one on the camera board");
   }
   else
   {
      FUNC_2("Received unexpected camera control callback event, 0x%08x", VAR_4->cmd);
   }

   FUNC_1(VAR_4);
}

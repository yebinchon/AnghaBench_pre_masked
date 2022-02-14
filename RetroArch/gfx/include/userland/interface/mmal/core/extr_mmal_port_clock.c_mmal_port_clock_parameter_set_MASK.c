
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_36__ {int value; } ;
struct TYPE_35__ {int value; } ;
struct TYPE_34__ {int id; } ;
struct TYPE_33__ {int value; } ;
struct TYPE_32__ {int value; } ;
struct TYPE_31__ {TYPE_3__* priv; } ;
struct TYPE_30__ {TYPE_2__* clock; } ;
struct TYPE_29__ {int (* event_cb ) (TYPE_4__*,TYPE_12__*) ;int buffer_info_reporting; } ;
struct TYPE_28__ {int request_threshold; int discont_threshold; int update_threshold; int media_time; int scale; int enable; } ;
struct TYPE_27__ {TYPE_1__ data; int id; } ;
struct TYPE_26__ {int enable; } ;
struct TYPE_25__ {int value; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_PARAMETER_RATIONAL_T ;
typedef TYPE_6__ MMAL_PARAMETER_INT64_T ;
typedef TYPE_7__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_8__ MMAL_PARAMETER_CLOCK_UPDATE_THRESHOLD_T ;
typedef TYPE_9__ MMAL_PARAMETER_CLOCK_REQUEST_THRESHOLD_T ;
typedef TYPE_10__ MMAL_PARAMETER_CLOCK_DISCONT_THRESHOLD_T ;
typedef TYPE_11__ MMAL_PARAMETER_BOOLEAN_T ;
typedef TYPE_12__ MMAL_CLOCK_EVENT_T ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,TYPE_12__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_10(MMAL_PORT_T *VAR_10, const MMAL_PARAMETER_HEADER_T *VAR_11)
{
   MMAL_STATUS_T VAR_12 = VAR_9;
   MMAL_CLOCK_EVENT_T VAR_13 = FUNC_1(VAR_2);

   switch (VAR_11->id)
   {
      case 132:
      {
         const MMAL_PARAMETER_BOOLEAN_T *VAR_14 = (const MMAL_PARAMETER_BOOLEAN_T*)VAR_11;
         VAR_12 = FUNC_5(VAR_10, VAR_14->enable);
         VAR_13.id = VAR_3;
         VAR_13.data.enable = VAR_14->enable;
      }
      break;
      case 135:
      {
         const MMAL_PARAMETER_BOOLEAN_T *VAR_15 = (const MMAL_PARAMETER_BOOLEAN_T*)VAR_11;
         VAR_12 = FUNC_2(VAR_10, VAR_15->enable);
         VAR_13.id = VAR_0;
         VAR_13.data.enable = VAR_15->enable;
      }
      break;
      case 130:
      {
         const MMAL_PARAMETER_RATIONAL_T *VAR_16 = (const MMAL_PARAMETER_RATIONAL_T*)VAR_11;
         VAR_12 = FUNC_7(VAR_10, VAR_16->value);
         VAR_13.id = VAR_5;
         VAR_13.data.scale = VAR_16->value;
      }
      break;
      case 129:
      {
         const MMAL_PARAMETER_INT64_T *VAR_17 = (const MMAL_PARAMETER_INT64_T*)VAR_11;
         VAR_12 = FUNC_4(VAR_10, VAR_17->value);
         VAR_13.id = VAR_6;
         VAR_13.data.media_time = VAR_17->value;
      }
      break;
      case 128:
      {
         const MMAL_PARAMETER_CLOCK_UPDATE_THRESHOLD_T *VAR_18 = (const MMAL_PARAMETER_CLOCK_UPDATE_THRESHOLD_T *)VAR_11;
         VAR_12 = FUNC_8(VAR_10, &VAR_18->value);
         VAR_13.id = VAR_7;
         VAR_13.data.update_threshold = VAR_18->value;
      }
      break;
      case 134:
      {
         const MMAL_PARAMETER_CLOCK_DISCONT_THRESHOLD_T *VAR_19 = (const MMAL_PARAMETER_CLOCK_DISCONT_THRESHOLD_T *)VAR_11;
         VAR_12 = FUNC_3(VAR_10, &VAR_19->value);
         VAR_13.id = VAR_1;
         VAR_13.data.discont_threshold = VAR_19->value;
      }
      break;
      case 131:
      {
         const MMAL_PARAMETER_CLOCK_REQUEST_THRESHOLD_T *VAR_20 = (const MMAL_PARAMETER_CLOCK_REQUEST_THRESHOLD_T *)VAR_11;
         VAR_12 = FUNC_6(VAR_10, &VAR_20->value);
         VAR_13.id = VAR_4;
         VAR_13.data.request_threshold = VAR_20->value;
      }
      break;
      case 133:
      {
         const MMAL_PARAMETER_BOOLEAN_T *VAR_21 = (const MMAL_PARAMETER_BOOLEAN_T*)VAR_11;
         VAR_10->priv->clock->buffer_info_reporting = VAR_21->enable;
         return VAR_9;
      }
      default:
         FUNC_0("unsupported clock parameter 0x%x", VAR_11->id);
         return VAR_8;
   }


   if (VAR_10->priv->clock->event_cb && VAR_12 == VAR_9)
      VAR_10->priv->clock->event_cb(VAR_10, &VAR_13);

   return VAR_12;
}

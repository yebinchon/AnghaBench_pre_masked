
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_22__ {int value; } ;
struct TYPE_21__ {int value; } ;
struct TYPE_20__ {int value; } ;
struct TYPE_19__ {int id; } ;
struct TYPE_18__ {int value; } ;
struct TYPE_17__ {int value; } ;
struct TYPE_16__ {int buffer_info_reporting; int clock; int is_reference; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {TYPE_3__* clock; } ;
struct TYPE_13__ {int enable; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_CLOCK_T ;
typedef TYPE_4__ MMAL_PARAMETER_RATIONAL_T ;
typedef TYPE_5__ MMAL_PARAMETER_INT64_T ;
typedef TYPE_6__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_7__ MMAL_PARAMETER_CLOCK_UPDATE_THRESHOLD_T ;
typedef TYPE_8__ MMAL_PARAMETER_CLOCK_REQUEST_THRESHOLD_T ;
typedef TYPE_9__ MMAL_PARAMETER_CLOCK_DISCONT_THRESHOLD_T ;
typedef TYPE_10__ MMAL_PARAMETER_BOOLEAN_T ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMAL_PORT_T *VAR_2, MMAL_PARAMETER_HEADER_T *VAR_3)
{
   MMAL_PORT_CLOCK_T *VAR_4 = VAR_2->priv->clock;
   MMAL_STATUS_T VAR_5 = VAR_1;

   switch (VAR_3->id)
   {
      case 132:
      {
         MMAL_PARAMETER_BOOLEAN_T *VAR_6 = (MMAL_PARAMETER_BOOLEAN_T*)VAR_3;
         VAR_6->enable = VAR_4->is_reference;
      }
      break;
      case 135:
      {
         MMAL_PARAMETER_BOOLEAN_T *VAR_7 = (MMAL_PARAMETER_BOOLEAN_T*)VAR_3;
         VAR_7->enable = FUNC_2(VAR_4->clock);
      }
      break;
      case 130:
      {
         MMAL_PARAMETER_RATIONAL_T *VAR_8 = (MMAL_PARAMETER_RATIONAL_T*)VAR_3;
         VAR_8->value = FUNC_5(VAR_4->clock);
      }
      break;
      case 129:
      {
         MMAL_PARAMETER_INT64_T *VAR_9 = (MMAL_PARAMETER_INT64_T*)VAR_3;
         VAR_9->value = FUNC_3(VAR_4->clock);
      }
      break;
      case 128:
      {
         MMAL_PARAMETER_CLOCK_UPDATE_THRESHOLD_T *VAR_10 = (MMAL_PARAMETER_CLOCK_UPDATE_THRESHOLD_T *)VAR_3;
         VAR_5 = FUNC_6(VAR_4->clock, &VAR_10->value);
      }
      break;
      case 134:
      {
         MMAL_PARAMETER_CLOCK_DISCONT_THRESHOLD_T *VAR_11 = (MMAL_PARAMETER_CLOCK_DISCONT_THRESHOLD_T *)VAR_3;
         VAR_5 = FUNC_1(VAR_4->clock, &VAR_11->value);
      }
      break;
      case 131:
      {
         MMAL_PARAMETER_CLOCK_REQUEST_THRESHOLD_T *VAR_12 = (MMAL_PARAMETER_CLOCK_REQUEST_THRESHOLD_T *)VAR_3;
         VAR_5 = FUNC_4(VAR_4->clock, &VAR_12->value);
      }
      break;
      case 133:
      {
         MMAL_PARAMETER_BOOLEAN_T *VAR_13 = (MMAL_PARAMETER_BOOLEAN_T*)VAR_3;
         VAR_13->enable = VAR_4->buffer_info_reporting;
      }
      break;
      default:
         FUNC_0("unsupported clock parameter 0x%x", VAR_3->id);
         return VAR_0;
   }

   return VAR_5;
}

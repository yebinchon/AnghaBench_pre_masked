
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_23__ {int eFormat; } ;
struct TYPE_22__ {int eLevel; int eProfile; } ;
struct TYPE_21__ {int eLevel; int eProfile; } ;
struct TYPE_20__ {int bForceRoundingTypeToZero; int bPLUSPTYPEAllowed; int eLevel; int eProfile; } ;
struct TYPE_24__ {TYPE_7__ wmv; TYPE_6__ avc; TYPE_5__ mpeg4; TYPE_4__ h263; } ;
struct TYPE_25__ {TYPE_13__* mmal; TYPE_8__ format_param; } ;
struct TYPE_17__ {int num; int den; } ;
struct TYPE_18__ {int width; int height; TYPE_1__ frame_rate; } ;
struct TYPE_19__ {TYPE_2__ video; } ;
struct TYPE_16__ {int name; TYPE_10__* format; } ;
struct TYPE_15__ {int role; TYPE_9__* ports; int registry_id; } ;
struct TYPE_14__ {int type; int bitrate; TYPE_3__* es; scalar_t__ encoding; } ;
typedef int OMX_ERRORTYPE ;
typedef scalar_t__ MMAL_FOURCC_T ;
typedef int MMAL_ES_TYPE_T ;
typedef TYPE_10__ MMAL_ES_FORMAT_T ;
typedef int MMALOMX_ROLE_T ;
typedef TYPE_11__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,int ,char const*) ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (int const,scalar_t__*,int*,unsigned int*) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (char const*) ;

OMX_ERRORTYPE FUNC_5(MMALOMX_COMPONENT_T *VAR_14, const char *VAR_15)
{
   const MMALOMX_ROLE_T VAR_16 = FUNC_4(VAR_15);
   MMAL_FOURCC_T VAR_17 = VAR_0;
   MMAL_ES_TYPE_T VAR_18 = VAR_1;
   unsigned int VAR_19;
   MMAL_ES_FORMAT_T *VAR_20;

   if (!VAR_16 || !FUNC_3(VAR_14->registry_id, VAR_16))
      return VAR_4;

   VAR_14->role = VAR_16;

   FUNC_2(VAR_16, &VAR_17, &VAR_18, &VAR_19);
   if (VAR_17 == VAR_0)
      return VAR_3;

   VAR_20 = VAR_14->ports[VAR_19].mmal->format;
   VAR_20->type = VAR_18;
   VAR_20->encoding = VAR_17;
   VAR_20->bitrate = 64000;
   switch (VAR_18)
   {
   case 128:
      VAR_20->es->video.width = 176;
      VAR_20->es->video.height = 144;
      VAR_20->es->video.frame_rate.num = 15;
      VAR_20->es->video.frame_rate.den = 1;
      break;
   default:
      break;
   }

   switch (VAR_16)
   {
   case 134:
   case 130:
      VAR_14->ports[VAR_19].format_param.h263.eProfile = VAR_10;
      VAR_14->ports[VAR_19].format_param.h263.eLevel = VAR_9;
      VAR_14->ports[VAR_19].format_param.h263.bPLUSPTYPEAllowed = VAR_5;
      VAR_14->ports[VAR_19].format_param.h263.bForceRoundingTypeToZero = VAR_6;
      break;
   case 133:
   case 129:
      VAR_14->ports[VAR_19].format_param.mpeg4.eProfile = VAR_12;
      VAR_14->ports[VAR_19].format_param.mpeg4.eLevel = VAR_11;
      break;
   case 135:
   case 131:
      VAR_14->ports[VAR_19].format_param.avc.eProfile = VAR_8;
      VAR_14->ports[VAR_19].format_param.avc.eLevel = VAR_7;
      break;
   case 132:
      VAR_14->ports[VAR_19].format_param.wmv.eFormat = VAR_13;
      break;
   default:
      break;
   }

   if (FUNC_1(VAR_14->ports[VAR_19].mmal) != VAR_2)
      FUNC_0("failed to commit format to %s for role %s",
                VAR_14->ports[VAR_19].mmal->name, VAR_15);

   return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_28__ {int zero_copy; TYPE_15__* mmal; } ;
struct TYPE_27__ {int eEncoding; int nPortIndex; } ;
struct TYPE_26__ {int bEnabled; int nPortIndex; } ;
struct TYPE_25__ {int nPortIndex; } ;
struct TYPE_24__ {scalar_t__ cRole; } ;
struct TYPE_23__ {int nPortIndex; } ;
struct TYPE_22__ {int nGroupID; int nGroupPriority; } ;
struct TYPE_21__ {int eColorFormat; int eCompressionFormat; int nPortIndex; } ;
struct TYPE_20__ {int encoding_variant; int encoding; } ;
struct TYPE_19__ {TYPE_1__* format; } ;
struct TYPE_18__ {scalar_t__ state; int group_id; int group_priority; } ;
typedef TYPE_2__ OMX_VIDEO_PARAM_PORTFORMATTYPE ;
typedef int OMX_VERSIONTYPE ;
typedef int OMX_U32 ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_3__ OMX_PRIORITYMGMTTYPE ;
typedef TYPE_4__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef TYPE_5__ OMX_PARAM_COMPONENTROLETYPE ;
typedef TYPE_6__ OMX_PARAM_BUFFERSUPPLIERTYPE ;
typedef int OMX_INDEXTYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_7__ OMX_CONFIG_PORTBOOLEANTYPE ;
typedef TYPE_8__ OMX_AUDIO_PARAM_PORTFORMATTYPE ;
typedef TYPE_9__ MMALOMX_PORT_T ;
typedef TYPE_10__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,int,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;







 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_9__*,TYPE_10__*,int ) ;
 int FUNC_3 (TYPE_15__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_10__*,int,scalar_t__) ;
 int FUNC_10 (TYPE_10__*,char const*) ;
 int FUNC_11 (TYPE_9__*,TYPE_4__*) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_12(
   OMX_HANDLETYPE VAR_11,
   OMX_INDEXTYPE VAR_12,
   OMX_PTR VAR_13)
{
   MMALOMX_COMPONENT_T *VAR_14 = (MMALOMX_COMPONENT_T *)VAR_11;
   MMALOMX_PORT_T *VAR_15 = ((void*)0);

   FUNC_1("hComponent %p, nParamIndex 0x%x (%s), pParam %p",
             VAR_11, VAR_12, FUNC_8(VAR_12), VAR_13);


   if (!VAR_11)
      return VAR_3;
   if (!VAR_13)
      return VAR_1;
   if (*(OMX_U32 *)VAR_13 < sizeof(OMX_U32) + sizeof(OMX_VERSIONTYPE))
      return VAR_1;
   if (VAR_14->state == VAR_8)
      return VAR_4;

   switch(VAR_12)
   {
   case 131:
      {
         OMX_PARAM_PORTDEFINITIONTYPE *VAR_16 = (OMX_PARAM_PORTDEFINITIONTYPE *)VAR_13;
         FUNC_2(VAR_15, VAR_14, VAR_16->nPortIndex);
         return FUNC_4(FUNC_11(VAR_15, VAR_16));
      }
      return VAR_5;
      break;
   case 134:
      {
         OMX_PARAM_BUFFERSUPPLIERTYPE *VAR_17 = (OMX_PARAM_BUFFERSUPPLIERTYPE *)VAR_13;
         FUNC_2(VAR_15, VAR_14, VAR_17->nPortIndex);

      }
      return VAR_5;
      break;
   case 130:
      {
         OMX_PRIORITYMGMTTYPE *VAR_18 = (OMX_PRIORITYMGMTTYPE *)VAR_13;

         if (VAR_14->state != VAR_9)
         return VAR_2;

         VAR_14->group_priority = VAR_18->nGroupPriority;
         VAR_14->group_id = VAR_18->nGroupID;
      }
      return VAR_5;
      break;
   case 135:
      {
         OMX_AUDIO_PARAM_PORTFORMATTYPE *VAR_19 = (OMX_AUDIO_PARAM_PORTFORMATTYPE *)VAR_13;
         FUNC_2(VAR_15, VAR_14, VAR_19->nPortIndex);
         VAR_15->mmal->format->encoding = FUNC_5(VAR_19->eEncoding);
         VAR_15->mmal->format->encoding_variant = 0;
         if (FUNC_3(VAR_15->mmal) != VAR_0)
            FUNC_0("OMX_IndexParamAudioPortFormat commit failed");
         return VAR_5;
      }
      break;
   case 128:
      {
         OMX_VIDEO_PARAM_PORTFORMATTYPE *VAR_20 = (OMX_VIDEO_PARAM_PORTFORMATTYPE *)VAR_13;
         FUNC_2(VAR_15, VAR_14, VAR_20->nPortIndex);
         if (VAR_20->eCompressionFormat != VAR_10)
            VAR_15->mmal->format->encoding = FUNC_7(VAR_20->eCompressionFormat);
         else
            VAR_15->mmal->format->encoding = FUNC_6(VAR_20->eColorFormat);
         VAR_15->mmal->format->encoding_variant = 0;

         if (FUNC_3(VAR_15->mmal) != VAR_0)
            FUNC_0("OMX_IndexParamAudioPortFormat commit failed");
         return VAR_5;
      }
      break;
   case 133:
   case 132:
      break;
   case 129:
      {
         OMX_PARAM_COMPONENTROLETYPE *VAR_21 = (OMX_PARAM_COMPONENTROLETYPE *)VAR_13;
         return FUNC_10(VAR_14, (const char *)VAR_21->cRole);
      }
      break;
   default:
      {
         OMX_ERRORTYPE VAR_22 = FUNC_9(VAR_14, VAR_12, VAR_13);


         if (VAR_22 == VAR_5 && VAR_12 == VAR_7)
         {
            FUNC_2(VAR_15, VAR_14, ((OMX_CONFIG_PORTBOOLEANTYPE *)VAR_13)->nPortIndex);
            VAR_15->zero_copy = ((OMX_CONFIG_PORTBOOLEANTYPE *)VAR_13)->bEnabled;
         }

         return VAR_22;
      }
   }

   return VAR_6;
}

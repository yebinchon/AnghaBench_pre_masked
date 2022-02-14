
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_20__ {int size; int id; } ;
struct TYPE_29__ {int encodings_num; int * encodings; TYPE_14__* mmal; TYPE_15__ encodings_header; } ;
struct TYPE_28__ {int eEncoding; } ;
struct TYPE_27__ {int eBufferSupplier; int nPortIndex; } ;
struct TYPE_26__ {scalar_t__ cRole; } ;
struct TYPE_25__ {int nPortIndex; } ;
struct TYPE_24__ {int nPorts; int nStartPortNumber; } ;
struct TYPE_23__ {int nGroupID; int nGroupPriority; } ;
struct TYPE_22__ {int nIndex; int xFramerate; int eColorFormat; int eCompressionFormat; int nPortIndex; } ;
struct TYPE_21__ {int encoding; } ;
struct TYPE_19__ {TYPE_1__* format; } ;
struct TYPE_18__ {scalar_t__ state; char* name; int role; int group_id; int group_priority; int * ports_domain_num; } ;
typedef TYPE_2__ OMX_VIDEO_PARAM_PORTFORMATTYPE ;
typedef int OMX_VERSIONTYPE ;
typedef int OMX_U32 ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_3__ OMX_PRIORITYMGMTTYPE ;
typedef TYPE_4__ OMX_PORT_PARAM_TYPE ;
typedef TYPE_5__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef TYPE_6__ OMX_PARAM_COMPONENTROLETYPE ;
typedef TYPE_7__ OMX_PARAM_BUFFERSUPPLIERTYPE ;
typedef int OMX_INDEXTYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_8__ OMX_AUDIO_PARAM_PORTFORMATTYPE ;
typedef TYPE_9__ MMALOMX_PORT_T ;
typedef TYPE_10__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_9__*,TYPE_10__*,int ) ;
 int FUNC_2 (TYPE_14__*,TYPE_15__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_9__*,TYPE_5__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_10__*,int,scalar_t__) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,int,char*,char const*) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_12(
   OMX_HANDLETYPE VAR_16,
   OMX_INDEXTYPE VAR_17,
   OMX_PTR VAR_18)
{
   MMALOMX_COMPONENT_T *VAR_19 = (MMALOMX_COMPONENT_T *)VAR_16;
   MMALOMX_PORT_T *VAR_20 = ((void*)0);

   FUNC_0("hComponent %p, nParamIndex 0x%x (%s), pParam %p",
             VAR_16, VAR_17, FUNC_8(VAR_17), VAR_18);


   if (!VAR_16)
      return VAR_5;
   if (!VAR_18)
      return VAR_4;
   if (*(OMX_U32 *)VAR_18 < sizeof(OMX_U32) + sizeof(OMX_VERSIONTYPE))
      return VAR_4;
   if (VAR_19->state == VAR_14)
      return VAR_6;

   switch(VAR_17)
   {
   case 139:
   case 129:
   case 136:
   case 134:
      {
         OMX_PORT_PARAM_TYPE *VAR_21 = (OMX_PORT_PARAM_TYPE *)VAR_18;
         VAR_21->nStartPortNumber = 0;
         VAR_21->nPorts = VAR_19->ports_domain_num[VAR_10];
         if (VAR_17 == 139)
            return VAR_8;
         VAR_21->nStartPortNumber += VAR_21->nPorts;
         VAR_21->nPorts = VAR_19->ports_domain_num[VAR_13];
         if (VAR_17 == 129)
            return VAR_8;
         VAR_21->nStartPortNumber += VAR_21->nPorts;
         VAR_21->nPorts = VAR_19->ports_domain_num[VAR_11];
         if (VAR_17 == 136)
            return VAR_8;
         VAR_21->nStartPortNumber += VAR_21->nPorts;
         VAR_21->nPorts = VAR_19->ports_domain_num[VAR_12];
      }
      return VAR_8;
      break;
   case 132:
      {
         OMX_PARAM_PORTDEFINITIONTYPE *VAR_22 = (OMX_PARAM_PORTDEFINITIONTYPE *)VAR_18;
         FUNC_1(VAR_20, VAR_19, VAR_22->nPortIndex);
         return FUNC_6(FUNC_7(VAR_20, VAR_22));
      }
      return VAR_8;
      break;
   case 137:
      {
         OMX_PARAM_BUFFERSUPPLIERTYPE *VAR_23 = (OMX_PARAM_BUFFERSUPPLIERTYPE *)VAR_18;
         FUNC_1(VAR_20, VAR_19, VAR_23->nPortIndex);
         VAR_23->eBufferSupplier = VAR_2;
      }
      return VAR_8;
      break;
   case 131:
      {
         OMX_PRIORITYMGMTTYPE *VAR_24 = (OMX_PRIORITYMGMTTYPE *)VAR_18;
         VAR_24->nGroupPriority = VAR_19->group_priority;
         VAR_24->nGroupID = VAR_19->group_id;
      }
      return VAR_8;
      break;
   case 128:
   case 138:
      {
         OMX_VIDEO_PARAM_PORTFORMATTYPE *VAR_25 = (OMX_VIDEO_PARAM_PORTFORMATTYPE *)VAR_18;
         FUNC_1(VAR_20, VAR_19, VAR_25->nPortIndex);


         if (!VAR_20->encodings_num)
         {
            VAR_20->encodings_header.id = VAR_0;
            VAR_20->encodings_header.size = sizeof(VAR_20->encodings_header) + sizeof(VAR_20->encodings);
            if (FUNC_2(VAR_20->mmal, &VAR_20->encodings_header) == VAR_1)
            {
                VAR_20->encodings_num = (VAR_20->encodings_header.size - sizeof(VAR_20->encodings_header)) /
                   sizeof(VAR_20->encodings[0]);
            }
            if (!VAR_20->encodings_num)
            {
               VAR_20->encodings_num = 1;
               VAR_20->encodings[0] = VAR_20->mmal->format->encoding;
            }
         }

         if (VAR_25->nIndex >= VAR_20->encodings_num)
            return VAR_7;

         if (VAR_17 == 128)
         {
            VAR_25->eColorFormat = VAR_3;
            VAR_25->eCompressionFormat =
               FUNC_5(VAR_20->encodings[VAR_25->nIndex]);
            if (VAR_25->eCompressionFormat == VAR_15)
               VAR_25->eColorFormat =
                  FUNC_4(VAR_20->encodings[VAR_25->nIndex]);
            VAR_25->xFramerate = 0;
         }
         else
         {
            OMX_AUDIO_PARAM_PORTFORMATTYPE *VAR_26 =
               (OMX_AUDIO_PARAM_PORTFORMATTYPE *)VAR_18;
            VAR_26->eEncoding =
               FUNC_3(VAR_20->encodings[VAR_25->nIndex]);
         }
         return VAR_8;
      }
      break;
   case 135:
   case 133:
      break;
   case 130:
      {
         OMX_PARAM_COMPONENTROLETYPE *VAR_27 = (OMX_PARAM_COMPONENTROLETYPE *)VAR_18;
         const char *VAR_28 = FUNC_10(VAR_19->role);
         if (!VAR_28)
            VAR_28 = VAR_19->name;
         FUNC_11((char *)VAR_27->cRole, sizeof(VAR_27->cRole), "%s", VAR_28);
      }
      return VAR_8;
   default:
      return FUNC_9(VAR_19, VAR_17, VAR_18);
   }

   return VAR_9;
}

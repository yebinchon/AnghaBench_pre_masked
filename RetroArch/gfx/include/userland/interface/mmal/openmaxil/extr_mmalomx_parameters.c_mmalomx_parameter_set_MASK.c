
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_18__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_35__ {int eColorSpace; int nPortIndex; } ;
struct TYPE_34__ {int nSize; int nPFrames; int eLevel; int eProfile; int nPortIndex; } ;
struct TYPE_33__ {int nSize; int nPFrames; int eLevel; int eProfile; int nPortIndex; } ;
struct TYPE_32__ {int nSize; int nPFrames; int eLevel; int eProfile; int nPortIndex; } ;
struct TYPE_25__ {int den; int num; } ;
struct TYPE_30__ {int color_space; TYPE_17__ par; } ;
struct TYPE_31__ {TYPE_4__ video; } ;
struct TYPE_29__ {int nSize; int nU32; int nPortIndex; } ;
struct TYPE_27__ {int nU32; } ;
struct TYPE_28__ {TYPE_1__ common; } ;
struct TYPE_26__ {TYPE_15__* format; } ;
struct TYPE_24__ {TYPE_5__* es; } ;
struct TYPE_23__ {int no_cropping; TYPE_18__* mmal; TYPE_2__ format_param; } ;
struct TYPE_22__ {int nY; int nX; int nPortIndex; } ;
struct TYPE_21__ {int bEnabled; int nPortIndex; } ;
struct TYPE_20__ {TYPE_3__ common; } ;
typedef TYPE_6__ OMX_VIDEO_PARAM_MPEG4TYPE ;
typedef TYPE_7__ OMX_VIDEO_PARAM_H263TYPE ;
typedef TYPE_8__ OMX_VIDEO_PARAM_AVCTYPE ;
typedef int OMX_U32 ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_9__ OMX_PARAM_COLORSPACETYPE ;
typedef int OMX_INDEXTYPE ;
typedef TYPE_10__ OMX_FORMAT_PARAM_TYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_11__ OMX_CONFIG_PORTBOOLEANTYPE ;
typedef TYPE_12__ OMX_CONFIG_POINTTYPE ;
typedef TYPE_13__ MMALOMX_PORT_T ;
typedef int MMALOMX_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_13__*,int *,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_18__*) ;
 int FUNC_3 (TYPE_17__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_15__*,int ,TYPE_10__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (TYPE_13__*,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (int ,int ) ;

OMX_ERRORTYPE FUNC_11(MMALOMX_COMPONENT_T *VAR_5,
   OMX_INDEXTYPE VAR_6, OMX_PTR VAR_7)
{
   MMALOMX_PORT_T *VAR_8 = ((void*)0);

   switch(VAR_6)
   {

   case 133:
      {
         OMX_VIDEO_PARAM_AVCTYPE *VAR_9 = (OMX_VIDEO_PARAM_AVCTYPE *)VAR_7;
         FUNC_0(VAR_8, VAR_5, VAR_9->nPortIndex);
         if (VAR_9->nSize < sizeof(*VAR_9))
            return VAR_0;
         return FUNC_9(VAR_8, VAR_9->eProfile, VAR_9->eLevel,
            VAR_9->nPFrames + 1);
      }
   case 130:
      {
         OMX_VIDEO_PARAM_MPEG4TYPE *VAR_10 = (OMX_VIDEO_PARAM_MPEG4TYPE *)VAR_7;
         FUNC_0(VAR_8, VAR_5, VAR_10->nPortIndex);
         if (VAR_10->nSize < sizeof(*VAR_10))
            return VAR_0;
         return FUNC_9(VAR_8, VAR_10->eProfile, VAR_10->eLevel,
            VAR_10->nPFrames + 1);
      }
   case 132:
      {
         OMX_VIDEO_PARAM_H263TYPE *VAR_11 = (OMX_VIDEO_PARAM_H263TYPE *)VAR_7;
         FUNC_0(VAR_8, VAR_5, VAR_11->nPortIndex);
         if (VAR_11->nSize < sizeof(*VAR_11))
            return VAR_0;
         return FUNC_9(VAR_8, VAR_11->eProfile, VAR_11->eLevel,
            VAR_11->nPFrames + 1);
      }
   case 131:
   case 128:
   case 129:
      {
         OMX_FORMAT_PARAM_TYPE *VAR_12 = (OMX_FORMAT_PARAM_TYPE *)VAR_7;
         OMX_U32 VAR_13 = FUNC_10(VAR_3, VAR_4);
         FUNC_0(VAR_8, VAR_5, VAR_12->common.nPortIndex);
         if (VAR_12->common.nSize > sizeof(VAR_8->format_param) ||
             VAR_12->common.nSize < VAR_13)
            return VAR_0;
         FUNC_1(&VAR_8->format_param.common.nU32, &VAR_12->common.nU32,
                VAR_12->common.nSize - VAR_13);
         return VAR_1;
      }
   case 137:
   case 140:
   case 138:
   case 139:
      {
         OMX_FORMAT_PARAM_TYPE *VAR_14 = (OMX_FORMAT_PARAM_TYPE *)VAR_7;
         OMX_U32 VAR_15 = FUNC_10(VAR_3, VAR_4);
         FUNC_0(VAR_8, VAR_5, VAR_14->common.nPortIndex);
         if (VAR_14->common.nSize > sizeof(VAR_8->format_param) ||
             VAR_14->common.nSize < VAR_15)
            return VAR_0;
         FUNC_1(&VAR_8->format_param.common.nU32, &VAR_14->common.nU32,
                VAR_14->common.nSize - VAR_15);
         FUNC_6(VAR_8->mmal->format,
            FUNC_5(VAR_6), VAR_14);
         FUNC_2(VAR_8->mmal);
         return VAR_1;
      }
   case 136:
      {
         OMX_CONFIG_POINTTYPE *VAR_16 = (OMX_CONFIG_POINTTYPE *)VAR_7;
         FUNC_0(VAR_8, VAR_5, VAR_16->nPortIndex);
         VAR_8->mmal->format->es->video.par.num = VAR_16->nX;
         VAR_8->mmal->format->es->video.par.den = VAR_16->nY;
         FUNC_3(&VAR_8->mmal->format->es->video.par);
         return FUNC_4(FUNC_2(VAR_8->mmal));
      }
   case 134:
      {
         OMX_PARAM_COLORSPACETYPE *VAR_17 = (OMX_PARAM_COLORSPACETYPE *)VAR_7;
         FUNC_0(VAR_8, VAR_5, VAR_17->nPortIndex);
         VAR_8->mmal->format->es->video.color_space = FUNC_7(VAR_17->eColorSpace);
         return FUNC_4(FUNC_2(VAR_8->mmal));
      }
   case 135:
      {
         OMX_CONFIG_PORTBOOLEANTYPE *VAR_18 = (OMX_CONFIG_PORTBOOLEANTYPE *)VAR_7;
         FUNC_0(VAR_8, VAR_5, VAR_18->nPortIndex);
         VAR_8->no_cropping = VAR_18->bEnabled;
         return VAR_1;
      }
   default:
      return FUNC_8(VAR_5, VAR_6, VAR_7);
   }

   return VAR_2;
}

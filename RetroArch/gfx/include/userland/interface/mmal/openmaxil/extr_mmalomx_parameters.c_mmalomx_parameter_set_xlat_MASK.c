
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mmal_generic ;
struct TYPE_22__ {size_t ports_num; TYPE_2__* ports; TYPE_1__* mmal; } ;
struct TYPE_18__ {int size; int id; } ;
struct TYPE_21__ {TYPE_4__ header; } ;
struct TYPE_20__ {int nSize; size_t nPortIndex; } ;
struct TYPE_17__ {scalar_t__ (* generic ) (int ,TYPE_5__ const*,TYPE_4__*,scalar_t__,int *) ;scalar_t__ (* simple ) (int ,TYPE_4__*,scalar_t__) ;} ;
struct TYPE_19__ {int omx_size; scalar_t__ type; int mmal_size; TYPE_3__ fn; int mmal_id; scalar_t__ portless; } ;
struct TYPE_16__ {int * mmal; } ;
struct TYPE_15__ {int * control; } ;
typedef scalar_t__ OMX_PTR ;
typedef int OMX_INDEXTYPE ;
typedef int OMX_ERRORTYPE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_5__ MMALOMX_PARAM_TRANSLATION_T ;
typedef TYPE_6__ MMALOMX_PARAM_OMX_HEADER_T ;
typedef TYPE_7__ MMALOMX_PARAM_MMAL_GENERIC_T ;
typedef TYPE_8__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__ const*,TYPE_4__*,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_6(MMALOMX_COMPONENT_T *VAR_6,
   OMX_INDEXTYPE VAR_7, OMX_PTR VAR_8)
{
   const MMALOMX_PARAM_TRANSLATION_T *VAR_9 = FUNC_3(VAR_7);
   MMALOMX_PARAM_OMX_HEADER_T *VAR_10 = (MMALOMX_PARAM_OMX_HEADER_T *)VAR_8;
   MMALOMX_PARAM_MMAL_GENERIC_T VAR_11;
   MMAL_PARAMETER_HEADER_T *VAR_12 = &VAR_11.header;
   MMAL_PORT_T *VAR_13 = VAR_6->mmal->control;
   MMAL_STATUS_T VAR_14;

   if (!VAR_9)
   {
      FUNC_0("no translation for omx id 0x%08x", VAR_7);
      return VAR_5;
   }

   if (!VAR_9->portless)
   {
      if (VAR_10->nSize < sizeof(*VAR_10))
         return VAR_3;
      if (VAR_10->nPortIndex >= VAR_6->ports_num)
         return VAR_4;
      VAR_13 = VAR_6->ports[VAR_10->nPortIndex].mmal;
   }

   if (VAR_10->nSize < VAR_9->omx_size)
      return VAR_3;


   if (VAR_9->type == VAR_1)
   {
      VAR_12 = (MMAL_PARAMETER_HEADER_T *)(((uint8_t *)VAR_8) + (VAR_9->portless ? 0 : 4));
      VAR_11.header = *VAR_12;
      VAR_12->size = VAR_10->nSize - (VAR_9->portless ? 0 : 4);
      VAR_12->id = VAR_9->mmal_id;
      VAR_14 = FUNC_1(VAR_13, VAR_12);
      *VAR_12 = VAR_11.header;
      return FUNC_2(VAR_14);
   }

   if (!VAR_9->fn.generic && !VAR_9->fn.simple)
   {

      return VAR_5;
   }


   if (sizeof(VAR_11) < VAR_9->mmal_size)
      return VAR_3;

   VAR_12->size = VAR_9->mmal_size;
   VAR_12->id = VAR_9->mmal_id;
   if (VAR_9->fn.generic)
      VAR_14 = VAR_9->fn.generic(VAR_0, VAR_9, VAR_12, VAR_8, VAR_13);
   else
      VAR_14 = VAR_9->fn.simple(VAR_0, VAR_12, VAR_8);
   if (VAR_14 != VAR_2)
      goto error;

   VAR_14 = FUNC_1(VAR_13, VAR_12);

 error:
   return FUNC_2(VAR_14);
}

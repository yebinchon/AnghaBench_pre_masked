
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mmal_generic ;
struct TYPE_31__ {size_t ports_num; TYPE_2__* ports; TYPE_1__* mmal; } ;
struct TYPE_27__ {int size; int id; } ;
struct TYPE_30__ {TYPE_4__ header; } ;
struct TYPE_29__ {int nSize; size_t nPortIndex; } ;
struct TYPE_26__ {scalar_t__ (* custom ) (int ,TYPE_5__ const*,TYPE_4__*,scalar_t__,int *) ;scalar_t__ (* list ) (int ,TYPE_5__ const*,int,TYPE_4__*,scalar_t__,int *) ;scalar_t__ (* generic ) (int ,TYPE_5__ const*,TYPE_4__*,scalar_t__,int *) ;scalar_t__ (* simple ) (int ,TYPE_4__*,scalar_t__) ;} ;
struct TYPE_28__ {int omx_size; scalar_t__ type; int mmal_size; int xlat_enum_num; TYPE_3__ fn; scalar_t__ double_translation; int mmal_id; scalar_t__ portless; } ;
struct TYPE_25__ {int * mmal; } ;
struct TYPE_24__ {int * control; } ;
typedef int OMX_U32 ;
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


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_0 (int *,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__ const*,TYPE_4__*,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_5__ const*,int,TYPE_4__*,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_5__ const*,TYPE_4__*,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,TYPE_5__ const*,TYPE_4__*,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (int ,TYPE_4__*,scalar_t__) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_11(MMALOMX_COMPONENT_T *VAR_9,
   OMX_INDEXTYPE VAR_10, OMX_PTR VAR_11)
{
   const MMALOMX_PARAM_TRANSLATION_T *VAR_12 = FUNC_3(VAR_10);
   MMALOMX_PARAM_OMX_HEADER_T *VAR_13 = (MMALOMX_PARAM_OMX_HEADER_T *)VAR_11;
   MMALOMX_PARAM_MMAL_GENERIC_T VAR_14;
   MMAL_PARAMETER_HEADER_T *VAR_15 = &VAR_14.header;
   MMAL_PORT_T *VAR_16 = VAR_9->mmal->control;
   MMAL_STATUS_T VAR_17 = VAR_3;

   if (!VAR_12)
      return VAR_8;

   if (!VAR_12->portless)
   {
      if (VAR_13->nSize < sizeof(*VAR_13))
         return VAR_4;
      if (VAR_13->nPortIndex >= VAR_9->ports_num)
         return VAR_5;
      VAR_16 = VAR_9->ports[VAR_13->nPortIndex].mmal;
   }

   if (VAR_13->nSize < VAR_12->omx_size)
      return VAR_4;


   if (VAR_12->type == VAR_2)
   {
      OMX_U32 VAR_18;
      VAR_15 = (MMAL_PARAMETER_HEADER_T *)(((uint8_t *)VAR_11) + (VAR_12->portless ? 0 : 4));
      VAR_14.header = *VAR_15;
      VAR_15->size = VAR_13->nSize - (VAR_12->portless ? 0 : 4);
      VAR_15->id = VAR_12->mmal_id;
      VAR_17 = FUNC_1(VAR_16, VAR_15);
      *VAR_15 = VAR_14.header;
      VAR_18 = VAR_15->size + (VAR_12->portless ? 0 : 4);
      VAR_13->nSize = VAR_18;
      return FUNC_2(VAR_17);
   }

   if (VAR_12->fn.custom)
   {
      return FUNC_2(VAR_12->fn.custom(VAR_1, VAR_12, VAR_15,
         VAR_11, VAR_16));
   }

   if (VAR_12->fn.list)
   {
      OMX_U32 VAR_19, VAR_20;
      VAR_15 = FUNC_0(VAR_16, VAR_12->mmal_id,
         10*VAR_12->mmal_size, &VAR_17);
      if (!VAR_15)
         return VAR_6;


      VAR_19 = *(OMX_U32 *)(((uint8_t *)VAR_11) + VAR_12->xlat_enum_num);
      VAR_20 = (VAR_15->size - sizeof(MMAL_PARAMETER_HEADER_T)) /
         (VAR_12->mmal_size - sizeof(MMAL_PARAMETER_HEADER_T));
      if (VAR_19 >= VAR_20)
      {
         FUNC_10(VAR_15);
         return VAR_7;
      }
      VAR_17 = VAR_12->fn.list(VAR_1, VAR_12, VAR_19, VAR_15, VAR_11, VAR_16);
      FUNC_10(VAR_15);
      return FUNC_2(VAR_17);
   }

   if (!VAR_12->fn.generic && !VAR_12->fn.simple)
   {

      return VAR_8;
   }


   if (sizeof(VAR_14) < VAR_12->mmal_size)
      return VAR_4;

   VAR_15->size = VAR_12->mmal_size;
   VAR_15->id = VAR_12->mmal_id;

   if (VAR_12->double_translation)
   {
      if (VAR_12->fn.generic)
         VAR_17 = VAR_12->fn.generic(VAR_0, VAR_12, VAR_15, VAR_11, VAR_16);
      else
         VAR_17 = VAR_12->fn.simple(VAR_0, VAR_15, VAR_11);
   }
   if (VAR_17 != VAR_3)
      goto error;

   VAR_17 = FUNC_1(VAR_16, VAR_15);
   if (VAR_17 != VAR_3)
      goto error;

   if (VAR_12->fn.generic)
      VAR_17 = VAR_12->fn.generic(VAR_1, VAR_12, VAR_15, VAR_11, VAR_16);
   else
      VAR_17 = VAR_12->fn.simple(VAR_1, VAR_15, VAR_11);

 error:
   return FUNC_2(VAR_17);
}

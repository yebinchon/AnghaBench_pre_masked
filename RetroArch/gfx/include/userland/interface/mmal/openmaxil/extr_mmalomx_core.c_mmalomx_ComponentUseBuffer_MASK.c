
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ state; size_t ports_num; TYPE_4__* ports; } ;
struct TYPE_18__ {int actions; int populated; scalar_t__ buffers; scalar_t__ direction; TYPE_2__* mmal; void* buffers_allocated; } ;
struct TYPE_15__ {int nVersion; } ;
struct TYPE_17__ {int nSize; size_t nAllocLen; size_t nInputPortIndex; size_t nOutputPortIndex; void* pInputPortPrivate; void* pOutputPortPrivate; void* pAppPrivate; int * pBuffer; TYPE_1__ nVersion; } ;
struct TYPE_16__ {size_t buffer_size_min; size_t buffer_size; scalar_t__ buffer_num; } ;
typedef int OMX_U8 ;
typedef size_t OMX_U32 ;
typedef void* OMX_PTR ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_3__ OMX_BUFFERHEADERTYPE ;
typedef int MMAL_BOOL_T ;
typedef TYPE_4__ MMALOMX_PORT_T ;
typedef TYPE_5__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,scalar_t__,TYPE_3__**,int,void*,int,int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_3__* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_8(
   OMX_HANDLETYPE VAR_12,
   OMX_BUFFERHEADERTYPE** VAR_13,
   OMX_U32 VAR_14,
   OMX_PTR VAR_15,
   OMX_U32 VAR_16,
   OMX_U8* VAR_17)
{
   MMALOMX_COMPONENT_T *VAR_18 = (MMALOMX_COMPONENT_T *)VAR_12;
   OMX_ERRORTYPE VAR_19 = VAR_9;
   MMAL_BOOL_T VAR_20 = VAR_1;
   OMX_BUFFERHEADERTYPE *VAR_21;
   MMALOMX_PORT_T *VAR_22;

   FUNC_2("hComponent %p, ppBufferHdr %p, nPortIndex %i, pAppPrivate %p,"
             " nSizeBytes %i, pBuffer %p", VAR_12, VAR_13,
             (int)VAR_14, VAR_15, (int)VAR_16, VAR_17);


   if (!VAR_12)
      return VAR_7;
   if (!VAR_13)
      return VAR_3;
   if (VAR_18->state == VAR_10)
      return VAR_8;
   if (VAR_14 >= VAR_18->ports_num)
      return VAR_4;




   FUNC_6(VAR_18);

   VAR_22 = &VAR_18->ports[VAR_14];
   FUNC_3(VAR_18, VAR_22);

   if (!(VAR_22->actions & VAR_0))
      VAR_19 = VAR_5;
   if (VAR_22->populated)
      VAR_19 = VAR_5;
   if (VAR_19 != VAR_9)
      goto error;


   if (VAR_22->buffers && VAR_22->buffers_allocated)
   {
      VAR_19 = VAR_3;
      goto error;
   }


   if (VAR_16 < VAR_22->mmal->buffer_size_min)
   {
      FUNC_1("buffer size too small (%i/%i)", (int)VAR_16,
                (int)VAR_22->mmal->buffer_size_min);
      VAR_19 = VAR_3;
      goto error;
   }
   if (!VAR_22->buffers)
      VAR_22->mmal->buffer_size = VAR_16;
   if (VAR_16 > VAR_22->mmal->buffer_size)
   {
      FUNC_1("buffer size too big (%i/%i)", (int)VAR_16,
                (int)VAR_22->mmal->buffer_size);
      VAR_19 = VAR_3;
      goto error;
   }

   VAR_21 = FUNC_5( 1, sizeof(*VAR_21) );
   if (!VAR_21)
   {
      VAR_19 = VAR_6;
      goto error;
   }

   VAR_21->nSize = sizeof(*VAR_21);
   VAR_21->nVersion.nVersion = VAR_11;
   VAR_21->nAllocLen = VAR_16;
   VAR_21->pBuffer = VAR_17;
   VAR_21->pAppPrivate = VAR_15;
   if (VAR_22->direction == VAR_2)
   {
      VAR_21->nInputPortIndex = VAR_14;
      VAR_21->pOutputPortPrivate = VAR_15;
   }
   else
   {
      VAR_21->nOutputPortIndex = VAR_14;
      VAR_21->pInputPortPrivate = VAR_15;
   }

   *VAR_13 = VAR_21;
   VAR_22->buffers++;
   VAR_22->buffers_allocated = VAR_1;
   VAR_22->populated = VAR_20 = VAR_22->buffers == VAR_22->mmal->buffer_num;

   FUNC_4(VAR_18, VAR_22);

   FUNC_0("allocated %i/%i buffers", VAR_22->buffers, VAR_22->mmal->buffer_num);

   if (VAR_20)
      FUNC_7(VAR_18);

   return VAR_9;

error:
   FUNC_4(VAR_18, VAR_22);
   return VAR_19;
}

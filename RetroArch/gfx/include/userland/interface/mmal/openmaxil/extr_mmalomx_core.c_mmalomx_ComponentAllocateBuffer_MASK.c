
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {size_t buffer_size_min; size_t buffer_size; int buffer_num; int name; } ;
struct TYPE_20__ {scalar_t__ state; size_t ports_num; TYPE_3__* ports; } ;
struct TYPE_19__ {int actions; int populated; int buffers; scalar_t__ direction; TYPE_8__* mmal; int zero_copy; void* buffers_allocated; } ;
struct TYPE_17__ {int nVersion; } ;
struct TYPE_18__ {int nSize; size_t nAllocLen; size_t nInputPortIndex; size_t nOutputPortIndex; scalar_t__ pBuffer; void* pPlatformPrivate; void* pInputPortPrivate; void* pOutputPortPrivate; void* pAppPrivate; TYPE_1__ nVersion; } ;
typedef size_t OMX_U32 ;
typedef void* OMX_PTR ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_2__ OMX_BUFFERHEADERTYPE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_BOOL_T ;
typedef TYPE_3__ MMALOMX_PORT_T ;
typedef TYPE_4__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,scalar_t__,TYPE_2__**,int,void*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 TYPE_2__* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_8__*,int ,void*) ;
 scalar_t__ FUNC_8 (TYPE_8__*,size_t) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_11(
   OMX_HANDLETYPE VAR_17,
   OMX_BUFFERHEADERTYPE** VAR_18,
   OMX_U32 VAR_19,
   OMX_PTR VAR_20,
   OMX_U32 VAR_21)
{
   MMALOMX_COMPONENT_T *VAR_22 = (MMALOMX_COMPONENT_T *)VAR_17;
   OMX_ERRORTYPE VAR_23 = VAR_14;
   MMAL_BOOL_T VAR_24 = VAR_3;
   OMX_BUFFERHEADERTYPE *VAR_25 = 0;
   MMALOMX_PORT_T *VAR_26;

   FUNC_2("hComponent %p, ppBuffer %p, nPortIndex %i, pAppPrivate %p, "
             "nSizeBytes %i", VAR_17, VAR_18, (int)VAR_19,
             VAR_20, (int)VAR_21);


   if (!VAR_17)
      return VAR_12;
   if (!VAR_18)
      return VAR_8;
   if (VAR_22->state == VAR_15)
      return VAR_13;
   if (VAR_19 >= VAR_22->ports_num)
      return VAR_9;




   FUNC_9(VAR_22);

   VAR_26 = &VAR_22->ports[VAR_19];
   FUNC_3(VAR_22, VAR_26);

   if (!(VAR_26->actions & VAR_0))
      VAR_23 = VAR_10;
   if (VAR_26->populated)
      VAR_23 = VAR_10;
   if (VAR_23 != VAR_14)
      goto error;


   if (!VAR_23 && VAR_26->buffers && !VAR_26->buffers_allocated)
   {
      VAR_23 = VAR_8;
      goto error;
   }


   if (VAR_21 < VAR_26->mmal->buffer_size_min)
   {
      FUNC_1("buffer size too small (%i/%i)", (int)VAR_21,
                (int)VAR_26->mmal->buffer_size_min);
      VAR_23 = VAR_8;
      goto error;
   }
   if (!VAR_26->buffers)
      VAR_26->mmal->buffer_size = VAR_21;
   if (VAR_21 > VAR_26->mmal->buffer_size)
   {
      FUNC_1("buffer size too big (%i/%i)", (int)VAR_21,
                (int)VAR_26->mmal->buffer_size);
      VAR_23 = VAR_8;
      goto error;
   }


   if (!VAR_26->buffers_allocated && VAR_21 > VAR_1 &&
       !VAR_26->zero_copy)
   {
      MMAL_STATUS_T VAR_27 = FUNC_7(VAR_26->mmal,
         VAR_4, VAR_6);
      if (VAR_27 != VAR_5 && VAR_27 != VAR_2)
         FUNC_1("failed to enable zero copy on %s", VAR_26->mmal->name);
   }

   VAR_25 = FUNC_5( 1, sizeof(*VAR_25) );
   if (!VAR_25)
   {
      VAR_23 = VAR_11;
      goto error;
   }

   VAR_25->pBuffer = FUNC_8(VAR_26->mmal, VAR_21);
   if (!VAR_25->pBuffer)
   {
      VAR_23 = VAR_11;
      goto error;
   }

   VAR_25->nSize = sizeof(*VAR_25);
   VAR_25->nVersion.nVersion = VAR_16;
   VAR_25->nAllocLen = VAR_21;
   VAR_25->pAppPrivate = VAR_20;
   if (VAR_26->direction == VAR_7)
   {
      VAR_25->nInputPortIndex = VAR_19;
      VAR_25->pOutputPortPrivate = VAR_20;
   }
   else
   {
      VAR_25->nOutputPortIndex = VAR_19;
      VAR_25->pInputPortPrivate = VAR_20;
   }

   VAR_25->pPlatformPrivate = (OMX_PTR)VAR_25->pBuffer;

   *VAR_18 = VAR_25;
   VAR_26->buffers++;
   VAR_26->buffers_allocated = VAR_6;
   VAR_26->populated = VAR_24 = VAR_26->buffers == VAR_26->mmal->buffer_num;

   FUNC_4(VAR_22, VAR_26);

   FUNC_0("allocated %i/%i buffers", VAR_26->buffers, VAR_26->mmal->buffer_num);

   if (VAR_24)
      FUNC_10(VAR_22);

   return VAR_14;

error:
   if (!VAR_26->buffers_allocated && !VAR_26->zero_copy)
      FUNC_7(VAR_26->mmal, VAR_4, VAR_3);

   FUNC_4(VAR_22, VAR_26);
   FUNC_1("failed to allocate %i/%i buffers", VAR_26->buffers, VAR_26->mmal->buffer_num);
   if (VAR_25)
      FUNC_6(VAR_25);
   return VAR_23;
}

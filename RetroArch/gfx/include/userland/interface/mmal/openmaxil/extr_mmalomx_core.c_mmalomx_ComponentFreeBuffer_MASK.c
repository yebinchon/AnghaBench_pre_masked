
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ buffer_num; } ;
struct TYPE_18__ {size_t ports_num; TYPE_2__* ports; } ;
struct TYPE_17__ {unsigned int buffers; int actions; int buffers_allocated; TYPE_8__* mmal; int zero_copy; int populated; } ;
struct TYPE_16__ {int pPlatformPrivate; } ;
typedef size_t OMX_U32 ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef int MMAL_BOOL_T ;
typedef TYPE_2__ MMALOMX_PORT_T ;
typedef TYPE_3__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_8__*,int ,int ) ;
 int FUNC_6 (TYPE_8__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_10(
   OMX_HANDLETYPE VAR_9,
   OMX_U32 VAR_10,
   OMX_BUFFERHEADERTYPE* VAR_11)
{
   MMALOMX_COMPONENT_T *VAR_12 = (MMALOMX_COMPONENT_T *)VAR_9;
   OMX_ERRORTYPE VAR_13 = VAR_6;
   MMAL_BOOL_T VAR_14, VAR_15;
   MMALOMX_PORT_T *VAR_16;
   unsigned int VAR_17;

   FUNC_1("hComponent %p, nPortIndex %i, pBuffer %p",
             VAR_9, (int)VAR_10, VAR_11);


   if (!VAR_9)
      return VAR_5;
   if (!VAR_11)
      return VAR_3;
   if (VAR_10 >= VAR_12->ports_num)
      return VAR_4;




   FUNC_8(VAR_12);

   VAR_16 = &VAR_12->ports[VAR_10];
   FUNC_2(VAR_12, VAR_16);

   if (!VAR_16->buffers)
   {
      VAR_13 = VAR_3;
      goto error;
   }

   VAR_17 = --VAR_16->buffers;
   VAR_16->populated = VAR_1;
   VAR_14 = !(VAR_16->actions & VAR_0);
   VAR_15 = VAR_16->buffers_allocated;

   FUNC_3(VAR_12, VAR_16);

   if (VAR_15)
      FUNC_6(VAR_16->mmal, VAR_11->pPlatformPrivate);
   FUNC_4(VAR_11);

   if (VAR_15 && !VAR_16->zero_copy)
      FUNC_5(VAR_16->mmal, VAR_2, VAR_1);

   FUNC_0("freed %i/%i buffers", VAR_16->mmal->buffer_num - VAR_16->buffers, VAR_16->mmal->buffer_num);

   if (VAR_14)
      FUNC_7(VAR_12, VAR_8, VAR_7, 0, ((void*)0));

   if (!VAR_17)
      FUNC_9(VAR_12);

   return VAR_6;

error:
   FUNC_3(VAR_12, VAR_16);
   return VAR_13;
}

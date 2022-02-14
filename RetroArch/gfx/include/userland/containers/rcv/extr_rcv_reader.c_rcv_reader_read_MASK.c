
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint32_t ;
typedef long long int64_t ;
struct TYPE_14__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {unsigned int size; long long dts; long long pts; int flags; TYPE_11__* data; int buffer_size; scalar_t__ track; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_12__ {long long timestamp; unsigned int framesize; scalar_t__ keyframe; } ;
struct TYPE_16__ {int mid_frame; scalar_t__ frame_read; TYPE_11__ frame; scalar_t__ index; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_13__ {TYPE_4__* module; } ;
typedef int RCV_FRAME_HEADER_T ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_11__*,unsigned int) ;
 unsigned int FUNC_2 (TYPE_2__*,scalar_t__) ;
 long long FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__,long long,long long) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_7,
   VC_CONTAINER_PACKET_T *VAR_8, uint32_t VAR_9 )
{
   VC_CONTAINER_MODULE_T *VAR_10 = VAR_7->priv->module;
   unsigned int VAR_11;

   if(!VAR_10->mid_frame)
   {

      int64_t VAR_12 = FUNC_3(VAR_7);

      if(FUNC_1(VAR_7, &VAR_10->frame, sizeof(RCV_FRAME_HEADER_T)) != sizeof(RCV_FRAME_HEADER_T))
         return VAR_0;
      VAR_10->mid_frame = 1;
      VAR_10->frame_read = 0;

      if(VAR_10->index && VAR_10->frame.keyframe)
         FUNC_5(VAR_10->index, (int64_t)VAR_10->frame.timestamp * 1000LL, VAR_12);
   }

   VAR_8->size = VAR_10->frame.framesize;
   VAR_8->dts = VAR_8->pts = VAR_10->frame.timestamp * 1000LL;
   VAR_8->track = 0;
   VAR_8->flags = 0;
   if(VAR_10->frame_read == 0)
      VAR_8->flags |= VAR_2;
   if(VAR_10->frame.keyframe)
      VAR_8->flags |= VAR_3;

   if(VAR_9 & VAR_5)
   {
      VAR_11 = FUNC_2(VAR_7, VAR_10->frame.framesize - VAR_10->frame_read);
      if((VAR_10->frame_read += VAR_11) == VAR_10->frame.framesize)
      {
         VAR_10->frame_read = 0;
         VAR_10->mid_frame = 0;
      }
      return FUNC_4(VAR_7);
   }

   if(VAR_9 & VAR_4)
      return VAR_6;

   VAR_11 = FUNC_0(VAR_10->frame.framesize - VAR_10->frame_read, VAR_8->buffer_size);
   VAR_11 = FUNC_1(VAR_7, VAR_8->data, VAR_11);
   if((VAR_10->frame_read += VAR_11) == VAR_10->frame.framesize)
   {
      VAR_10->frame_read = 0;
      VAR_10->mid_frame = 0;
      VAR_8->flags |= VAR_1;
   }
   VAR_8->size = VAR_11;

   return VAR_11 ? VAR_6 : FUNC_4(VAR_7);
}

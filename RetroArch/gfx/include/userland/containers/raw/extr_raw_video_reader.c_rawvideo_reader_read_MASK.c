
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


typedef int uint32_t ;
struct TYPE_20__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {int pts; int dts; int flags; unsigned int frame_size; unsigned int size; int data; int buffer_size; scalar_t__ track; } ;
typedef TYPE_7__ VC_CONTAINER_PACKET_T ;
struct TYPE_22__ {scalar_t__ status; unsigned int block_offset; int frame_header; int frames; unsigned int block_size; scalar_t__ yuv4mpeg2; } ;
typedef TYPE_8__ VC_CONTAINER_MODULE_T ;
struct TYPE_19__ {TYPE_4__* format; } ;
struct TYPE_18__ {TYPE_3__* type; } ;
struct TYPE_16__ {int frame_rate_den; int frame_rate_num; } ;
struct TYPE_17__ {TYPE_2__ video; } ;
struct TYPE_15__ {TYPE_8__* module; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (TYPE_6__*,int ,unsigned int) ;
 unsigned int FUNC_3 (TYPE_6__*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_7,
   VC_CONTAINER_PACKET_T *VAR_8, uint32_t VAR_9 )
{
   VC_CONTAINER_MODULE_T *VAR_10 = VAR_7->priv->module;
   unsigned int VAR_11;

   if (VAR_10->status != VAR_5)
      return VAR_10->status;

   if (VAR_10->yuv4mpeg2 && !VAR_10->block_offset &&
         !VAR_10->frame_header)
   {
      VAR_10->status = FUNC_5(VAR_7);
      if (VAR_10->status != VAR_5)
         return VAR_10->status;

      VAR_10->frame_header = 1;
   }

   if (!VAR_10->block_offset)
      VAR_8->pts = VAR_8->dts = VAR_10->frames * FUNC_0(1000000) *
         VAR_7->tracks[0]->format->type->video.frame_rate_den /
         VAR_7->tracks[0]->format->type->video.frame_rate_num;
   else
      VAR_8->pts = VAR_8->dts = VAR_6;
   VAR_8->flags = VAR_0 |
      VAR_2;
   if (!VAR_10->block_offset)
      VAR_8->flags |= VAR_1;
   VAR_8->frame_size = VAR_10->block_size;
   VAR_8->size = VAR_10->block_size - VAR_10->block_offset;
   VAR_8->track = 0;

   if (VAR_9 & VAR_4)
   {
      VAR_11 = FUNC_3(VAR_7, VAR_8->size);
      VAR_10->block_offset = 0;
      VAR_10->frames++;
      VAR_10->frame_header = 0;
      VAR_10->status = FUNC_4(VAR_7);
      return VAR_10->status;
   }

   if (VAR_9 & VAR_3)
      return VAR_5;

   VAR_11 = FUNC_1(VAR_10->block_size - VAR_10->block_offset, VAR_8->buffer_size);
   VAR_11 = FUNC_2(VAR_7, VAR_8->data, VAR_11);
   VAR_10->block_offset += VAR_11;
   VAR_8->size = VAR_11;

   if (VAR_10->block_offset == VAR_10->block_size)
   {
      VAR_10->block_offset = 0;
      VAR_10->frame_header = 0;
      VAR_10->frames++;
   }

   VAR_10->status = VAR_11 ? VAR_5 : FUNC_4(VAR_7);
   return VAR_10->status;
}

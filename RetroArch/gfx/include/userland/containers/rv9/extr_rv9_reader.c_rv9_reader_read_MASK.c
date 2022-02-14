
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {unsigned int size; long long pts; long long dts; int flags; int * data; int buffer_size; scalar_t__ track; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
struct TYPE_12__ {long long timestamp; } ;
struct TYPE_15__ {int mid_frame; unsigned int frame_read; unsigned int frame_len; int type; TYPE_2__ hdr; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {TYPE_5__* module; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;
 unsigned int FUNC_2 (TYPE_3__*,unsigned int,int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_7,
                                              VC_CONTAINER_PACKET_T *VAR_8,
                                              uint32_t VAR_9 )
{
   VC_CONTAINER_MODULE_T *VAR_10 = VAR_7->priv->module;
   VC_CONTAINER_STATUS_T VAR_11;
   unsigned int VAR_12;

   if(!VAR_10->mid_frame)
   {
      if((VAR_11 = FUNC_3(VAR_7)) != VAR_5) return VAR_11;

      VAR_10->mid_frame = 1;
      VAR_10->frame_read = 0;
   }

   VAR_8->size = VAR_10->frame_len;
   VAR_8->pts = VAR_10->type < 3 ? VAR_10->hdr.timestamp * 1000LL : VAR_6;
   VAR_8->dts = VAR_8->pts;
   VAR_8->track = 0;
   VAR_8->flags = VAR_10->type < 2 ? VAR_2 : 0;
   if(VAR_10->frame_read == 0)
      VAR_8->flags |= VAR_1;

   if(VAR_9 & VAR_4)
   {
      VAR_12 = FUNC_2(VAR_7, VAR_10->frame_len - VAR_10->frame_read, ((void*)0));
      if(VAR_10->frame_read == VAR_10->frame_len)
      {
         VAR_10->frame_read = 0;
         VAR_10->mid_frame = 0;
      }
      return FUNC_1(VAR_7);
   }

   if(VAR_9 & VAR_3)
      return VAR_5;

   VAR_12 = FUNC_0(VAR_10->frame_len - VAR_10->frame_read, VAR_8->buffer_size);
   VAR_12 = FUNC_2(VAR_7, VAR_12, VAR_8->data);
   if(VAR_10->frame_read == VAR_10->frame_len)
   {
      VAR_10->frame_read = 0;
      VAR_10->mid_frame = 0;
      VAR_8->flags |= VAR_0;
   }
   VAR_8->size = VAR_12;

   return VAR_12 ? VAR_5 : FUNC_1(VAR_7);
}

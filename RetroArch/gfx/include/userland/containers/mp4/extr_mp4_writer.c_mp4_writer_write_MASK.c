
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int size; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {int flags; scalar_t__ size; int data; int track; int pts; int dts; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_18__ {int sample_offset; int samples; int tracks_add_done; TYPE_3__ sample; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_15__ {TYPE_4__* module; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_3,
                                               VC_CONTAINER_PACKET_T *VAR_4 )
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_3->priv->module;
   VC_CONTAINER_PACKET_T *VAR_6 = &VAR_5->sample;
   VC_CONTAINER_STATUS_T VAR_7;

   if(!VAR_5->tracks_add_done)
   {
      VAR_7 = FUNC_4(VAR_3);
      if(VAR_7 != VAR_2) return VAR_7;
   }

   if(VAR_4->flags & VAR_1)
      ++VAR_5->samples;

   if(VAR_4->flags & VAR_1)
   {
      VAR_5->sample_offset = FUNC_0(VAR_3);
      VAR_6->size = VAR_4->size;
      VAR_6->pts = VAR_4->pts;
      VAR_6->dts = VAR_4->pts;
      VAR_6->track = VAR_4->track;
      VAR_6->flags = VAR_4->flags;
   }
   else
   {
      VAR_6->size += VAR_4->size;
      VAR_6->flags |= VAR_4->flags;
   }

   if(FUNC_2(VAR_3, VAR_4->data, VAR_4->size) != VAR_4->size)
      return FUNC_1(VAR_3);
   VAR_3->size += VAR_4->size;


   if(VAR_4->flags & VAR_0)
   {
      VAR_7 = FUNC_5(VAR_3, VAR_6);
      VAR_7 = FUNC_3(VAR_3, VAR_6);
   }

   return VAR_2;
}

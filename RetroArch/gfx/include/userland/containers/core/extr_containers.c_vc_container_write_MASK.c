
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_17__ {scalar_t__ tracks_num; scalar_t__ size; TYPE_3__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_18__ {scalar_t__ track; scalar_t__ size; scalar_t__ frame_size; int flags; int dts; int pts; int num; scalar_t__ buffer_size; void* data; } ;
typedef TYPE_5__ VC_CONTAINER_PACKET_T ;
struct TYPE_16__ {scalar_t__ status; scalar_t__ max_size; scalar_t__ (* pf_write ) (TYPE_4__*,TYPE_5__*) ;scalar_t__ drm_filter; TYPE_2__* io; TYPE_1__* tmp_io; } ;
struct TYPE_15__ {scalar_t__ max_size; } ;
struct TYPE_14__ {int offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,void**,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_5__*) ;

VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_11, VC_CONTAINER_PACKET_T *VAR_12 )
{
   VC_CONTAINER_STATUS_T VAR_13;
   void * VAR_14 = ((void*)0);
   uint32_t VAR_15 = 0;


   if (!VAR_12 || !VAR_12->data || VAR_12->track >= VAR_11->tracks_num)
      return VAR_1;


   if(VAR_11->priv->status != VAR_8 && VAR_11->priv->status != VAR_3)
      return VAR_11->priv->status;


   if(VAR_11->priv->max_size &&
      VAR_11->size + VAR_12->size + VAR_10 > VAR_11->priv->max_size)
   {VAR_13 = VAR_2; goto end;}
   if(VAR_11->priv->io->max_size &&
      VAR_11->size + VAR_12->size + VAR_10 +
         (VAR_11->priv->tmp_io ? VAR_11->priv->tmp_io->offset : 0) > VAR_11->priv->io->max_size)
   {VAR_13 = VAR_4; goto end;}


   if(VAR_11->priv->drm_filter)
   {
      VAR_13 = FUNC_3(VAR_11->priv->drm_filter, VAR_12);

      if(VAR_13 == VAR_8)
      {

         if(FUNC_2(VAR_11, VAR_0,
             &VAR_14, &VAR_15) == VAR_8 && VAR_15 > 0)
         {

            VC_CONTAINER_PACKET_T VAR_16;
            VAR_16.data = VAR_14;
            VAR_16.buffer_size = VAR_15;
            VAR_16.size = VAR_15;
            VAR_16.frame_size = VAR_12->frame_size + VAR_15;
            VAR_16.pts = VAR_12->pts;
            VAR_16.dts = VAR_12->dts;
            VAR_16.num = VAR_12->num;
            VAR_16.track = VAR_12->track;


            VAR_16.flags = VAR_12->flags & ~VAR_6;

            VAR_12->pts = VAR_12->dts = VAR_9;
            VAR_12->flags &= ~VAR_7;
            if(VAR_11->priv->pf_write(VAR_11, &VAR_16) != VAR_8) goto end;
         }
      }
      else if (VAR_13 != VAR_5)
      {


         goto end;
      }
   }

   VAR_13 = VAR_11->priv->pf_write(VAR_11, VAR_12);

 end:
   VAR_11->priv->status = VAR_13;
   return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {size_t tracks_num; TYPE_2__* priv; TYPE_1__** tracks; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {size_t track; int flags; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
struct TYPE_13__ {scalar_t__ (* pf_read ) (TYPE_3__*,TYPE_4__*,int) ;scalar_t__ drm_filter; } ;
struct TYPE_12__ {int is_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_4__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_5,
   VC_CONTAINER_PACKET_T *VAR_6, uint32_t VAR_7 )
{
   VC_CONTAINER_STATUS_T VAR_8;

   while(1)
   {
      VAR_8 = VAR_5->priv->pf_read(VAR_5, VAR_6, VAR_7);
      if(VAR_8 == VAR_0)
         continue;

      if(!VAR_6 || (VAR_7 & VAR_3))
         return VAR_8;

      if(VAR_8 != VAR_4)
         return VAR_8;



      if(VAR_6->track >= VAR_5->tracks_num ||
         !VAR_5->tracks[VAR_6->track]->is_enabled ||
         ((VAR_6->flags & VAR_1) && !VAR_5->priv->drm_filter))
      {
         if(VAR_7 & VAR_2)
            VAR_8 = VAR_5->priv->pf_read(VAR_5, VAR_6, VAR_3);
         if(VAR_8 == VAR_4 || VAR_8 == VAR_0)
            continue;
      }
      if(VAR_8 != VAR_4)
         return VAR_8;

      if(VAR_5->priv->drm_filter)
         VAR_8 = FUNC_2(VAR_5->priv->drm_filter, VAR_6);

      break;
   }
   return VAR_8;
}

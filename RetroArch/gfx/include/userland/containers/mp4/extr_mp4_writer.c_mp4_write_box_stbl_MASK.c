
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_11__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {size_t current_track; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {scalar_t__ es_type; } ;
struct TYPE_8__ {TYPE_5__* module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_10 )
{
   VC_CONTAINER_STATUS_T VAR_11 = VAR_9;
   VC_CONTAINER_MODULE_T *VAR_12 = VAR_10->priv->module;
   VC_CONTAINER_TRACK_T *VAR_13 = VAR_10->tracks[VAR_12->current_track];

   VAR_11 = FUNC_0(VAR_10, VAR_4);
   if(VAR_11 != VAR_9) return VAR_11;

   VAR_11 = FUNC_0(VAR_10, VAR_7);
   if(VAR_11 != VAR_9) return VAR_11;

   if( 0 && VAR_13->format->es_type == VAR_8)
   {
      VAR_11 = FUNC_0(VAR_10, VAR_1);
      if(VAR_11 != VAR_9) return VAR_11;
   }

   VAR_11 = FUNC_0(VAR_10, VAR_3);
   if(VAR_11 != VAR_9) return VAR_11;

   VAR_11 = FUNC_0(VAR_10, VAR_6);
   if(VAR_11 != VAR_9) return VAR_11;

   if(1)
      VAR_11 = FUNC_0(VAR_10, VAR_2);
   else
      VAR_11 = FUNC_0(VAR_10, VAR_0);

   if(VAR_13->format->es_type == VAR_8)
   {
      VAR_11 = FUNC_0(VAR_10, VAR_5);
      if(VAR_11 != VAR_9) return VAR_11;
   }

   return VAR_11;
}

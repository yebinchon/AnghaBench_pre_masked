
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_17__ {scalar_t__ sample_size; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_18__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {size_t current_track; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {TYPE_2__* priv; } ;
struct TYPE_15__ {TYPE_4__* module; } ;
struct TYPE_14__ {TYPE_6__* module; } ;


 int FUNC_0 (TYPE_5__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_1, int64_t VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_4 = VAR_1->tracks[VAR_3->current_track]->priv->module;
   uint32_t VAR_5;

   FUNC_2(VAR_1, "version");
   FUNC_1(VAR_1, "flags");

   VAR_4->sample_size = FUNC_3(VAR_1, "sample_size");
   if(VAR_4->sample_size) return FUNC_4(VAR_1);

   VAR_5 = FUNC_0(VAR_1, "sample_count");
   return FUNC_5( VAR_1, VAR_0, VAR_5, VAR_2 );
}

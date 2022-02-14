
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_14__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {size_t current_track; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_12__ {scalar_t__ extradata_size; int extradata; } ;
struct TYPE_11__ {TYPE_5__* module; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_0 )
{
   VC_CONTAINER_MODULE_T *VAR_1 = VAR_0->priv->module;
   VC_CONTAINER_TRACK_T *VAR_2 = VAR_0->tracks[VAR_1->current_track];

   FUNC_4(VAR_0, VAR_2->format->extradata_size + 8, "size");
   FUNC_3(VAR_0, FUNC_1('a','v','c','C'), "type");
   FUNC_2(VAR_0, VAR_2->format->extradata, VAR_2->format->extradata_size);

   return FUNC_0(VAR_0);
}

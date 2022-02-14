
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef long long int64_t ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_SEEK_MODE_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
struct TYPE_13__ {scalar_t__ frame_read; scalar_t__ mid_frame; TYPE_3__* track; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {TYPE_2__* format; } ;
struct TYPE_10__ {int extradata_size; } ;
struct TYPE_9__ {TYPE_5__* module; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_2,
                                              int64_t *VAR_3,
                                              VC_CONTAINER_SEEK_MODE_T VAR_4,
                                              VC_CONTAINER_SEEK_FLAGS_T VAR_5)
{
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_2->priv->module;
   FUNC_2(VAR_5);

   if(*VAR_3 == 0LL && VAR_4 == VAR_1)
   {
      FUNC_0(VAR_2, VAR_6->track->format->extradata_size);
      VAR_6->mid_frame = 0;
      VAR_6->frame_read = 0;
      return FUNC_1(VAR_2);
   }
   else
      return VAR_0;
}

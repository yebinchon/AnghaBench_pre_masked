
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
struct TYPE_7__ {int frame_index; int frame_size_samples; int sample_rate; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_5__ {TYPE_3__* module; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int64_t FUNC_1( VC_CONTAINER_T *VAR_0 )
{
   VC_CONTAINER_MODULE_T *VAR_1 = VAR_0->priv->module;
   int64_t VAR_2;
   VAR_2 = FUNC_0(1000000) * VAR_1->frame_index *
      VAR_1->frame_size_samples / VAR_1->sample_rate;
   return VAR_2;
}

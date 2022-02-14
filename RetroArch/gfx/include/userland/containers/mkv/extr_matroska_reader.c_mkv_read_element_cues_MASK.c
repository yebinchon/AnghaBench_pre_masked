
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
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_7__ {int element_offset; int cues_offset; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_5__ {TYPE_3__* module; } ;
typedef int MKV_ELEMENT_ID_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_1, MKV_ELEMENT_ID_T VAR_2, int64_t VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_1->priv->module;
   FUNC_0(VAR_2);
   FUNC_0(VAR_3);
   VAR_4->cues_offset = VAR_4->element_offset;
   return VAR_0;
}

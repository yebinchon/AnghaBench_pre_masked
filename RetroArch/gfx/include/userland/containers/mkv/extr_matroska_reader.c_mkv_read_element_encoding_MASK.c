
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int encodings_num; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_13__ {TYPE_1__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {TYPE_3__* parsing; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {TYPE_4__* module; } ;
struct TYPE_9__ {TYPE_6__* module; } ;
typedef int MKV_ELEMENT_ID_T ;


 int FUNC_0 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_0, MKV_ELEMENT_ID_T VAR_1, int64_t VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_0->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_4 = VAR_3->parsing->priv->module;
   VC_CONTAINER_STATUS_T VAR_5;
   VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
   VAR_4->encodings_num++;
   return VAR_5;
}

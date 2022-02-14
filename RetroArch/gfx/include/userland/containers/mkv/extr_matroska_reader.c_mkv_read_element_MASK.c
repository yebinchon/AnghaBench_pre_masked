
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {TYPE_1__* module; } ;
struct TYPE_7__ {int * elements_list; } ;
typedef int MKV_ELEMENT_T ;
typedef int MKV_ELEMENT_ID_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int *,int *,int ,int **) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_1,
   int64_t VAR_2, MKV_ELEMENT_ID_T VAR_3)
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_0;
   MKV_ELEMENT_T *VAR_5 = VAR_1->priv->module->elements_list;
   int64_t VAR_6;
   MKV_ELEMENT_ID_T VAR_7;

   VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_7, &VAR_6, VAR_3, &VAR_5);
   if(VAR_4 != VAR_0) return VAR_4;
   return FUNC_0(VAR_1, VAR_5, VAR_6, VAR_2);
}

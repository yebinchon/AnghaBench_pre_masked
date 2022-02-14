
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {int element_level; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_7__ {TYPE_3__* module; } ;
typedef int MKV_ELEMENT_ID_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_2,
   MKV_ELEMENT_ID_T VAR_3, int64_t VAR_4)
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_6 = VAR_1;
   int64_t VAR_7 = FUNC_0(VAR_2);


   VAR_5->element_level++;
   while(VAR_6 == VAR_1 && VAR_4 >= VAR_0)
   {
      VAR_7 = FUNC_0(VAR_2);
      VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_3);
      VAR_4 -= (FUNC_0(VAR_2) - VAR_7);
   }
   VAR_5->element_level--;
   return VAR_6;
}

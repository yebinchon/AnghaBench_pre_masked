
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_9__ {TYPE_3__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* module; } ;
struct TYPE_6__ {scalar_t__ variant; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_0(VC_CONTAINER_T *VAR_2,
   unsigned int VAR_3, int64_t VAR_4, uint32_t VAR_5)
{
   if (VAR_2->tracks[VAR_3]->priv->module->variant == VAR_0 &&
       VAR_5 & 0x100)
      return VAR_1;

   return VAR_4;
}

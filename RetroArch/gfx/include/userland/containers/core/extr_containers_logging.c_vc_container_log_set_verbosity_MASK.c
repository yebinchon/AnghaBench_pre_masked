
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
struct TYPE_4__ {void* verbosity; } ;


 void* VAR_0 ;

void FUNC_0(VC_CONTAINER_T *VAR_1, uint32_t VAR_2)
{
   if(!VAR_1) VAR_0 = VAR_2;
   else VAR_1->priv->verbosity = VAR_2;
}

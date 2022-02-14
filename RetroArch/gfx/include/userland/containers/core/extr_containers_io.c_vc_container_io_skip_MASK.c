
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ offset; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_7__ {scalar_t__ cache; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 size_t FUNC_1 (TYPE_2__*,int *,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;

size_t FUNC_3(VC_CONTAINER_IO_T *VAR_0, size_t VAR_1)
{
   if(!VAR_1) return 0;

   if(VAR_1 < 8)
   {
      uint8_t VAR_2[8];
      return FUNC_1(VAR_0, VAR_2, VAR_1);
   }

   if(VAR_0->priv->cache)
   {
      if(FUNC_0(VAR_0, VAR_0->priv->cache, VAR_0->offset + VAR_1)) return 0;
      VAR_0->offset += VAR_1;
      return VAR_1;
   }

   if(FUNC_2(VAR_0, VAR_0->offset + VAR_1)) return 0;
   return VAR_1;
}

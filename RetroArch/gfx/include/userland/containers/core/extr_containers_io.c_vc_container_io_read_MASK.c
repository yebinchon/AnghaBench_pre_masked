
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {size_t (* pf_read ) (TYPE_2__*,void*,size_t) ;size_t offset; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {size_t actual_offset; scalar_t__ cache; } ;


 size_t FUNC_0 (TYPE_2__*,void*,size_t) ;
 size_t FUNC_1 (TYPE_2__*,scalar_t__,int *,size_t) ;

size_t FUNC_2(VC_CONTAINER_IO_T *VAR_0, void *VAR_1, size_t VAR_2)
{
   size_t VAR_3;

   if(VAR_0->priv->cache)
      VAR_3 = FUNC_1( VAR_0, VAR_0->priv->cache, (uint8_t*)VAR_1, VAR_2 );
   else
   {
      VAR_3 = VAR_0->pf_read(VAR_0, VAR_1, VAR_2);
      VAR_0->priv->actual_offset += VAR_3;
   }

   VAR_0->offset += VAR_3;
   return VAR_3;
}

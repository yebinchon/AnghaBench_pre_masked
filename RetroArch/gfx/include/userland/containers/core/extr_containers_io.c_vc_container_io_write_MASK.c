
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ (* pf_write ) (TYPE_2__*,void const*,size_t) ;int offset; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {int actual_offset; scalar_t__ cache; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,void const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int const*,size_t) ;

size_t FUNC_2(VC_CONTAINER_IO_T *VAR_0, const void *VAR_1, size_t VAR_2)
{
   int32_t VAR_3;

   if(VAR_0->priv->cache)
      VAR_3 = FUNC_1( VAR_0, VAR_0->priv->cache, (const uint8_t*)VAR_1, VAR_2 );
   else
   {
      VAR_3 = VAR_0->pf_write(VAR_0, VAR_1, VAR_2);
      VAR_0->priv->actual_offset += VAR_3;
   }

   VAR_0->offset += VAR_3;
   return VAR_3 < 0 ? 0 : VAR_3;
}

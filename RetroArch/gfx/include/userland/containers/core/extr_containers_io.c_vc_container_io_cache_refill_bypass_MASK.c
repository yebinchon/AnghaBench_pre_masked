
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_IO_T ;
struct TYPE_14__ {scalar_t__ offset; TYPE_9__* io; scalar_t__ position; scalar_t__ size; } ;
typedef TYPE_4__ VC_CONTAINER_IO_PRIVATE_CACHE_T ;
struct TYPE_15__ {scalar_t__ (* pf_seek ) (TYPE_9__*,scalar_t__) ;size_t (* pf_read ) (TYPE_9__*,int *,size_t) ;TYPE_2__* priv; } ;
struct TYPE_12__ {scalar_t__ actual_offset; } ;
struct TYPE_11__ {scalar_t__ actual_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_9__*,scalar_t__) ;
 size_t FUNC_1 (TYPE_9__*,int *,size_t) ;
 size_t FUNC_2 (TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static size_t FUNC_3( VC_CONTAINER_IO_T *VAR_1,
   VC_CONTAINER_IO_PRIVATE_CACHE_T *VAR_2, uint8_t *VAR_3, size_t VAR_4 )
{
   size_t VAR_5 = FUNC_2( VAR_1, VAR_2, 1 );

   if(VAR_5) return 0;

   if(VAR_1->priv->actual_offset != VAR_2->offset)
   {
      if(VAR_2->io->pf_seek(VAR_2->io, VAR_2->offset) != VAR_0)
         return 0;
   }

   VAR_5 = VAR_2->io->pf_read(VAR_2->io, VAR_3, VAR_4);
   VAR_2->size = VAR_2->position = 0;
   VAR_2->offset += VAR_5;
   VAR_2->io->priv->actual_offset = VAR_2->offset;
   return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_IO_T ;
struct TYPE_14__ {size_t position; size_t size; size_t offset; scalar_t__ mem_size; scalar_t__ mem_max_size; scalar_t__ mem; scalar_t__ buffer; scalar_t__ dirty; TYPE_7__* io; } ;
typedef TYPE_4__ VC_CONTAINER_IO_PRIVATE_CACHE_T ;
struct TYPE_15__ {scalar_t__ (* pf_seek ) (TYPE_7__*,size_t) ;size_t (* pf_write ) (TYPE_7__*,scalar_t__,size_t) ;TYPE_2__* priv; } ;
struct TYPE_12__ {size_t actual_offset; } ;
struct TYPE_11__ {size_t actual_offset; scalar_t__ async_io; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_4__*,int) ;
 size_t FUNC_1 (scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*,size_t) ;
 size_t FUNC_3 (TYPE_7__*,scalar_t__,size_t) ;

__attribute__((used)) static size_t FUNC_4( VC_CONTAINER_IO_T *VAR_2,
   VC_CONTAINER_IO_PRIVATE_CACHE_T *VAR_3, int VAR_4 )
{
   size_t VAR_5 = 0, VAR_6;

   if(VAR_3->position > VAR_3->size) VAR_3->size = VAR_3->position;

   if(VAR_3->dirty && VAR_3->size)
   {
      if(VAR_2->priv->actual_offset != VAR_3->offset)
      {
         if(VAR_2->priv->async_io) FUNC_0( VAR_2->priv->async_io, VAR_3, VAR_4 );

         if(VAR_3->io->pf_seek(VAR_3->io, VAR_3->offset) != VAR_1)
            return 0;
      }

      if(VAR_2->priv->async_io)
      {
         VAR_5 = FUNC_1( VAR_2->priv->async_io, VAR_3 );
         if(FUNC_0( VAR_2->priv->async_io, VAR_3, VAR_4 ) != VAR_1)
            VAR_5 = 0;
      }
      else
         VAR_5 = VAR_3->io->pf_write(VAR_3->io, VAR_3->buffer, VAR_3->size);

      VAR_3->io->priv->actual_offset = VAR_3->offset + VAR_5;
      VAR_5 = VAR_3->position - VAR_5;
   }
   VAR_3->dirty = 0;

   VAR_3->offset += VAR_3->size;
   if(VAR_3->mem_size == VAR_3->mem_max_size)
   {
      VAR_6 = VAR_3->offset &(VAR_0-1);
      VAR_3->buffer = VAR_3->mem + VAR_6;
   }

   VAR_3->position = VAR_3->size = 0;
   return VAR_5;
}

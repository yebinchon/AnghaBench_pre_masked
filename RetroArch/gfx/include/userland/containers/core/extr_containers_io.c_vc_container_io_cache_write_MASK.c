
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_12__ {int offset; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_IO_T ;
struct TYPE_13__ {scalar_t__ size; int dirty; size_t buffer_end; size_t buffer; size_t position; size_t mem_size; int offset; TYPE_9__* io; } ;
typedef TYPE_4__ VC_CONTAINER_IO_PRIVATE_CACHE_T ;
struct TYPE_14__ {size_t (* pf_write ) (TYPE_9__*,int const*,size_t) ;TYPE_2__* priv; } ;
struct TYPE_11__ {size_t actual_offset; } ;
struct TYPE_10__ {int async_io; } ;


 int FUNC_0 (size_t,int const*,size_t) ;
 size_t FUNC_1 (TYPE_9__*,int const*,size_t) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static int32_t FUNC_4( VC_CONTAINER_IO_T *VAR_0,
   VC_CONTAINER_IO_PRIVATE_CACHE_T *VAR_1, const uint8_t *VAR_2, size_t VAR_3 )
{
   int32_t VAR_4 = 0;
   size_t VAR_5, VAR_6;


   if(VAR_1->size && !VAR_1->dirty)
   {
      VAR_6 = FUNC_3( VAR_0, VAR_1, 1 );
      if(VAR_6) return -(int32_t)VAR_6;
   }

   while(VAR_3)
   {
      VAR_5 = (VAR_1->buffer_end - VAR_1->buffer) - VAR_1->position;


      if(!VAR_5)
      {

         VAR_6 = FUNC_3( VAR_0, VAR_1, 0 );
         if(VAR_6)
         {
            VAR_4 -= VAR_6;
            return VAR_4;
         }
         continue;
      }

      if(VAR_5 > VAR_3) VAR_5 = VAR_3;

      if(!VAR_0->priv->async_io && VAR_5 == VAR_1->mem_size)
      {

         VAR_6 = VAR_1->io->pf_write(VAR_1->io, VAR_2 + VAR_4, VAR_5);
         VAR_1->offset += VAR_6;
         VAR_1->io->priv->actual_offset += VAR_6;
      }
      else
      {

         FUNC_0(VAR_1->buffer + VAR_1->position, VAR_2 + VAR_4, VAR_5);
         VAR_1->position += VAR_5;
         VAR_1->dirty = 1;
         VAR_6 = VAR_5;
      }

      VAR_4 += VAR_6;
      if(VAR_6 != VAR_5) goto end;

      VAR_3 -= VAR_5;
   }

 end:
   FUNC_2(VAR_1->offset + (int64_t)VAR_1->position == VAR_0->offset + VAR_4);
   if(VAR_1->position > VAR_1->size) VAR_1->size = VAR_1->position;
   return VAR_4;
}

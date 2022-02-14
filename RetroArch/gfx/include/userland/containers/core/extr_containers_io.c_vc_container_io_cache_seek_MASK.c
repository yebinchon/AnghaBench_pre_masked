
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_IO_T ;
struct TYPE_16__ {scalar_t__ offset; size_t buffer; size_t mem; TYPE_9__* io; scalar_t__ dirty; scalar_t__ position; scalar_t__ size; } ;
typedef TYPE_4__ VC_CONTAINER_IO_PRIVATE_CACHE_T ;
struct TYPE_17__ {scalar_t__ (* pf_seek ) (TYPE_9__*,scalar_t__) ;size_t (* pf_read ) (TYPE_9__*,size_t,size_t) ;TYPE_2__* priv; } ;
struct TYPE_14__ {scalar_t__ actual_offset; } ;
struct TYPE_13__ {scalar_t__ async_io; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_9__*,scalar_t__) ;
 size_t FUNC_2 (TYPE_9__*,size_t,size_t) ;
 scalar_t__ FUNC_3 (TYPE_9__*,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_IO_T *VAR_1,
   VC_CONTAINER_IO_PRIVATE_CACHE_T *VAR_2, int64_t VAR_3)
{
   VC_CONTAINER_STATUS_T VAR_4;
   size_t VAR_5, VAR_6;


   if(VAR_3 >= VAR_2->offset && VAR_3 < VAR_2->offset + (int64_t)VAR_2->size)
   {
      VAR_2->position = VAR_3 - VAR_2->offset;
      return VAR_0;
   }

   VAR_5 = VAR_2->buffer - VAR_2->mem;
   if(!VAR_2->dirty && VAR_5 && VAR_2->size &&
      VAR_3 >= VAR_2->offset - (int64_t)VAR_5 && VAR_3 < VAR_2->offset)
   {

      VAR_4 = VAR_2->io->pf_seek(VAR_2->io, VAR_2->offset - VAR_5);
      if(VAR_4 != VAR_0) return VAR_4;
      VAR_2->offset -= VAR_5;
      VAR_2->buffer -= VAR_5;

      VAR_6 = VAR_2->io->pf_read(VAR_2->io, VAR_2->buffer, VAR_5);
      FUNC_4(VAR_6 == VAR_5);
      VAR_2->size += VAR_5;
      VAR_2->position = VAR_3 - VAR_2->offset;
      VAR_2->io->priv->actual_offset = VAR_2->offset + VAR_6;
      return VAR_0;
   }

   if(VAR_2->dirty) FUNC_5( VAR_1, VAR_2, 1 );


   if(VAR_1->priv->async_io) FUNC_0( VAR_1->priv->async_io, VAR_2, 1 );

   VAR_4 = VAR_2->io->pf_seek(VAR_2->io, VAR_3);
   if(VAR_4 != VAR_0) return VAR_4;

   FUNC_5( VAR_1, VAR_2, 1 );

   VAR_2->offset = VAR_3;
   VAR_2->io->priv->actual_offset = VAR_3;
   return VAR_0;
}

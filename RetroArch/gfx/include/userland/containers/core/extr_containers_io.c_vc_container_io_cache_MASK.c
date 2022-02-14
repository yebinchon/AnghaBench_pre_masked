
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_7__ {int capabilities; size_t (* pf_read ) (TYPE_1__*,scalar_t__,size_t) ;TYPE_2__* priv; scalar_t__ offset; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_8__ {size_t cached_areas_num; scalar_t__ actual_offset; TYPE_3__* cache; TYPE_3__* cached_areas; } ;
typedef TYPE_2__ VC_CONTAINER_IO_PRIVATE_T ;
struct TYPE_9__ {scalar_t__ position; scalar_t__ size; size_t mem_max_size; size_t mem_size; scalar_t__ mem; scalar_t__ buffer; scalar_t__ buffer_end; scalar_t__ end; scalar_t__ offset; TYPE_1__* io; scalar_t__ start; } ;
typedef TYPE_3__ VC_CONTAINER_IO_PRIVATE_CACHE_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 size_t FUNC_2 (TYPE_1__*,scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

size_t FUNC_4(VC_CONTAINER_IO_T *VAR_6, size_t VAR_7)
{
   VC_CONTAINER_IO_PRIVATE_T *VAR_8 = VAR_6->priv;
   VC_CONTAINER_IO_PRIVATE_CACHE_T *VAR_9, *VAR_10;
   VC_CONTAINER_STATUS_T VAR_11;


   if(VAR_8->cached_areas_num >= VAR_0) return 0;

   VAR_9 = &VAR_8->cached_areas[VAR_8->cached_areas_num];
   VAR_9->start = VAR_6->offset;
   VAR_9->end = VAR_9->start + VAR_7;
   VAR_9->offset = VAR_6->offset;
   VAR_9->position = 0;
   VAR_9->size = 0;
   VAR_9->io = VAR_6;


   if(VAR_6->capabilities & VAR_3)
      VAR_9->mem_max_size = VAR_1;
   else if((VAR_6->capabilities & VAR_4) &&
           VAR_7 <= VAR_1)
      VAR_9->mem_max_size = VAR_1;
   else
      VAR_9->mem_max_size = VAR_2;

   VAR_9->mem_size = VAR_7;
   if(VAR_9->mem_size > VAR_9->mem_max_size) VAR_9->mem_size = VAR_9->mem_max_size;
   VAR_9->mem = FUNC_0(VAR_9->mem_size);

   VAR_9->buffer = VAR_9->mem;
   VAR_9->buffer_end = VAR_9->mem + VAR_9->mem_size;

   if(!VAR_9->mem) return 0;
   VAR_8->cached_areas_num++;


   VAR_10 = VAR_6->priv->cache;
   if(VAR_10 && VAR_10->position < VAR_10->size)
   {
      VAR_9->size = VAR_10->size - VAR_10->position;
      if(VAR_9->size > VAR_9->mem_size) VAR_9->size = VAR_9->mem_size;
      FUNC_1(VAR_9->buffer, VAR_10->buffer + VAR_10->position, VAR_9->size);
      VAR_10->position += VAR_9->size;
   }


   if(VAR_9->mem_size > VAR_9->size)
   {
      size_t VAR_12 = VAR_9->io->pf_read(VAR_9->io, VAR_9->buffer + VAR_9->size,
                                      VAR_9->mem_size - VAR_9->size);
      VAR_9->size += VAR_12;
      VAR_9->io->priv->actual_offset = VAR_9->offset + VAR_9->size;
   }

   VAR_11 = FUNC_3(VAR_6, VAR_9->end);
   if(VAR_11 != VAR_5)
      return 0;

   if(VAR_6->capabilities & VAR_3)
      return VAR_9->size;
   else
      return VAR_7;
}

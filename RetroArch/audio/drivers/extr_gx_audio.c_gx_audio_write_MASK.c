
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ write_ptr; size_t dma_write; size_t dma_next; size_t dma_busy; scalar_t__* data; int nonblock; } ;
typedef TYPE_1__ gx_audio_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(void *VAR_2, const void *VAR_3, size_t VAR_4)
{
   size_t VAR_5 = VAR_4 >> 2;
   const uint32_t *VAR_6 = VAR_3;
   gx_audio_t *VAR_7 = VAR_2;

   while (VAR_5)
   {
      size_t VAR_8 = VAR_1 - VAR_7->write_ptr;

      if (VAR_5 < VAR_8)
         VAR_8 = VAR_5;



      while ((VAR_7->dma_write == VAR_7->dma_next ||
               VAR_7->dma_write == VAR_7->dma_busy) && !VAR_7->nonblock);

      FUNC_0(VAR_7->data[VAR_7->dma_write] + VAR_7->write_ptr, VAR_6, VAR_8);

      VAR_7->write_ptr += VAR_8;
      VAR_5 -= VAR_8;
      VAR_6 += VAR_8;

      if (VAR_7->write_ptr >= VAR_1)
      {
         VAR_7->write_ptr -= VAR_1;
         VAR_7->dma_write = (VAR_7->dma_write + 1) & (VAR_0 - 1);
      }
   }

   return VAR_4;
}

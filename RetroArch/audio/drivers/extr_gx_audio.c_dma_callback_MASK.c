
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {size_t dma_busy; size_t dma_next; scalar_t__* data; } ;
typedef TYPE_1__ gx_audio_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
   gx_audio_t *VAR_4 = (gx_audio_t*)VAR_2;

   if (VAR_3)
      return;


   FUNC_2(VAR_4->data[VAR_4->dma_busy], 0, VAR_1);

   VAR_4->dma_busy = VAR_4->dma_next;
   VAR_4->dma_next = (VAR_4->dma_next + 1) & (VAR_0 - 1);

   FUNC_1(VAR_4->data[VAR_4->dma_next], VAR_1);

   FUNC_0((uint32_t)VAR_4->data[VAR_4->dma_next], VAR_1);
}

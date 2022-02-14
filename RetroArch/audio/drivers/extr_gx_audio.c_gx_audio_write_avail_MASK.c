
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_busy; int dma_write; } ;
typedef TYPE_1__ gx_audio_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_0(void *VAR_2)
{
   gx_audio_t *VAR_3 = (gx_audio_t*)VAR_2;
   return ((VAR_3->dma_busy - VAR_3->dma_write + VAR_0)
         & (VAR_0 - 1)) * VAR_1;
}

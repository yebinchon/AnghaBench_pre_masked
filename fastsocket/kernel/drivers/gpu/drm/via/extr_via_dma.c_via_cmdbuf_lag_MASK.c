
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ dma_offset; scalar_t__* hw_addr_ptr; scalar_t__ dma_low; scalar_t__ dma_wrap; scalar_t__ agpAddr; } ;
typedef TYPE_1__ drm_via_private_t ;



__attribute__((used)) static uint32_t FUNC_0(drm_via_private_t *VAR_0)
{
 uint32_t VAR_1 = VAR_0->dma_offset + (uint32_t) VAR_0->agpAddr;
 uint32_t VAR_2 = *(VAR_0->hw_addr_ptr) - VAR_1;

 return ((VAR_2 <= VAR_0->dma_low) ?
  (VAR_0->dma_low - VAR_2) :
  (VAR_0->dma_wrap + VAR_0->dma_low - VAR_2));
}

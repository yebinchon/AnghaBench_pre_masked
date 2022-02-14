
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ dma_low; scalar_t__ dma_high; scalar_t__ dma_ptr; } ;
typedef TYPE_1__ drm_via_private_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static inline uint32_t *FUNC_2(drm_via_private_t * VAR_1,
          unsigned int VAR_2)
{
 if ((VAR_1->dma_low + VAR_2 + 4 * VAR_0) >
     VAR_1->dma_high) {
  FUNC_0(VAR_1);
 }
 if (FUNC_1(VAR_1, VAR_2) != 0)
  return ((void*)0);

 return (uint32_t *) (VAR_1->dma_ptr + VAR_1->dma_low);
}

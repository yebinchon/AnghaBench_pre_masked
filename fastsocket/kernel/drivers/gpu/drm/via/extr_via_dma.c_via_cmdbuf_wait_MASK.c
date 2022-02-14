
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ dma_offset; scalar_t__* hw_addr_ptr; scalar_t__ dma_low; scalar_t__ agpAddr; } ;
typedef TYPE_1__ drm_via_private_t ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(drm_via_private_t *VAR_0, unsigned int VAR_1)
{
 uint32_t VAR_2 = VAR_0->dma_offset + (uint32_t) VAR_0->agpAddr;
 uint32_t VAR_3, VAR_4, VAR_5;
 volatile uint32_t *VAR_6;
 uint32_t VAR_7;
 VAR_6 = VAR_0->hw_addr_ptr;
 VAR_3 = VAR_0->dma_low;
 VAR_5 = VAR_3 + VAR_1 + 512 * 1024;
 VAR_7 = 1000000;
 do {
  VAR_4 = *VAR_6 - VAR_2;
  if (VAR_7-- == 0) {
   FUNC_0
       ("via_cmdbuf_wait timed out hw %x cur_addr %x next_addr %x\n",
        VAR_4, VAR_3, VAR_5);
   return -1;
  }
  if ((VAR_3 < VAR_4) && (VAR_5 >= VAR_4))
   FUNC_1(1);
 } while ((VAR_3 < VAR_4) && (VAR_5 >= VAR_4));
 return 0;
}

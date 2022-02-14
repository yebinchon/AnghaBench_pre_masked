
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* last_pause_ptr; int* hw_addr_ptr; char volatile* dma_ptr; int dma_offset; int dma_diff; int dma_high; scalar_t__ agpAddr; } ;
typedef TYPE_1__ drm_via_private_t ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(drm_via_private_t *VAR_3,
       uint32_t VAR_4, uint32_t VAR_5,
       int VAR_6)
{
 int VAR_7, VAR_8;
 volatile uint32_t *VAR_9 = VAR_3->last_pause_ptr;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12;

 VAR_7 = 0;
 FUNC_3();
 (void) *(volatile uint32_t *)(FUNC_4(VAR_3) - 1);

 *VAR_9 = VAR_5;
 FUNC_3();
 (void) *VAR_9;

 VAR_10 = *(VAR_3->hw_addr_ptr);
 VAR_11 = ((volatile char *)VAR_9 - VAR_3->dma_ptr) +
  VAR_3->dma_offset + (uint32_t) VAR_3->agpAddr + 4;

 VAR_3->last_pause_ptr = FUNC_4(VAR_3) - 1;
 VAR_12 = (uint32_t) (VAR_11 - VAR_10) - VAR_3->dma_diff;
 VAR_8 = 10000000;
 while (VAR_12 == 0 && VAR_8--) {
  VAR_7 = (FUNC_1(0x41c) & 0x80000000);
  if (VAR_7)
   break;
  VAR_10 = *(VAR_3->hw_addr_ptr);
  VAR_12 = (uint32_t) (VAR_11 - VAR_10) - VAR_3->dma_diff;
 }

 VAR_7 = FUNC_1(0x41c) & 0x80000000;

 if (VAR_7 && !VAR_6) {
  VAR_10 = *(VAR_3->hw_addr_ptr);
  VAR_12 = (uint32_t) (VAR_11 - VAR_10) - VAR_3->dma_diff;
  VAR_12 &= (VAR_3->dma_high - 1);
  if (VAR_12 != 0 && VAR_12 < (VAR_3->dma_high >> 1)) {
   FUNC_0("Paused at incorrect address. "
      "0x%08x, 0x%08x 0x%08x\n",
      VAR_11, VAR_10, VAR_3->dma_diff);
  } else if (VAR_12 == 0) {






   FUNC_2(VAR_1, (VAR_0 << 16));
   FUNC_2(VAR_2, VAR_4);
   FUNC_2(VAR_2, VAR_5);
   FUNC_1(VAR_2);
  }
 }
 return VAR_7;
}

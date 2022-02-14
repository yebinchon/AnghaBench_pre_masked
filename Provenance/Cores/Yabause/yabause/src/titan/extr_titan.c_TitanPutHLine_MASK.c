
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct PixelData {int pixel; } ;
typedef size_t s32 ;
struct TYPE_2__ {size_t vdp2width; struct PixelData** vdp2framebuffer; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(int VAR_1, s32 VAR_2, s32 VAR_3, s32 VAR_4, u32 VAR_5)
{
   if (VAR_1 == 0) return;

   {
      struct PixelData * VAR_6 = &VAR_0.vdp2framebuffer[VAR_1][ (VAR_3 * VAR_0.vdp2width) + VAR_2];
      int VAR_7;

      for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
         VAR_6[VAR_7].pixel = VAR_5;
   }
}

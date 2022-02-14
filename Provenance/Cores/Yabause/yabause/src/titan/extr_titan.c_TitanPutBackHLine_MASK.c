
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct PixelData {int pixel; } ;
typedef size_t s32 ;
struct TYPE_2__ {size_t vdp2width; struct PixelData* backscreen; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(s32 VAR_1, u32 VAR_2)
{
   struct PixelData* VAR_3 = &VAR_0.backscreen[(VAR_1 * VAR_0.vdp2width)];
   int VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_0.vdp2width; VAR_4++)
      VAR_3[VAR_4].pixel = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PixelData {int dummy; } ;
struct TYPE_2__ {int vdp2height; int vdp2width; int * vdp2framebuffer; } ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1()
{
   int VAR_2 = 0;

   int VAR_3 = VAR_0.vdp2height;

   if (VAR_1)
      VAR_3 /= 2;

   for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
      FUNC_0(VAR_0.vdp2framebuffer[VAR_2], 0, sizeof(struct PixelData) * VAR_0.vdp2width * VAR_3);
}

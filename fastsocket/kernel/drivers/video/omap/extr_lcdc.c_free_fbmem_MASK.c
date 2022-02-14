
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vram_phys; int vram_virt; int vram_size; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0(VAR_0.fbdev->dev, VAR_0.vram_size,
         VAR_0.vram_virt, VAR_0.vram_phys);
}

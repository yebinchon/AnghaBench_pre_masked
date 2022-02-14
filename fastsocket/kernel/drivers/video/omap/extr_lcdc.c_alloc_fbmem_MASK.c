
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_mem_region {int size; int alloc; int * vaddr; int paddr; } ;
struct lcd_panel {int bpp; int x_res; int y_res; } ;
struct TYPE_4__ {int vram_size; int * vram_virt; int vram_phys; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; struct lcd_panel* panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,int,int *,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct omapfb_mem_region *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct lcd_panel *VAR_6 = VAR_2.fbdev->panel;

 VAR_4 = VAR_6->bpp;
 if (VAR_4 == 12)
  VAR_4 = 16;
 VAR_5 = FUNC_0(VAR_6->x_res * VAR_4 / 8 * VAR_6->y_res);
 if (VAR_3->size > VAR_5)
  VAR_5 = VAR_3->size;
 VAR_2.vram_size = VAR_5;
 VAR_2.vram_virt = FUNC_2(VAR_2.fbdev->dev,
   VAR_2.vram_size, &VAR_2.vram_phys, VAR_1);
 if (VAR_2.vram_virt == ((void*)0)) {
  FUNC_1(VAR_2.fbdev->dev, "unable to allocate FB DMA memory\n");
  return -VAR_0;
 }
 VAR_3->size = VAR_5;
 VAR_3->paddr = VAR_2.vram_phys;
 VAR_3->vaddr = VAR_2.vram_virt;
 VAR_3->alloc = 1;

 FUNC_3(VAR_2.vram_virt, 0, VAR_2.vram_size);

 return 0;
}

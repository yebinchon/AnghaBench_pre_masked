
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omapfb_mem_desc {int region_cnt; TYPE_3__* region; } ;
struct TYPE_6__ {scalar_t__ paddr; int size; } ;
struct TYPE_5__ {int fbmem_allocated; scalar_t__ vram_phys; int vram_virt; int vram_size; TYPE_1__* fbdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct omapfb_mem_desc *VAR_2)
{
 int VAR_3;

 if (!VAR_2->region_cnt) {
  FUNC_2(VAR_1.fbdev->dev, "no memory regions defined\n");
  return -VAR_0;
 }

 if (VAR_2->region_cnt > 1) {
  FUNC_2(VAR_1.fbdev->dev, "only one plane is supported\n");
  VAR_2->region_cnt = 1;
 }

 if (VAR_2->region[0].paddr == 0) {
  VAR_1.fbmem_allocated = 1;
  if ((VAR_3 = FUNC_0(&VAR_2->region[0])) < 0)
   return VAR_3;
  return 0;
 }

 VAR_1.vram_phys = VAR_2->region[0].paddr;
 VAR_1.vram_size = VAR_2->region[0].size;

 if ((VAR_3 = FUNC_3()) < 0)
  return VAR_3;

 FUNC_1(VAR_1.fbdev->dev, "vram at %08x size %08lx mapped to 0x%p\n",
   VAR_1.vram_phys, VAR_1.vram_size, VAR_1.vram_virt);

 return 0;
}

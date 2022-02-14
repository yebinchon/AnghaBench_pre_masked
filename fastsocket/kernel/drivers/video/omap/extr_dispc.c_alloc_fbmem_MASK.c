
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_mem_region {int * vaddr; int paddr; int size; } ;
struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_2 ;
 int * FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct omapfb_mem_region *VAR_3)
{
 VAR_3->vaddr = FUNC_1(VAR_2.fbdev->dev,
   VAR_3->size, &VAR_3->paddr, VAR_1);

 if (VAR_3->vaddr == ((void*)0)) {
  FUNC_0(VAR_2.fbdev->dev, "unable to allocate FB DMA memory\n");
  return -VAR_0;
 }

 return 0;
}

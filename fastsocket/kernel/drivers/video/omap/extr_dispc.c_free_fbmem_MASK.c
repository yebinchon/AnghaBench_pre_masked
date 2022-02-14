
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_mem_region {int paddr; int vaddr; int size; } ;
struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct omapfb_mem_region *VAR_1)
{
 FUNC_0(VAR_0.fbdev->dev, VAR_1->size,
         VAR_1->vaddr, VAR_1->paddr);
}

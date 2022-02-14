
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fbdev; int * palette_vaddr; int palette_paddr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_3 ;
 int * FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_3.palette_vaddr = FUNC_1(VAR_3.fbdev->dev,
  VAR_2, &VAR_3.palette_paddr, VAR_1);
 if (VAR_3.palette_vaddr == ((void*)0)) {
  FUNC_0(VAR_3.fbdev->dev, "failed to alloc palette memory\n");
  return -VAR_0;
 }

 return 0;
}

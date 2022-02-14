
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * palette_virt; TYPE_1__* fbdev; int palette_phys; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 VAR_3.palette_virt = FUNC_1(VAR_3.fbdev->dev,
  VAR_2, &VAR_3.palette_phys, VAR_1);
 if (VAR_3.palette_virt == ((void*)0)) {
  FUNC_0(VAR_3.fbdev->dev, "failed to alloc palette memory\n");
  return -VAR_0;
 }
 FUNC_2(VAR_3.palette_virt, 0, VAR_2);

 return 0;
}

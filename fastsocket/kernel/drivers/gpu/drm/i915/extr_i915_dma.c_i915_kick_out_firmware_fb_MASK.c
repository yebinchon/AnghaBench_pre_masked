
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {TYPE_3__* resource; } ;
struct TYPE_6__ {scalar_t__ start; scalar_t__ mappable_end; int mappable_base; } ;
struct drm_i915_private {TYPE_2__ gtt; TYPE_4__* dev; } ;
struct apertures_struct {TYPE_1__* ranges; } ;
struct TYPE_8__ {struct pci_dev* pdev; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {scalar_t__ size; int base; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct apertures_struct* FUNC_0 (int) ;
 int FUNC_1 (struct apertures_struct*) ;
 int FUNC_2 (struct apertures_struct*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_2)
{
 struct apertures_struct *VAR_3;
 struct pci_dev *VAR_4 = VAR_2->dev->pdev;
 bool VAR_5;

 VAR_3 = FUNC_0(1);
 if (!VAR_3)
  return;

 VAR_3->ranges[0].base = VAR_2->gtt.mappable_base;
 VAR_3->ranges[0].size = VAR_2->gtt.mappable_end - VAR_2->gtt.start;

 VAR_5 =
  VAR_4->resource[VAR_1].flags & VAR_0;

 FUNC_2(VAR_3, "inteldrmfb", VAR_5);

 FUNC_1(VAR_3);
}

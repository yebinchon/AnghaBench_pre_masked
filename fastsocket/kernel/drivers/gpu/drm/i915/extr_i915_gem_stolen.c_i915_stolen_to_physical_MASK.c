
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {TYPE_1__* gtt; } ;
struct drm_i915_private {TYPE_2__ mm; struct pci_dev* bridge_dev; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_6__ {int gen; } ;
struct TYPE_4__ {scalar_t__ stolen_size; } ;


 TYPE_3__* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;

__attribute__((used)) static unsigned long FUNC_5(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 struct pci_dev *VAR_4 = VAR_3->bridge_dev;
 u32 VAR_5;
 VAR_5 = 0;
 if (FUNC_0(VAR_2)->gen >= 6) {




  FUNC_4(VAR_4, 0xB0, &VAR_5);
  VAR_5 &= ~4095;
 } else if (FUNC_0(VAR_2)->gen > 3 || FUNC_1(VAR_2)) {

  FUNC_4(VAR_4, 0xA4, &VAR_5);
 }

 return VAR_5;
}

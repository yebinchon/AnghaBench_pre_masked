
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct drm_device {int pci_device; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct drm_device *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_1);
 const int VAR_3 = VAR_1->pci_device & 0x0ff0;

 if (FUNC_1(VAR_2->device)->card_type >= VAR_0 && VAR_3 != 0x0100 &&
     VAR_3 != 0x0150 && VAR_3 != 0x01a0 && VAR_3 != 0x0200)
  return 1;

 return 0;
}

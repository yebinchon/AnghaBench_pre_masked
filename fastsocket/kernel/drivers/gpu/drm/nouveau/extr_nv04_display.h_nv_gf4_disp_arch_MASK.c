
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int pci_device; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;

__attribute__((used)) static inline bool
FUNC_1(struct drm_device *VAR_0)
{
 return FUNC_0(VAR_0) && (VAR_0->pci_device & 0x0ff0) != 0x0110;
}


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
 int FUNC_1 (struct drm_device*,int,int,int*,int*) ;
 int FUNC_2 (int*,int*) ;
 TYPE_1__* FUNC_3 (int ) ;

void
FUNC_4(struct drm_device *VAR_1, int VAR_2, int VAR_3, int *VAR_4, int *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_0(VAR_1);

 if (FUNC_3(VAR_6->device)->card_type < VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else if ((VAR_1->pci_device & 0xfff0) == 0x0240 ||
   (VAR_1->pci_device & 0xfff0) == 0x03d0 ) {
  *VAR_4 = 128;
  *VAR_5 = 0x0480;
 } else
  FUNC_2(VAR_4, VAR_5);
}

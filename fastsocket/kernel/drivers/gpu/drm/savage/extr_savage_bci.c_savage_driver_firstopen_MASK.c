
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int pdev; TYPE_2__* dev_private; } ;
struct TYPE_4__ {scalar_t__ chipset; int aperture; int fb; int mmio; TYPE_1__* mtrr; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_3__ {int handle; unsigned long base; int size; } ;


 int FUNC_0 (char*,unsigned long long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct drm_device*,unsigned long,unsigned long,int ,int ,int *) ;
 void* FUNC_3 (unsigned long,int,int ) ;
 int FUNC_4 (int ,int) ;
 unsigned long FUNC_5 (int ,int) ;

int FUNC_6(struct drm_device *VAR_12)
{
 drm_savage_private_t *VAR_13 = VAR_12->dev_private;
 unsigned long VAR_14, VAR_15, VAR_16, VAR_17;




 unsigned int VAR_18, VAR_19;
 int VAR_20 = 0;

 VAR_13->mtrr[0].handle = -1;
 VAR_13->mtrr[1].handle = -1;
 VAR_13->mtrr[2].handle = -1;
 if (FUNC_1(VAR_13->chipset)) {
  VAR_18 = 0;
  VAR_15 = FUNC_5(VAR_12->pdev, 0);
  VAR_16 = VAR_5;
  VAR_14 = VAR_15 + VAR_5;
  VAR_19 = 0;
  VAR_17 = VAR_15 + VAR_3;

  if (FUNC_4(VAR_12->pdev, 0) == 0x08000000) {


   VAR_13->mtrr[0].base = VAR_15;
   VAR_13->mtrr[0].size = 0x01000000;
   VAR_13->mtrr[0].handle =
       FUNC_3(VAR_13->mtrr[0].base,
             VAR_13->mtrr[0].size, VAR_0);
   VAR_13->mtrr[1].base = VAR_15 + 0x02000000;
   VAR_13->mtrr[1].size = 0x02000000;
   VAR_13->mtrr[1].handle =
       FUNC_3(VAR_13->mtrr[1].base,
      VAR_13->mtrr[1].size, VAR_0);
   VAR_13->mtrr[2].base = VAR_15 + 0x04000000;
   VAR_13->mtrr[2].size = 0x04000000;
   VAR_13->mtrr[2].handle =
       FUNC_3(VAR_13->mtrr[2].base,
      VAR_13->mtrr[2].size, VAR_0);
  } else {
   FUNC_0("strange pci_resource_len %08llx\n",
      (unsigned long long)
      FUNC_4(VAR_12->pdev, 0));
  }
 } else if (VAR_13->chipset != VAR_2 &&
     VAR_13->chipset != VAR_1) {
  VAR_14 = FUNC_5(VAR_12->pdev, 0);
  VAR_18 = 1;
  VAR_15 = FUNC_5(VAR_12->pdev, 1);
  VAR_16 = VAR_6;
  VAR_19 = 1;
  VAR_17 = VAR_15 + VAR_3;

  if (FUNC_4(VAR_12->pdev, 1) == 0x08000000) {


   VAR_13->mtrr[0].base = VAR_15;
   VAR_13->mtrr[0].size = 0x08000000;
   VAR_13->mtrr[0].handle =
       FUNC_3(VAR_13->mtrr[0].base,
      VAR_13->mtrr[0].size, VAR_0);
  } else {
   FUNC_0("strange pci_resource_len %08llx\n",
      (unsigned long long)
      FUNC_4(VAR_12->pdev, 1));
  }
 } else {
  VAR_14 = FUNC_5(VAR_12->pdev, 0);
  VAR_18 = 1;
  VAR_15 = FUNC_5(VAR_12->pdev, 1);
  VAR_16 = FUNC_4(VAR_12->pdev, 1);
  VAR_19 = 2;
  VAR_17 = FUNC_5(VAR_12->pdev, 2);

 }

 VAR_20 = FUNC_2(VAR_12, VAR_14, VAR_7, VAR_10,
    VAR_9, &VAR_13->mmio);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_12, VAR_15, VAR_16, VAR_8,
    VAR_11, &VAR_13->fb);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_12, VAR_17, VAR_4,
    VAR_8, VAR_11,
    &VAR_13->aperture);
 return VAR_20;
}

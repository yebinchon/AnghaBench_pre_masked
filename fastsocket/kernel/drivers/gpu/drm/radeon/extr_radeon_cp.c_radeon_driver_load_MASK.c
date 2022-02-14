
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int pdev; void* dev_private; } ;
struct TYPE_3__ {unsigned long flags; int mmio; } ;
typedef TYPE_1__ drm_radeon_private_t ;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct drm_device*,int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct drm_device*) ;

int FUNC_10(struct drm_device *VAR_10, unsigned long VAR_11)
{
 drm_radeon_private_t *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_4(sizeof(drm_radeon_private_t), VAR_1);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_10->dev_private = (void *)VAR_12;
 VAR_12->flags = VAR_11;

 switch (VAR_11 & VAR_2) {
 case 139:
 case 131:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 130:
 case 129:
 case 133:
 case 128:
 case 132:
  VAR_12->flags |= VAR_3;
  break;
 default:

  break;
 }

 FUNC_8(VAR_10->pdev);

 if (FUNC_2(VAR_10))
  VAR_12->flags |= VAR_4;
 else if (FUNC_5(VAR_10->pdev))
  VAR_12->flags |= VAR_6;
 else
  VAR_12->flags |= VAR_5;

 VAR_13 = FUNC_1(VAR_10, FUNC_7(VAR_10->pdev, 2),
    FUNC_6(VAR_10->pdev, 2), VAR_9,
    VAR_8 | VAR_7, &VAR_12->mmio);
 if (VAR_13 != 0)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_10, 2);
 if (VAR_13) {
  FUNC_9(VAR_10);
  return VAR_13;
 }

 FUNC_0("%s card detected\n",
    ((VAR_12->flags & VAR_4) ? "AGP" : (((VAR_12->flags & VAR_6) ? "PCIE" : "PCI"))));
 return VAR_13;
}

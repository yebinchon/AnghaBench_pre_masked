
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {struct drm_device* ddev; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct radeon_device *VAR_25)
{
 struct drm_device *VAR_26 = VAR_25->ddev;
 bool VAR_27 = 0;
 u32 VAR_28;


 FUNC_2(VAR_9, 0);
 FUNC_2(VAR_12, 0);
 FUNC_2(VAR_24, 0);
 FUNC_2(VAR_8, 0);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_0, 0);
 FUNC_2(VAR_1, 0);






 switch (VAR_26->pdev->device) {

 case 0x515e:
 case 0x5969:
  VAR_27 = 1;
  break;

 case 0x5159:
 case 0x515a:

  if ((VAR_26->pdev->subsystem_vendor == 0x1028 ) &&
      ((VAR_26->pdev->subsystem_device == 0x016c) ||
       (VAR_26->pdev->subsystem_device == 0x016d) ||
       (VAR_26->pdev->subsystem_device == 0x016e) ||
       (VAR_26->pdev->subsystem_device == 0x016f) ||
       (VAR_26->pdev->subsystem_device == 0x0170) ||
       (VAR_26->pdev->subsystem_device == 0x017d) ||
       (VAR_26->pdev->subsystem_device == 0x017e) ||
       (VAR_26->pdev->subsystem_device == 0x0183) ||
       (VAR_26->pdev->subsystem_device == 0x018a) ||
       (VAR_26->pdev->subsystem_device == 0x019a)))
   VAR_27 = 1;
  break;
 }

 if (VAR_27) {
  u32 VAR_29 = FUNC_0(VAR_6);
  u32 VAR_30 = FUNC_0(VAR_15);
  u32 VAR_31 = FUNC_0(VAR_5);






  VAR_31 &= ~VAR_4;
  VAR_31 |= VAR_3;
  VAR_29 |= VAR_2;


  VAR_30 &= ~(VAR_20 |
     VAR_22 |
     VAR_21 |
     VAR_17 |
     VAR_13 |
     VAR_14 |
     VAR_16);
  VAR_30 |= (VAR_18 |
    VAR_19 |
    VAR_23 |
    (0x58 << 16));

  FUNC_2(VAR_15, VAR_30);
  FUNC_2(VAR_6, VAR_29);
  FUNC_2(VAR_5, VAR_31);
 }


 VAR_28 = FUNC_1(VAR_10);
 VAR_28 &= ~VAR_11;
 FUNC_3(VAR_10, VAR_28);

}

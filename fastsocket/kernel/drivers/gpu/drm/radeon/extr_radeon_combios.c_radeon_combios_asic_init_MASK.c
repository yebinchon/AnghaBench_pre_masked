
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct radeon_device {int flags; scalar_t__ family; TYPE_1__* pdev; int * bios; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {int subsystem_vendor; int subsystem_device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,scalar_t__) ;
 int FUNC_2 (struct drm_device*,scalar_t__) ;
 int FUNC_3 (struct drm_device*,scalar_t__) ;
 int FUNC_4 (struct drm_device*) ;

void FUNC_5(struct drm_device *VAR_9)
{
 struct radeon_device *VAR_10 = VAR_9->dev_private;
 uint16_t VAR_11;


 if (VAR_10->bios == ((void*)0))
  return;


 VAR_11 = FUNC_0(VAR_9, VAR_1);
 if (VAR_11)
  FUNC_1(VAR_9, VAR_11);


 VAR_11 = FUNC_0(VAR_9, VAR_6);
 if (VAR_11)
  FUNC_2(VAR_9, VAR_11);


 VAR_11 = FUNC_0(VAR_9, VAR_2);
 if (VAR_11)
  FUNC_1(VAR_9, VAR_11);

 if (!(VAR_10->flags & VAR_8)) {

  VAR_11 =
      FUNC_0(VAR_9, VAR_4);
  if (VAR_11)
   FUNC_1(VAR_9, VAR_11);


  VAR_11 = FUNC_0(VAR_9, VAR_7);
  if (VAR_11)
   FUNC_3(VAR_9, VAR_11);


  VAR_11 =
      FUNC_0(VAR_9, VAR_3);
  if (VAR_11)
   FUNC_1(VAR_9, VAR_11);


  FUNC_4(VAR_9);
 }




 if (VAR_10->family == VAR_0 &&
     VAR_10->pdev->subsystem_vendor == 0x103c &&
     VAR_10->pdev->subsystem_device == 0x308b)
  return;




 if (VAR_10->family == VAR_0 &&
     VAR_10->pdev->subsystem_vendor == 0x103c &&
     VAR_10->pdev->subsystem_device == 0x30a4)
  return;




 if (VAR_10->family == VAR_0 &&
     VAR_10->pdev->subsystem_vendor == 0x103c &&
     VAR_10->pdev->subsystem_device == 0x30ae)
  return;


 VAR_11 = FUNC_0(VAR_9, VAR_5);
 if (VAR_11)
  FUNC_2(VAR_9, VAR_11);

}

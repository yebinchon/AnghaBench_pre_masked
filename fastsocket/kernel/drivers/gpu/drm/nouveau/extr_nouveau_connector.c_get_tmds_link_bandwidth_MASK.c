
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct nouveau_connector {TYPE_1__* detected_encoder; } ;
struct drm_connector {int dev; } ;
struct dcb_output {scalar_t__ location; } ;
struct TYPE_4__ {int chipset; } ;
struct TYPE_3__ {struct dcb_output* dcb; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_connector* FUNC_0 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static unsigned
FUNC_3(struct drm_connector *VAR_1)
{
 struct nouveau_connector *VAR_2 = FUNC_0(VAR_1);
 struct nouveau_drm *VAR_3 = FUNC_1(VAR_1->dev);
 struct dcb_output *VAR_4 = VAR_2->detected_encoder->dcb;

 if (VAR_4->location != VAR_0 ||
     FUNC_2(VAR_3->device)->chipset >= 0x46)
  return 165000;
 else if (FUNC_2(VAR_3->device)->chipset >= 0x40)
  return 155000;
 else if (FUNC_2(VAR_3->device)->chipset >= 0x18)
  return 135000;
 else
  return 112000;
}

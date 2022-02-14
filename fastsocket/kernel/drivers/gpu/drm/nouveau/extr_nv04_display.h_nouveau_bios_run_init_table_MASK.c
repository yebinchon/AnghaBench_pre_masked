
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvbios_init {int crtc; int execute; struct dcb_output* outp; int offset; struct nouveau_bios* bios; int subdev; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;
struct dcb_output {int dummy; } ;


 struct nouveau_bios* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_bios*) ;
 int FUNC_3 (struct nvbios_init*) ;

__attribute__((used)) static inline void
FUNC_4(struct drm_device *VAR_0, u16 VAR_1,
       struct dcb_output *VAR_2, int VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_1(VAR_0);
 struct nouveau_bios *VAR_5 = FUNC_0(VAR_4);
 struct nvbios_init VAR_6 = {
  .subdev = FUNC_2(VAR_5),
  .bios = VAR_5,
  .offset = VAR_1,
  .outp = VAR_2,
  .crtc = VAR_3,
  .execute = 1,
 };

 FUNC_3(&VAR_6);
}

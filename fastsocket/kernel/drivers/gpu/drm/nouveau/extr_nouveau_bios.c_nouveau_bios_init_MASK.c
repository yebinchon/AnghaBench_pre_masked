
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios {int major_version; int execute; int is_mobile; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_drm*,char*) ;
 int FUNC_3 (struct drm_device*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,struct nvbios*) ;
 int FUNC_7 (struct drm_device*,struct nvbios*) ;

int
FUNC_8(struct drm_device *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_4(VAR_2);
 struct nvbios *VAR_4 = &VAR_3->vbios;
 int VAR_5;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4->major_version)
  return 0;


 VAR_4->execute = 0;


 if (!FUNC_3(VAR_2)) {
  FUNC_2(VAR_3, "Adaptor not initialised, "
   "running VBIOS init tables.\n");
  VAR_4->execute = 1;
 }

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5)
  return VAR_5;


 if (VAR_4->major_version < 5)
  VAR_4->is_mobile = FUNC_1(VAR_2, 0, VAR_1) & 0x40;


 if (VAR_4->is_mobile || VAR_4->major_version >= 5)
  VAR_5 = FUNC_7(VAR_2, VAR_4);


 VAR_4->execute = 1;

 return 0;
}

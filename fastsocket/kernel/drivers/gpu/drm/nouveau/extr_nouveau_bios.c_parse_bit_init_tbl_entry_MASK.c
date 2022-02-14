
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios {int dummy; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int length; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nvbios*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_1, struct nvbios *VAR_2, struct bit_entry *VAR_3)
{





 struct nouveau_drm *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3->length < 14) {
  FUNC_0(VAR_4, "Do not understand init table\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2, VAR_3->offset);
 return 0;
}

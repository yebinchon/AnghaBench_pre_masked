
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios {int major_version; int* data; } ;
struct nouveau_device {scalar_t__ card_type; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_device*,int ) ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_2, struct nvbios *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_1(VAR_2);
 if (VAR_3->major_version < 5 && VAR_3->data[0x48] & 0x4)
  return FUNC_0(VAR_2, 0, 0xf) & 0xf;

 if (VAR_4->card_type >= VAR_0)
  return (FUNC_2(VAR_4, VAR_1) >> 24) & 0xf;
 else
  return (FUNC_2(VAR_4, VAR_1) >> 16) & 0xf;
}

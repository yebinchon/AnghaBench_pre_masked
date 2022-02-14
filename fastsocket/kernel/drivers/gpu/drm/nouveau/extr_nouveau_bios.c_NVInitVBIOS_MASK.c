
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvbios {scalar_t__ offset; int type; int chip_version; int major_version; int length; int data; struct drm_device* dev; int lock; } ;
struct nouveau_drm {struct nvbios vbios; int device; } ;
struct TYPE_2__ {int chip; int major; } ;
struct nouveau_bios {scalar_t__ bmp_offset; scalar_t__ bit_offset; TYPE_1__ version; int size; int data; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvbios*,int ,int) ;
 struct nouveau_bios* FUNC_1 (int ) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct nvbios*,scalar_t__) ;
 int FUNC_4 (struct drm_device*,struct nvbios*,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct drm_device *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_2(VAR_2);
 struct nouveau_bios *VAR_4 = FUNC_1(VAR_3->device);
 struct nvbios *VAR_5 = &VAR_3->vbios;

 FUNC_0(VAR_5, 0, sizeof(struct nvbios));
 FUNC_5(&VAR_5->lock);
 VAR_5->dev = VAR_2;

 VAR_5->data = VAR_4->data;
 VAR_5->length = VAR_4->size;
 VAR_5->major_version = VAR_4->version.major;
 VAR_5->chip_version = VAR_4->version.chip;
 if (VAR_4->bit_offset) {
  VAR_5->type = VAR_0;
  VAR_5->offset = VAR_4->bit_offset;
  return !FUNC_3(VAR_5, VAR_5->offset + 6);
 } else
 if (VAR_4->bmp_offset) {
  VAR_5->type = VAR_1;
  VAR_5->offset = VAR_4->bmp_offset;
  return !FUNC_4(VAR_2, VAR_5, VAR_5->offset);
 }

 return 0;
}

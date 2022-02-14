
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvbios {scalar_t__ type; int* data; int offset; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int version; int* data; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (struct drm_device*,char,struct bit_entry*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static u8 *
FUNC_3(struct drm_device *VAR_1, u8 *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_2(VAR_1);
 struct nvbios *VAR_4 = &VAR_3->vbios;
 struct bit_entry VAR_5;

 if (!FUNC_1(VAR_1, 'P', &VAR_5) && VAR_5.version && VAR_5.version <= 2) {
  u8 *VAR_6 = FUNC_0(VAR_1, VAR_5.data[0]);
  if (VAR_6) {
   *VAR_2 = VAR_6[0];
   return VAR_6;
  }
 }

 if (VAR_4->type == VAR_0) {
  if (VAR_4->data[VAR_4->offset + 6] >= 0x25) {
   u8 *VAR_7 = FUNC_0(VAR_1, VAR_4->data[VAR_4->offset + 0x94]);
   if (VAR_7) {
    *VAR_2 = VAR_7[1];
    return VAR_7;
   }
  }
 }

 return ((void*)0);
}

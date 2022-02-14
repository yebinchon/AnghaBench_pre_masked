
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nvbios {scalar_t__ type; scalar_t__* data; int offset; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int data; void* offset; void* length; scalar_t__ version; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_device*,scalar_t__) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

int
FUNC_3(struct drm_device *VAR_3, u8 VAR_4, struct bit_entry *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_2(VAR_3);
 struct nvbios *VAR_7 = &VAR_6->vbios;
 u8 VAR_8, *VAR_9;

 if (VAR_7->type != VAR_2)
  return -VAR_0;

 VAR_8 = VAR_7->data[VAR_7->offset + 10];
 VAR_9 = &VAR_7->data[VAR_7->offset + 12];
 while (VAR_8--) {
  if (VAR_9[0] == VAR_4) {
   VAR_5->id = VAR_9[0];
   VAR_5->version = VAR_9[1];
   VAR_5->length = FUNC_0(VAR_9[2]);
   VAR_5->offset = FUNC_0(VAR_9[4]);
   VAR_5->data = FUNC_1(VAR_3, VAR_9[4]);
   return 0;
  }

  VAR_9 += VAR_7->data[VAR_7->offset + 9];
 }

 return -VAR_1;
}

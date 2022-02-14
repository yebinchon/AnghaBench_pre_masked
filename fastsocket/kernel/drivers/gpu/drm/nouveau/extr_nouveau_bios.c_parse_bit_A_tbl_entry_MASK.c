
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct nvbios {int* data; int dactestval; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int length; size_t offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (struct nouveau_drm*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, struct nvbios *VAR_3, struct bit_entry *VAR_4)
{






 struct nouveau_drm *VAR_5 = FUNC_4(VAR_2);
 uint16_t VAR_6;
 uint8_t VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_4->length != 3) {
  FUNC_1(VAR_5, "Do not understand BIT A table\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_3->data[VAR_4->offset]);

 if (VAR_6 == 0x0) {
  FUNC_0(VAR_5, "Pointer to BIT loadval table invalid\n");
  return -VAR_0;
 }

 VAR_7 = VAR_3->data[VAR_6];

 if (VAR_7 != 0x10) {
  FUNC_1(VAR_5, "BIT loadval table version %d.%d not supported\n",
    VAR_7 >> 4, VAR_7 & 0xF);
  return -VAR_1;
 }

 VAR_8 = VAR_3->data[VAR_6 + 1];
 VAR_9 = VAR_3->data[VAR_6 + 2];
 VAR_10 = VAR_3->data[VAR_6 + 3];

 if (VAR_8 != 4 || VAR_9 != 4 || VAR_10 != 2) {
  FUNC_1(VAR_5, "Do not understand BIT loadval table\n");
  return -VAR_0;
 }


 VAR_3->dactestval = FUNC_3(VAR_3->data[VAR_6 + VAR_8]) & 0x3ff;

 return 0;
}

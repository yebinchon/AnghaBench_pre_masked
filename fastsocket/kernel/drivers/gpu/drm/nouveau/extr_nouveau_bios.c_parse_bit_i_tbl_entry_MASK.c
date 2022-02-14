
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
struct nvbios {int feature_byte; int* data; int is_mobile; void* tvdactestval; void* dactestval; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (struct nouveau_drm*,char*,...) ;
 size_t FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, struct nvbios *VAR_4, struct bit_entry *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_4(VAR_3);
 uint16_t VAR_7;
 uint8_t VAR_8, VAR_9;

 if (VAR_5->length < 6) {
  FUNC_0(VAR_6, "BIT i table too short for needed information\n");
  return -VAR_0;
 }





 VAR_4->feature_byte = VAR_4->data[VAR_5->offset + 5];
 VAR_4->is_mobile = VAR_4->feature_byte & VAR_2;

 if (VAR_5->length < 15) {
  FUNC_1(VAR_6, "BIT i table not long enough for DAC load "
          "detection comparison table\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4->data[VAR_5->offset + 13]);


 if (!VAR_7)
  return 0;







 VAR_8 = VAR_4->data[VAR_7];
 VAR_9 = VAR_4->data[VAR_7 + 1];

 if (VAR_8 != 0x00 && VAR_8 != 0x10) {
  FUNC_1(VAR_6, "DAC load detection comparison table version "
          "%d.%d not known\n", VAR_8 >> 4, VAR_8 & 0xf);
  return -VAR_1;
 }

 VAR_4->dactestval = FUNC_3(VAR_4->data[VAR_7 + VAR_9]);
 VAR_4->tvdactestval = FUNC_3(VAR_4->data[VAR_7 + VAR_9 + 4]);

 return 0;
}

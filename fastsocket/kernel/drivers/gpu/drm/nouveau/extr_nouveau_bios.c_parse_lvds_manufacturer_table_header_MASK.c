
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int lvdsmanufacturerpointer; } ;
struct nvbios {int* data; TYPE_1__ fp; } ;
struct nouveau_drm {int dummy; } ;
struct lvdstableheader {int lvds_ver; int headerlen; int recordlen; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,...) ;
 int FUNC_1 (struct lvdstableheader*,int ,int) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2, struct nvbios *VAR_3, struct lvdstableheader *VAR_4)
{







 struct nouveau_drm *VAR_5 = FUNC_2(VAR_2);
 uint8_t VAR_6, VAR_7, VAR_8;

 FUNC_1(VAR_4, 0, sizeof(struct lvdstableheader));

 if (VAR_3->fp.lvdsmanufacturerpointer == 0x0) {
  FUNC_0(VAR_5, "Pointer to LVDS manufacturer table invalid\n");
  return -VAR_0;
 }

 VAR_6 = VAR_3->data[VAR_3->fp.lvdsmanufacturerpointer];

 switch (VAR_6) {
 case 0x0a:
  VAR_7 = 2;
  VAR_8 = VAR_3->data[VAR_3->fp.lvdsmanufacturerpointer + 1];
  break;
 case 0x30:
  VAR_7 = VAR_3->data[VAR_3->fp.lvdsmanufacturerpointer + 1];
  if (VAR_7 < 0x1f) {
   FUNC_0(VAR_5, "LVDS table header not understood\n");
   return -VAR_0;
  }
  VAR_8 = VAR_3->data[VAR_3->fp.lvdsmanufacturerpointer + 2];
  break;
 case 0x40:
  VAR_7 = VAR_3->data[VAR_3->fp.lvdsmanufacturerpointer + 1];
  if (VAR_7 < 0x7) {
   FUNC_0(VAR_5, "LVDS table header not understood\n");
   return -VAR_0;
  }
  VAR_8 = VAR_3->data[VAR_3->fp.lvdsmanufacturerpointer + 2];
  break;
 default:
  FUNC_0(VAR_5,
    "LVDS table revision %d.%d not currently supported\n",
    VAR_6 >> 4, VAR_6 & 0xf);
  return -VAR_1;
 }

 VAR_4->lvds_ver = VAR_6;
 VAR_4->headerlen = VAR_7;
 VAR_4->recordlen = VAR_8;

 return 0;
}

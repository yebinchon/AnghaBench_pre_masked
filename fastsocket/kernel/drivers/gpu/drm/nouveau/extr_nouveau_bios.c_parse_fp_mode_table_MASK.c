
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int fptablepointer; int fpxlatetableptr; int lvdsmanufacturerpointer; int xlatwidth; int mode_ptr; } ;
struct nvbios {int digital_min_front_porch; int* data; int fp_no_ddc; TYPE_1__ fp; int is_mobile; } ;
struct nouveau_drm {int dummy; } ;
struct lvdstableheader {int lvds_ver; int headerlen; int recordlen; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_drm*,char*,...) ;
 int FUNC_1 (struct nouveau_drm*,char*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*,struct nvbios*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,struct nvbios*,struct lvdstableheader*) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_3, struct nvbios *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_4(VAR_3);
 uint8_t *VAR_6;
 uint8_t VAR_7, VAR_8 = 0, VAR_9, VAR_10 = 0xf, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 struct lvdstableheader VAR_15;

 if (VAR_4->fp.fptablepointer == 0x0) {



  FUNC_0(VAR_5, "Pointer to flat panel table invalid\n");

  VAR_4->digital_min_front_porch = 0x4b;
  return 0;
 }

 VAR_6 = &VAR_4->data[VAR_4->fp.fptablepointer];
 VAR_7 = VAR_6[0];

 switch (VAR_7) {
 case 0x05:
  VAR_9 = 42;
  VAR_13 = -1;
  break;
 case 0x10:
  VAR_9 = 44;
  VAR_13 = 0;
  break;
 case 0x20:
  VAR_8 = VAR_6[1];
  VAR_9 = VAR_6[2];
  VAR_10 = VAR_6[3];




  VAR_4->digital_min_front_porch = VAR_6[4];
  VAR_13 = -7;
  break;
 default:
  FUNC_0(VAR_5,
    "FP table revision %d.%d not currently supported\n",
    VAR_7 >> 4, VAR_7 & 0xf);
  return -VAR_2;
 }

 if (!VAR_4->is_mobile)
  return 0;

 VAR_12 = FUNC_5(VAR_3, VAR_4, &VAR_15);
 if (VAR_12)
  return VAR_12;

 if (VAR_15.lvds_ver == 0x30 || VAR_15.lvds_ver == 0x40) {
  VAR_4->fp.fpxlatetableptr = VAR_4->fp.lvdsmanufacturerpointer +
       VAR_15.headerlen + 1;
  VAR_4->fp.xlatwidth = VAR_15.recordlen;
 }
 if (VAR_4->fp.fpxlatetableptr == 0x0) {
  FUNC_0(VAR_5, "Pointer to flat panel xlat table invalid\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_3(VAR_3, VAR_4);

 VAR_11 = VAR_4->data[VAR_4->fp.fpxlatetableptr +
     VAR_14 * VAR_4->fp.xlatwidth];

 if (VAR_11 > VAR_10) {
  FUNC_0(VAR_5, "Bad flat panel table index\n");
  return -VAR_1;
 }


 if (VAR_15.lvds_ver > 0x10)
  VAR_4->fp_no_ddc = VAR_14 != 0xf || VAR_11 != 0xf;






 if (VAR_14 == 0xf || VAR_11 == 0xf)
  return 0;

 VAR_4->fp.mode_ptr = VAR_4->fp.fptablepointer + VAR_8 +
       VAR_9 * VAR_11 + VAR_13;

 FUNC_1(VAR_5, "BIOS FP mode: %dx%d (%dkHz pixel clock)\n",
   FUNC_2(VAR_4->data[VAR_4->fp.mode_ptr + 11]) + 1,
   FUNC_2(VAR_4->data[VAR_4->fp.mode_ptr + 25]) + 1,
   FUNC_2(VAR_4->data[VAR_4->fp.mode_ptr + 7]) * 10);

 return 0;
}

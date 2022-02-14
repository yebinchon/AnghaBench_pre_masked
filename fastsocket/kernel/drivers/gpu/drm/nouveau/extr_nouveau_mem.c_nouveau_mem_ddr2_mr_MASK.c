
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nouveau_pm_tbl_entry {int RAM_FT1; int tCL; int tWR; } ;
struct nouveau_pm_memtiming {int odt; int* mr; int id; scalar_t__ drive_strength; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nouveau_drm*,char*,int ,int) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_3, u32 VAR_4,
      struct nouveau_pm_tbl_entry *VAR_5, u8 VAR_6,
      struct nouveau_pm_memtiming *VAR_7,
      struct nouveau_pm_memtiming *VAR_8)
{
 struct nouveau_drm *VAR_9 = FUNC_2(VAR_3);

 VAR_8->drive_strength = 0;
 if (VAR_6 < 15) {
  VAR_8->odt = VAR_7->odt;
 } else {
  VAR_8->odt = VAR_5->RAM_FT1 & 0x07;
 }

 if (VAR_5->tCL >= VAR_1) {
  FUNC_1(VAR_9, "(%u) Invalid tCL: %u", VAR_8->id, VAR_5->tCL);
  return -VAR_0;
 }

 if (VAR_5->tWR >= VAR_2) {
  FUNC_1(VAR_9, "(%u) Invalid tWR: %u", VAR_8->id, VAR_5->tWR);
  return -VAR_0;
 }

 if (VAR_8->odt > 3) {
  FUNC_1(VAR_9, "(%u) Invalid odt value, assuming disabled: %x",
   VAR_8->id, VAR_8->odt);
  VAR_8->odt = 0;
 }

 VAR_8->mr[0] = (VAR_7->mr[0] & 0x100f) |
     (VAR_5->tCL) << 4 |
     (VAR_5->tWR - 1) << 9;
 VAR_8->mr[1] = (VAR_7->mr[1] & 0x101fbb) |
     (VAR_8->odt & 0x1) << 2 |
     (VAR_8->odt & 0x2) << 5;

 FUNC_0(VAR_9, "(%u) MR: %08x", VAR_8->id, VAR_8->mr[0]);
 return 0;
}

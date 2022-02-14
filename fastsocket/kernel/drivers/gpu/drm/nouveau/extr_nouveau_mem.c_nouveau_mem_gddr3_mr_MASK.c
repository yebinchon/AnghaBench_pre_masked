
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nouveau_pm_tbl_entry {int RAM_FT1; size_t tCL; size_t tWR; } ;
struct nouveau_pm_memtiming {int drive_strength; int odt; int* mr; int id; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ,int,int,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct nouveau_drm*,char*,int ,size_t) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_5, u32 VAR_6,
       struct nouveau_pm_tbl_entry *VAR_7, u8 VAR_8,
       struct nouveau_pm_memtiming *VAR_9,
       struct nouveau_pm_memtiming *VAR_10)
{
 struct nouveau_drm *VAR_11 = FUNC_2(VAR_5);

 if (VAR_8 < 15) {
  VAR_10->drive_strength = VAR_9->drive_strength;
  VAR_10->odt = VAR_9->odt;
 } else {
  VAR_10->drive_strength = (VAR_7->RAM_FT1 & 0x30) >> 4;
  VAR_10->odt = VAR_7->RAM_FT1 & 0x07;
 }

 if (VAR_7->tCL >= VAR_1) {
  FUNC_1(VAR_11, "(%u) Invalid tCL: %u", VAR_10->id, VAR_7->tCL);
  return -VAR_0;
 }

 if (VAR_7->tWR >= VAR_2) {
  FUNC_1(VAR_11, "(%u) Invalid tWR: %u", VAR_10->id, VAR_7->tWR);
  return -VAR_0;
 }

 if (VAR_10->odt > 3) {
  FUNC_1(VAR_11, "(%u) Invalid odt value, assuming autocal: %x",
   VAR_10->id, VAR_10->odt);
  VAR_10->odt = 0;
 }

 VAR_10->mr[0] = (VAR_9->mr[0] & 0xe0b) |

     ((VAR_3[VAR_7->tCL] & 0x7) << 4) |
     ((VAR_3[VAR_7->tCL] & 0x8) >> 2);
 VAR_10->mr[1] = (VAR_9->mr[1] & 0x100f40) | VAR_10->drive_strength |
     (VAR_10->odt << 2) |
     (VAR_4[VAR_7->tWR] & 0xf) << 4;
 VAR_10->mr[2] = VAR_9->mr[2];

 FUNC_0(VAR_11, "(%u) MR: %08x %08x %08x", VAR_10->id,
        VAR_10->mr[0], VAR_10->mr[1], VAR_10->mr[2]);
 return 0;
}

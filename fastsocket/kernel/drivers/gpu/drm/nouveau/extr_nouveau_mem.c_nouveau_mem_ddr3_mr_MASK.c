
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nouveau_pm_tbl_entry {int tCL; int RAM_FT1; int tWR; int tCWL; } ;
struct nouveau_pm_memtiming {int odt; int* mr; int id; scalar_t__ drive_strength; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nouveau_drm*,char*,int ,int) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_4, u32 VAR_5,
      struct nouveau_pm_tbl_entry *VAR_6, u8 VAR_7,
      struct nouveau_pm_memtiming *VAR_8,
      struct nouveau_pm_memtiming *VAR_9)
{
 struct nouveau_drm *VAR_10 = FUNC_2(VAR_4);
 u8 VAR_11 = VAR_6->tCL - 4;

 VAR_9->drive_strength = 0;
 if (VAR_7 < 15) {
  VAR_9->odt = VAR_8->odt;
 } else {
  VAR_9->odt = VAR_6->RAM_FT1 & 0x07;
 }

 if (VAR_6->tCL >= VAR_1 || VAR_6->tCL < 4) {
  FUNC_1(VAR_10, "(%u) Invalid tCL: %u", VAR_9->id, VAR_6->tCL);
  return -VAR_0;
 }

 if (VAR_6->tWR >= VAR_2 || VAR_6->tWR < 4) {
  FUNC_1(VAR_10, "(%u) Invalid tWR: %u", VAR_9->id, VAR_6->tWR);
  return -VAR_0;
 }

 if (VAR_6->tCWL < 5) {
  FUNC_1(VAR_10, "(%u) Invalid tCWL: %u", VAR_9->id, VAR_6->tCWL);
  return -VAR_0;
 }

 VAR_9->mr[0] = (VAR_8->mr[0] & 0x180b) |

     (VAR_11 & 0x7) << 4 |
     (VAR_11 & 0x8) >> 1 |
     (VAR_3[VAR_6->tWR]) << 9;
 VAR_9->mr[1] = (VAR_8->mr[1] & 0x101dbb) |
     (VAR_9->odt & 0x1) << 2 |
     (VAR_9->odt & 0x2) << 5 |
     (VAR_9->odt & 0x4) << 7;
 VAR_9->mr[2] = (VAR_8->mr[2] & 0x20ffb7) | (VAR_6->tCWL - 5) << 3;

 FUNC_0(VAR_10, "(%u) MR: %08x %08x", VAR_9->id, VAR_9->mr[0], VAR_9->mr[2]);
 return 0;
}

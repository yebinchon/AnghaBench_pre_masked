
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nouveau_pm_tbl_entry {int dummy; } ;
struct nouveau_pm_memtiming {int* mr; int tCWL; } ;
struct TYPE_3__ {struct nouveau_pm_memtiming timing; } ;
struct nouveau_pm {TYPE_1__ boot; } ;
struct TYPE_4__ {int type; } ;
struct nouveau_fb {TYPE_2__ ram; } ;
struct nouveau_device {int card_type; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_fb* FUNC_1 (struct nouveau_device*) ;
 int FUNC_2 (struct drm_device*,int ,struct nouveau_pm_tbl_entry*,int,struct nouveau_pm_memtiming*,struct nouveau_pm_memtiming*) ;
 int FUNC_3 (struct drm_device*,int ,struct nouveau_pm_tbl_entry*,int,struct nouveau_pm_memtiming*,struct nouveau_pm_memtiming*) ;
 int FUNC_4 (struct drm_device*,int ,struct nouveau_pm_tbl_entry*,int,struct nouveau_pm_memtiming*,struct nouveau_pm_memtiming*) ;
 int FUNC_5 (struct drm_device*,int ,struct nouveau_pm_tbl_entry*,int,struct nouveau_pm_memtiming*,struct nouveau_pm_memtiming*) ;
 int* FUNC_6 (struct drm_device*,int ,int*,int*) ;
 int* FUNC_7 (struct drm_device*,int ,int*,int*) ;
 struct nouveau_pm* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int ,struct nouveau_pm_tbl_entry*,int,struct nouveau_pm_memtiming*,struct nouveau_pm_memtiming*) ;
 int FUNC_10 (struct drm_device*,int ,struct nouveau_pm_tbl_entry*,int,struct nouveau_pm_memtiming*,struct nouveau_pm_memtiming*) ;
 int FUNC_11 (struct drm_device*,int ,struct nouveau_pm_tbl_entry*,int,struct nouveau_pm_memtiming*,struct nouveau_pm_memtiming*) ;

int
FUNC_12(struct drm_device *VAR_2, u32 VAR_3,
   struct nouveau_pm_memtiming *VAR_4)
{
 struct nouveau_device *VAR_5 = FUNC_0(VAR_2);
 struct nouveau_fb *VAR_6 = FUNC_1(VAR_5);
 struct nouveau_pm *VAR_7 = FUNC_8(VAR_2);
 struct nouveau_pm_memtiming *VAR_8 = &VAR_7->boot.timing;
 struct nouveau_pm_tbl_entry *VAR_9;
 u8 VAR_10, VAR_11, *VAR_12, *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_7(VAR_2, VAR_3, &VAR_10, &VAR_11);
 if (!VAR_12 || VAR_12[0] == 0x00) {
  *VAR_4 = *VAR_8;
  return 0;
 }
 VAR_9 = (struct nouveau_pm_tbl_entry *)VAR_12;

 VAR_4->tCWL = VAR_8->tCWL;

 switch (VAR_5->card_type) {
 case 135:
  VAR_14 = FUNC_9(VAR_2, VAR_3, VAR_9, VAR_11, VAR_8, VAR_4);
  break;
 case 134:
  VAR_14 = FUNC_10(VAR_2, VAR_3, VAR_9, VAR_11, VAR_8, VAR_4);
  break;
 case 133:
 case 132:
  VAR_14 = FUNC_11(VAR_2, VAR_3, VAR_9, VAR_11, VAR_8, VAR_4);
  break;
 default:
  VAR_14 = -VAR_1;
  break;
 }

 switch (VAR_6->ram.type * !VAR_14) {
 case 129:
  VAR_14 = FUNC_4(VAR_2, VAR_3, VAR_9, VAR_11, VAR_8, VAR_4);
  break;
 case 128:
  VAR_14 = FUNC_5(VAR_2, VAR_3, VAR_9, VAR_11, VAR_8, VAR_4);
  break;
 case 131:
  VAR_14 = FUNC_2(VAR_2, VAR_3, VAR_9, VAR_11, VAR_8, VAR_4);
  break;
 case 130:
  VAR_14 = FUNC_3(VAR_2, VAR_3, VAR_9, VAR_11, VAR_8, VAR_4);
  break;
 default:
  VAR_14 = -VAR_0;
  break;
 }

 VAR_13 = FUNC_6(VAR_2, VAR_3, &VAR_10, &VAR_11);
 if (VAR_13) {
  int VAR_15;

  if (VAR_10 == 0x00)
   VAR_15 = !!(VAR_13[3] & 0x04);
  else
   VAR_15 = !!(VAR_13[2] & 0x40);

  switch (VAR_6->ram.type) {
  case 129:
   VAR_4->mr[1] &= ~0x00000040;
   VAR_4->mr[1] |= 0x00000040 * VAR_15;
   break;
  default:
   VAR_4->mr[1] &= ~0x00000001;
   VAR_4->mr[1] |= 0x00000001 * VAR_15;
   break;
  }
 }

 return VAR_14;
}

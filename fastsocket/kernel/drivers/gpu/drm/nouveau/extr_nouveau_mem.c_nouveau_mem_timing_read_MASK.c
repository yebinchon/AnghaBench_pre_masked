
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_pm_memtiming {int id; int* reg; int tCWL; int* mr; int odt; int drive_strength; } ;
struct TYPE_2__ {int type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_device {int card_type; } ;
struct drm_device {int dummy; } ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_fb* FUNC_1 (struct nouveau_device*) ;
 int FUNC_2 (struct nouveau_device*,int) ;

void
FUNC_3(struct drm_device *VAR_0, struct nouveau_pm_memtiming *VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0);
 struct nouveau_fb *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 if (VAR_2->card_type >= 0xC0) {
  VAR_4 = 0x10f290;
  VAR_6 = 0x10f300;
 } else {
  VAR_4 = 0x100220;
  VAR_6 = 0x1002c0;
 }

 VAR_1->id = -1;

 switch (VAR_2->card_type) {
 case 134:
  VAR_5 = 9;
  break;
 case 133:
 case 132:
  VAR_5 = 5;
  break;
 case 136:
 case 135:
  VAR_5 = 3;
  break;
 default:
  VAR_5 = 0;
  return;
 }
 for(VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_1->reg[VAR_7] = FUNC_2(VAR_2, VAR_4 + (0x04 * VAR_7));

 VAR_1->tCWL = 0;
 if (VAR_2->card_type < 133) {
  VAR_1->tCWL = ((FUNC_2(VAR_2, 0x100228) & 0x0f000000) >> 24) + 1;
 } else if (VAR_2->card_type <= 132) {
  VAR_1->tCWL = ((FUNC_2(VAR_2, 0x10f294) & 0x00000f80) >> 7);
 }

 VAR_1->mr[0] = FUNC_2(VAR_2, VAR_6);
 VAR_1->mr[1] = FUNC_2(VAR_2, VAR_6 + 0x04);
 VAR_1->mr[2] = FUNC_2(VAR_2, VAR_6 + 0x20);
 VAR_1->mr[3] = FUNC_2(VAR_2, VAR_6 + 0x24);

 VAR_1->odt = 0;
 VAR_1->drive_strength = 0;

 switch (VAR_3->ram.type) {
 case 130:
  VAR_1->odt |= (VAR_1->mr[1] & 0x200) >> 7;
 case 131:
  VAR_1->odt |= (VAR_1->mr[1] & 0x04) >> 2 |
     (VAR_1->mr[1] & 0x40) >> 5;
  break;
 case 129:
 case 128:
  VAR_1->drive_strength = VAR_1->mr[1] & 0x03;
  VAR_1->odt = (VAR_1->mr[1] & 0x0c) >> 2;
  break;
 default:
  break;
 }
}

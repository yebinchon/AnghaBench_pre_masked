
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {scalar_t__ intf_associated; } ;
struct link_qual {int rssi; int vgc_level_reg; int vgc_level; int false_cca; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,struct link_qual*,int) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_1,
     struct link_qual *VAR_2, const u32 VAR_3)
{





 if (FUNC_1(VAR_1) < VAR_0 &&
     VAR_1->intf_associated && VAR_3 > 20)
  return;







 if (FUNC_1(VAR_1) < VAR_0 ||
     !VAR_1->intf_associated)
  goto dynamic_cca_tune;






 if (VAR_2->rssi < -80 && VAR_3 > 20) {
  if (VAR_2->vgc_level_reg >= 0x41)
   FUNC_0(VAR_1, VAR_2, VAR_2->vgc_level);
  return;
 }




 if (VAR_2->rssi >= -58) {
  FUNC_0(VAR_1, VAR_2, 0x50);
  return;
 }




 if (VAR_2->rssi >= -74) {
  FUNC_0(VAR_1, VAR_2, 0x41);
  return;
 }





 if (VAR_2->vgc_level_reg >= 0x41) {
  FUNC_0(VAR_1, VAR_2, VAR_2->vgc_level);
  return;
 }

dynamic_cca_tune:





 if (VAR_2->false_cca > 512 && VAR_2->vgc_level_reg < 0x40)
  FUNC_0(VAR_1, VAR_2, ++VAR_2->vgc_level_reg);
 else if (VAR_2->false_cca < 100 && VAR_2->vgc_level_reg > 0x32)
  FUNC_0(VAR_1, VAR_2, --VAR_2->vgc_level_reg);
}

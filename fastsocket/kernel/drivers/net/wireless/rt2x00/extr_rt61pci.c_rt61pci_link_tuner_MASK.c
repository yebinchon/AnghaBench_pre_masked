
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {scalar_t__ curr_band; int intf_associated; int cap_flags; } ;
struct link_qual {int rssi; int vgc_level; int false_cca; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,struct link_qual*,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_3,
          struct link_qual *VAR_4, const u32 VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;




 if (VAR_3->curr_band == VAR_2) {
  VAR_7 = 0x28;
  VAR_6 = 0x48;
  if (FUNC_1(VAR_0, &VAR_3->cap_flags)) {
   VAR_7 += 0x10;
   VAR_6 += 0x10;
  }
 } else {
  VAR_7 = 0x20;
  VAR_6 = 0x40;
  if (FUNC_1(VAR_1, &VAR_3->cap_flags)) {
   VAR_7 += 0x10;
   VAR_6 += 0x10;
  }
 }





 if (!VAR_3->intf_associated)
  goto dynamic_cca_tune;




 if (VAR_4->rssi >= -35) {
  FUNC_0(VAR_3, VAR_4, 0x60);
  return;
 }




 if (VAR_4->rssi >= -58) {
  FUNC_0(VAR_3, VAR_4, VAR_6);
  return;
 }




 if (VAR_4->rssi >= -66) {
  FUNC_0(VAR_3, VAR_4, VAR_7 + 0x10);
  return;
 }




 if (VAR_4->rssi >= -74) {
  FUNC_0(VAR_3, VAR_4, VAR_7 + 0x08);
  return;
 }





 VAR_6 -= 2 * (-74 - VAR_4->rssi);
 if (VAR_7 > VAR_6)
  VAR_6 = VAR_7;

 if (VAR_4->vgc_level > VAR_6) {
  FUNC_0(VAR_3, VAR_4, VAR_6);
  return;
 }

dynamic_cca_tune:





 if ((VAR_4->false_cca > 512) && (VAR_4->vgc_level < VAR_6))
  FUNC_0(VAR_3, VAR_4, ++VAR_4->vgc_level);
 else if ((VAR_4->false_cca < 100) && (VAR_4->vgc_level > VAR_7))
  FUNC_0(VAR_3, VAR_4, --VAR_4->vgc_level);
}

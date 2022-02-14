
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct link_qual {int vgc_level; int rssi; int vgc_level_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,int,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct rt2x00_dev *VAR_1,
      struct link_qual *VAR_2, u8 VAR_3)
{
 if (VAR_2->vgc_level != VAR_3) {
  if (FUNC_2(VAR_1, VAR_0)) {
   FUNC_0(VAR_1, 83, VAR_2->rssi > -65 ? 0x4a : 0x7a);
   FUNC_1(VAR_1, 66, VAR_3);
  } else
   FUNC_0(VAR_1, 66, VAR_3);
  VAR_2->vgc_level = VAR_3;
  VAR_2->vgc_level_reg = VAR_3;
 }
}

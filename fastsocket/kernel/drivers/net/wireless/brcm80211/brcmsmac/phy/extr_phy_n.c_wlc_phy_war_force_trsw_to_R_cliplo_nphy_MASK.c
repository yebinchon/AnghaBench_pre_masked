
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_2, u8 VAR_3)
{
 if (VAR_3 == VAR_0) {
  FUNC_1(VAR_2, 0x38, 0x4);
  if (FUNC_0(VAR_2->radio_chanspec))
   FUNC_1(VAR_2, 0x37, 0x0060);
  else
   FUNC_1(VAR_2, 0x37, 0x1080);
 } else if (VAR_3 == VAR_1) {
  FUNC_1(VAR_2, 0x2ae, 0x4);
  if (FUNC_0(VAR_2->radio_chanspec))
   FUNC_1(VAR_2, 0x2ad, 0x0060);
  else
   FUNC_1(VAR_2, 0x2ad, 0x1080);
 }
}

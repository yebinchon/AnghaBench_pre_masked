
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_0)
{
 if (FUNC_0(VAR_0->radio_chanspec)) {
  FUNC_1(VAR_0, 0x416, (0xff << 0), 80 << 0);
  FUNC_1(VAR_0, 0x416, (0xff << 8), 80 << 8);
 }
}

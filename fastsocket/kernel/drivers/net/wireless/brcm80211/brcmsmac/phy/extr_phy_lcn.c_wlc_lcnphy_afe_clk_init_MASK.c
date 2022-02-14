
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 VAR_4 = FUNC_0(VAR_2->radio_chanspec);

 FUNC_1(VAR_2, 0x6d1, (0x1 << 7), (1) << 7);

 if (((VAR_3 == VAR_0) && (VAR_4 == 0)) ||
     (VAR_3 == VAR_1))
  FUNC_3(VAR_2, 0x6d0, 0x7);

 FUNC_2(VAR_2);
}

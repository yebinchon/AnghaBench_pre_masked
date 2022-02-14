
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct lcnphy_iq_est {int i_pwr; int q_pwr; int member_2; int member_1; int member_0; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int,struct lcnphy_iq_est*) ;

__attribute__((used)) static u32 FUNC_1(struct brcms_phy *VAR_0, u16 VAR_1)
{
 struct lcnphy_iq_est VAR_2 = { 0, 0, 0 };

 if (!FUNC_0(VAR_0, VAR_1, 32, &VAR_2))
  return 0;
 return (VAR_2.i_pwr + VAR_2.q_pwr) / VAR_1;
}

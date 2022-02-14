
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct lcnphy_iq_est {scalar_t__ i_pwr; scalar_t__ q_pwr; scalar_t__ iq_prod; int member_2; int member_1; int member_0; } ;
struct TYPE_4__ {void* rxiqcal_coeff_b0; void* rxiqcal_coeff_a0; } ;
struct brcms_phy_lcnphy {TYPE_2__ lcnphy_cal_results; } ;
struct TYPE_3__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;
typedef int s32 ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,void*,int,struct lcnphy_iq_est*) ;
 int FUNC_4 (struct brcms_phy*,void*,void*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static bool FUNC_6(struct brcms_phy *VAR_1, u16 VAR_2)
{

 bool VAR_3;
 u16 VAR_4, VAR_5;
 struct lcnphy_iq_est VAR_6 = { 0, 0, 0 };
 s32 VAR_7, VAR_8, VAR_9;
 s16 VAR_10, VAR_11, VAR_12, VAR_13;
 s32 VAR_14;
 u32 VAR_15, VAR_16;
 struct brcms_phy_lcnphy *VAR_17 = VAR_1->u.pi_lcnphy;

 VAR_4 = ((FUNC_2(VAR_1, 0x645) & (0x3ff << 0)) >> 0);
 VAR_5 = ((FUNC_2(VAR_1, 0x646) & (0x3ff << 0)) >> 0);
 FUNC_1(VAR_1, 0x6d1, (0x1 << 2), (0) << 2);

 FUNC_1(VAR_1, 0x64b, (0x1 << 6), (1) << 6);

 FUNC_4(VAR_1, 0, 0);

 VAR_3 = FUNC_3(VAR_1, VAR_2, 32, &VAR_6);
 if (!VAR_3)
  goto cleanup;

 VAR_14 = (s32) VAR_6.iq_prod;
 VAR_15 = VAR_6.i_pwr;
 VAR_16 = VAR_6.q_pwr;

 if ((VAR_15 + VAR_16) < 2) {
  VAR_3 = 0;
  goto cleanup;
 }

 VAR_10 = FUNC_5(VAR_14);
 VAR_11 = FUNC_5(VAR_16);

 VAR_12 = 10 - (30 - VAR_10);
 if (VAR_12 >= 0) {
  VAR_7 = (-(VAR_14 << (30 - VAR_10)) + (VAR_15 >> (1 + VAR_12)));
  VAR_9 = (s32) (VAR_15 >> VAR_12);
  if (VAR_9 == 0)
   return 0;
 } else {
  VAR_7 = (-(VAR_14 << (30 - VAR_10)) + (VAR_15 << (-1 - VAR_12)));
  VAR_9 = (s32) (VAR_15 << -VAR_12);
  if (VAR_9 == 0)
   return 0;
 }
 VAR_7 /= VAR_9;
 VAR_13 = VAR_11 - 31 + 20;
 if (VAR_13 >= 0) {
  VAR_8 = (VAR_16 << (31 - VAR_11));
  VAR_9 = (s32) (VAR_15 >> VAR_13);
  if (VAR_9 == 0)
   return 0;
 } else {
  VAR_8 = (VAR_16 << (31 - VAR_11));
  VAR_9 = (s32) (VAR_15 << -VAR_13);
  if (VAR_9 == 0)
   return 0;
 }
 VAR_8 /= VAR_9;
 VAR_8 -= VAR_7 * VAR_7;
 VAR_8 = (s32) FUNC_0((unsigned long) VAR_8);
 VAR_8 -= (1 << 10);
 VAR_4 = (u16) (VAR_7 & 0x3ff);
 VAR_5 = (u16) (VAR_8 & 0x3ff);
cleanup:

 FUNC_4(VAR_1, VAR_4, VAR_5);

 FUNC_1(VAR_1, 0x64b, (0x1 << 0), (1) << 0);

 FUNC_1(VAR_1, 0x64b, (0x1 << 3), (1) << 3);

 VAR_17->lcnphy_cal_results.rxiqcal_coeff_a0 = VAR_4;
 VAR_17->lcnphy_cal_results.rxiqcal_coeff_b0 = VAR_5;

 return VAR_3;
}

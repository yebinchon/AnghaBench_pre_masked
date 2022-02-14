
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {scalar_t__ ah_version; int ah_iq_cal_needed; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ,int) ;
 int FUNC_2 (struct ath5k_hw*,int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct ath5k_hw *VAR_14)
{
 u32 VAR_15, VAR_16;
 s32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;


 if (!VAR_14->ah_iq_cal_needed)
  return -VAR_13;
 else if (FUNC_3(VAR_14, VAR_1) & VAR_9) {
  FUNC_2(VAR_14, VAR_10,
    "I/Q calibration still running");
  return -VAR_11;
 }





 for (VAR_22 = 0; VAR_22 <= 10; VAR_22++) {
  VAR_17 = FUNC_3(VAR_14, VAR_2);
  VAR_15 = FUNC_3(VAR_14, VAR_3);
  VAR_16 = FUNC_3(VAR_14, VAR_4);
  FUNC_2(VAR_14, VAR_10,
   "iq_corr:%x i_pwr:%x q_pwr:%x", VAR_17, VAR_15, VAR_16);
  if (VAR_15 && VAR_16)
   break;
 }

 VAR_19 = ((VAR_15 >> 1) + (VAR_16 >> 1)) >> 7;

 if (VAR_14->ah_version == VAR_0)
  VAR_21 = VAR_16 >> 6;
 else
  VAR_21 = VAR_16 >> 7;




 if (VAR_19 == 0 || VAR_21 < 2)
  return -VAR_12;



 VAR_18 = (-VAR_17) / VAR_19;
 VAR_18 = FUNC_4(VAR_18, -32, 31);

 if (VAR_14->ah_version == VAR_0)
  VAR_20 = (VAR_15 / VAR_21) - 64;
 else
  VAR_20 = (VAR_15 / VAR_21) - 128;
 VAR_20 = FUNC_4(VAR_20, -16, 15);

 FUNC_2(VAR_14, VAR_10,
   "new I:%d Q:%d (i_coffd:%x q_coffd:%x)",
   VAR_18, VAR_20, VAR_19, VAR_21);


 FUNC_1(VAR_14, VAR_1, VAR_7, VAR_18);
 FUNC_1(VAR_14, VAR_1, VAR_8, VAR_20);
 FUNC_0(VAR_14, VAR_1, VAR_6);



 FUNC_1(VAR_14, VAR_1,
   VAR_5, 15);
 FUNC_0(VAR_14, VAR_1, VAR_9);

 return 0;
}

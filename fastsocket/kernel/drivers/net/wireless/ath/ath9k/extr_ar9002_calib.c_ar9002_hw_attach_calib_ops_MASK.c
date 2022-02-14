
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_private_ops {int setup_calibration; int init_cal; int init_cal_settings; } ;
struct ath_hw_ops {int calibrate; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ath_hw_ops* FUNC_0 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_1 (struct ath_hw*) ;

void FUNC_2(struct ath_hw *VAR_4)
{
 struct ath_hw_private_ops *VAR_5 = FUNC_1(VAR_4);
 struct ath_hw_ops *VAR_6 = FUNC_0(VAR_4);

 VAR_5->init_cal_settings = VAR_2;
 VAR_5->init_cal = VAR_1;
 VAR_5->setup_calibration = VAR_3;

 VAR_6->calibrate = VAR_0;
}

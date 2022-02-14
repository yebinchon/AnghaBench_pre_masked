
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* sign; } ;
struct TYPE_7__ {scalar_t__* sign; } ;
struct TYPE_6__ {scalar_t__* sign; } ;
struct TYPE_5__ {scalar_t__* sign; } ;
struct ath_hw {scalar_t__ cal_samples; TYPE_4__ meas3; TYPE_3__ meas2; TYPE_2__ meas1; TYPE_1__ meas0; } ;
struct ath9k_cal_list {int calState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,struct ath9k_cal_list*) ;

void FUNC_1(struct ath_hw *VAR_2,
    struct ath9k_cal_list *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2, VAR_3);

 VAR_3->calState = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->meas0.sign[VAR_4] = 0;
  VAR_2->meas1.sign[VAR_4] = 0;
  VAR_2->meas2.sign[VAR_4] = 0;
  VAR_2->meas3.sign[VAR_4] = 0;
 }

 VAR_2->cal_samples = 0;
}

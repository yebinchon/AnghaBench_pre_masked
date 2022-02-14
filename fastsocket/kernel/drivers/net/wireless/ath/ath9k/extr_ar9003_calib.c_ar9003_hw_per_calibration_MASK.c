
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath_hw {scalar_t__ cal_samples; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {int CalValid; } ;
struct ath9k_channel {int dummy; } ;
struct ath9k_cal_list {scalar_t__ calState; TYPE_1__* calData; } ;
struct TYPE_2__ {scalar_t__ calNumSamples; int calType; int (* calPostProc ) (struct ath_hw*,unsigned int) ;int (* calCollect ) (struct ath_hw*) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,struct ath9k_cal_list*) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_cal_list*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,unsigned int) ;

__attribute__((used)) static bool FUNC_5(struct ath_hw *VAR_5,
          struct ath9k_channel *VAR_6,
          u8 VAR_7,
          struct ath9k_cal_list *VAR_8)
{
 struct ath9k_hw_cal_data *VAR_9 = VAR_5->caldata;

 bool VAR_10 = 0;


 if (VAR_8->calState == VAR_4) {

  if (!(FUNC_0(VAR_5, VAR_1) & VAR_2)) {



   VAR_8->calData->calCollect(VAR_5);
   VAR_5->cal_samples++;

   if (VAR_5->cal_samples >=
       VAR_8->calData->calNumSamples) {
    unsigned int VAR_11, VAR_12 = 0;
    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
     if (VAR_7 & (1 << VAR_11))
      VAR_12++;
    }




    VAR_8->calData->calPostProc(VAR_5, VAR_12);


    VAR_9->CalValid |= VAR_8->calData->calType;
    VAR_8->calState = VAR_3;
    VAR_10 = 1;
   } else {




   FUNC_1(VAR_5, VAR_8);
   }
  }
 } else if (!(VAR_9->CalValid & VAR_8->calData->calType)) {

  FUNC_2(VAR_5, VAR_8);
 }

 return VAR_10;
}

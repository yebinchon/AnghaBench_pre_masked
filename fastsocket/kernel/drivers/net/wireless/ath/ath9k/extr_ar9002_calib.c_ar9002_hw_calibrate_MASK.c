
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath_hw {int curchan; struct ath9k_cal_list* cal_list_curr; TYPE_1__* caldata; } ;
struct ath9k_channel {int dummy; } ;
struct ath9k_cal_list {scalar_t__ calState; struct ath9k_cal_list* calNext; } ;
struct TYPE_2__ {int nfcal_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*,struct ath9k_channel*,int ,struct ath9k_cal_list*) ;
 scalar_t__ FUNC_4 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*,struct ath9k_cal_list*) ;
 int FUNC_7 (struct ath_hw*,int) ;

__attribute__((used)) static bool FUNC_8(struct ath_hw *VAR_4,
    struct ath9k_channel *VAR_5,
    u8 VAR_6,
    bool VAR_7)
{
 bool VAR_8 = 1;
 struct ath9k_cal_list *VAR_9 = VAR_4->cal_list_curr;
 bool VAR_10, VAR_11 = 0;

 VAR_10 = !!(FUNC_0(VAR_4, VAR_0) & VAR_1);
 if (VAR_4->caldata)
  VAR_11 = VAR_4->caldata->nfcal_pending;

 if (VAR_9 && !VAR_10 &&
     (VAR_9->calState == VAR_2 ||
      VAR_9->calState == VAR_3)) {
  VAR_8 = FUNC_3(VAR_4, VAR_5,
            VAR_6, VAR_9);
  if (VAR_8) {
   VAR_4->cal_list_curr = VAR_9 = VAR_9->calNext;

   if (VAR_9->calState == VAR_3) {
    VAR_8 = 0;
    FUNC_6(VAR_4, VAR_9);
   }
  }
 }


 if (VAR_7 || VAR_11) {




  if (FUNC_4(VAR_4, VAR_5)) {






   FUNC_5(VAR_4, VAR_4->curchan);
  }

  if (VAR_7) {
   FUNC_7(VAR_4, 0);

   FUNC_2(VAR_4, 0);
   FUNC_1(VAR_4);
  }
 }

 return VAR_8;
}

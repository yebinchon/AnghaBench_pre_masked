
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* caldata; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {int rtt_done; } ;


 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (int ,char*) ;

bool FUNC_9(struct ath_hw *VAR_0, struct ath9k_channel *VAR_1)
{
 bool VAR_2;

 if (!VAR_0->caldata)
  return 0;

 if (!VAR_0->caldata->rtt_done)
  return 0;

 FUNC_1(VAR_0);
 FUNC_4(VAR_0, 0x10);

 if (!FUNC_7(VAR_0)) {
  FUNC_8(FUNC_5(VAR_0), "Could not stop baseband\n");
  VAR_2 = 0;
  goto fail;
 }

 FUNC_3(VAR_0);
 VAR_2 = FUNC_2(VAR_0);

fail:
 FUNC_6(VAR_0);
 FUNC_0(VAR_0);
 return VAR_2;
}

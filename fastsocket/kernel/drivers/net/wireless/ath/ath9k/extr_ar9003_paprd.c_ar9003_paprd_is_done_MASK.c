
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int ,int ,char*,int,int) ;

bool FUNC_4(struct ath_hw *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_0,
    VAR_2);

 if (FUNC_0(VAR_5))
  goto exit;

 if (VAR_6 == 0x1) {
  VAR_7 = FUNC_1(VAR_5, VAR_0,
    VAR_1);

  FUNC_3(FUNC_2(VAR_5), VAR_3,
   "AGC2_PWR = 0x%x training done = 0x%x\n",
   VAR_7, VAR_6);





  if (VAR_7 <= VAR_4)
   VAR_6 = 0;
 }
exit:
 return !!VAR_6;
}

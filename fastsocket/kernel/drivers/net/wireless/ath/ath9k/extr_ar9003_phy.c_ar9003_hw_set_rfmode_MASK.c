
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ath_hw*,struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_8,
     struct ath9k_channel *VAR_9)
{
 u32 VAR_10 = 0;

 if (VAR_9 == ((void*)0))
  return;

 VAR_10 |= (FUNC_1(VAR_9) || FUNC_2(VAR_9))
  ? VAR_3 : VAR_6;

 if (FUNC_0(VAR_8, VAR_9))
  VAR_10 |= (VAR_3 | VAR_4);
 if (FUNC_4(VAR_9))
  VAR_10 |= VAR_7;
 if (FUNC_3(VAR_9))
  VAR_10 |= VAR_5;

 if (VAR_10 & (VAR_7 | VAR_5))
  FUNC_5(VAR_8, VAR_0,
         VAR_1, 3);

 FUNC_6(VAR_8, VAR_2, VAR_10);
}

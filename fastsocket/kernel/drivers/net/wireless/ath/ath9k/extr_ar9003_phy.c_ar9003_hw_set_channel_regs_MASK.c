
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {scalar_t__ chanmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_14,
           struct ath9k_channel *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17 = 0;

 VAR_17 =
  (FUNC_1(VAR_14, VAR_11) & VAR_6);


 VAR_16 = VAR_8 | VAR_10 |
    VAR_9 | VAR_17;


 if (FUNC_0(VAR_15)) {
  VAR_16 |= VAR_4;

  if ((VAR_15->chanmode == VAR_12) ||
      (VAR_15->chanmode == VAR_13))
   VAR_16 |= VAR_5;

 }


 VAR_16 |= FUNC_1(VAR_14, VAR_11);

 VAR_16 &= ~VAR_7;

 FUNC_2(VAR_14, VAR_11, VAR_16);


 FUNC_3(VAR_14);


 FUNC_2(VAR_14, VAR_2, 25 << VAR_3);

 FUNC_2(VAR_14, VAR_0, 0xF << VAR_1);
}

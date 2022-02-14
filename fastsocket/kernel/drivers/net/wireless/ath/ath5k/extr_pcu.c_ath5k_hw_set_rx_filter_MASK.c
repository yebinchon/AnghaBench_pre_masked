
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ath5k_hw*,int,int ) ;

void
FUNC_3(struct ath5k_hw *VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0;


 if (VAR_12->ah_version == VAR_1) {
  if (VAR_13 & VAR_11)
   VAR_14 |= VAR_5;
  if (VAR_13 & VAR_9)
   VAR_14 |= VAR_4 | VAR_3;
 }




 if (VAR_12->ah_version == VAR_0 &&
   (VAR_13 & VAR_11)) {
  VAR_13 &= ~VAR_11;
  VAR_13 |= VAR_10;
 }


 if (VAR_14)
  FUNC_1(VAR_12, VAR_6, VAR_7);
 else
  FUNC_0(VAR_12, VAR_6, VAR_7);


 FUNC_2(VAR_12, VAR_13 & 0xff, VAR_8);


 if (VAR_12->ah_version == VAR_1)
  FUNC_2(VAR_12, VAR_14, VAR_2);

}

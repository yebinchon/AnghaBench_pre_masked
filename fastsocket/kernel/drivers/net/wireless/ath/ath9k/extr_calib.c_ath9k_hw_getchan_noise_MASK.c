
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {scalar_t__ noisefloor; } ;
typedef scalar_t__ s8 ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*,struct ath9k_channel*) ;

s16 FUNC_1(struct ath_hw *VAR_2, struct ath9k_channel *VAR_3)
{
 s8 VAR_4 = VAR_1;

 if (VAR_3 && VAR_3->noisefloor) {
  s8 VAR_5 = VAR_3->noisefloor -
      VAR_0 -
      FUNC_0(VAR_2, VAR_3);
  if (VAR_5 > 0)
   VAR_4 += VAR_5;
 }
 return VAR_4;
}

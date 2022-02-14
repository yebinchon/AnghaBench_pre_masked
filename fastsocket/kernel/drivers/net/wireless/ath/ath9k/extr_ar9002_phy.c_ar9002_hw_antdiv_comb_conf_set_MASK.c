
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw_antcomb_conf {int main_lna_conf; int alt_lna_conf; int fast_div_bias; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_7,
       struct ath_hw_antcomb_conf *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_6);
 VAR_9 &= ~(VAR_2 |
      VAR_0 |
      VAR_4);
 VAR_9 |= ((VAR_8->main_lna_conf << VAR_3)
     & VAR_2);
 VAR_9 |= ((VAR_8->alt_lna_conf << VAR_1)
     & VAR_0);
 VAR_9 |= ((VAR_8->fast_div_bias << VAR_5)
     & VAR_4);

 FUNC_1(VAR_7, VAR_6, VAR_9);
}

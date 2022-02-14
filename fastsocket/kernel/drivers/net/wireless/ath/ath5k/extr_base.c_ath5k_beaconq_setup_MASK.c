
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_txq_info {int tqi_flags; int tqi_cw_max; int tqi_cw_min; int tqi_aifs; } ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath5k_hw*,int ,struct ath5k_txq_info*) ;

__attribute__((used)) static int
FUNC_1(struct ath5k_hw *VAR_5)
{
 struct ath5k_txq_info VAR_6 = {


  .tqi_aifs = VAR_0,
  .tqi_cw_min = VAR_2,
  .tqi_cw_max = VAR_1,

  .tqi_flags = VAR_3
 };

 return FUNC_0(VAR_5, VAR_4, &VAR_6);
}

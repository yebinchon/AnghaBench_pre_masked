
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath5k_hw {int ah_current_channel; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;

int
FUNC_2(struct ath5k_hw *VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_1, VAR_0,
  "changing txpower to %d\n", VAR_2);

 return FUNC_1(VAR_1, VAR_1->ah_current_channel, VAR_2);
}

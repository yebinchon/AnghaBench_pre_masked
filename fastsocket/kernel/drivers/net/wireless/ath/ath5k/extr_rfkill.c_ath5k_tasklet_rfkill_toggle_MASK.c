
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_hw {TYPE_1__* hw; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_0)
{
 struct ath5k_hw *VAR_1 = (void *)VAR_0;
 bool VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_1->hw->wiphy, VAR_2);
}

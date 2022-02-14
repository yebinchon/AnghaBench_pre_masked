
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gpio; } ;
struct ath5k_hw {TYPE_1__ rf_kill; } ;


 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct ath5k_hw *VAR_0, bool VAR_1)
{
 u32 VAR_2;

 FUNC_1(VAR_0, VAR_0->rf_kill.gpio);
 VAR_2 = FUNC_0(VAR_0, VAR_0->rf_kill.gpio);
 FUNC_2(VAR_0, VAR_0->rf_kill.gpio, VAR_1 ?
     !!VAR_2 : !VAR_2);
}

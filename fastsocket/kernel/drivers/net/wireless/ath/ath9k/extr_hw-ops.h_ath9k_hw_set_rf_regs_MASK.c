
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {int (* set_rf_regs ) (struct ath_hw*,struct ath9k_channel*,int ) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,struct ath9k_channel*,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct ath_hw *VAR_0,
     struct ath9k_channel *VAR_1,
     u16 VAR_2)
{
 if (!FUNC_0(VAR_0)->set_rf_regs)
  return 1;

 return FUNC_0(VAR_0)->set_rf_regs(VAR_0, VAR_1, VAR_2);
}

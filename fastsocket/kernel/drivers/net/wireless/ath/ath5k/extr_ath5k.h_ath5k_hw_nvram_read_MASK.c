
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct ath5k_hw {int dummy; } ;
struct TYPE_2__ {int (* eeprom_read ) (struct ath_common*,int ,int *) ;} ;


 struct ath_common* FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath_common*,int ,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct ath5k_hw *VAR_0, u32 VAR_1, u16 *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_0);
 return VAR_3->bus_ops->eeprom_read(VAR_3, VAR_1, VAR_2);
}

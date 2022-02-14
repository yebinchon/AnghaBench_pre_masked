
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ enable_ani; } ;
struct ath_hw {TYPE_2__ config; TYPE_1__* eep_ops; } ;
struct ath_common {TYPE_3__* bus_ops; } ;
struct TYPE_6__ {scalar_t__ ath_bus_type; } ;
struct TYPE_4__ {int (* get_eeprom_rev ) (struct ath_hw*) ;int (* get_eeprom_ver ) (struct ath_hw*) ;} ;


 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;

__attribute__((used)) static int FUNC_9(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 if (VAR_4->bus_ops->ath_bus_type != VAR_0) {
  if (!FUNC_3(VAR_3))
   return -VAR_2;
 }

 if (!FUNC_0(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 != 0)
   return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 != 0)
  return VAR_5;

 FUNC_6(FUNC_4(VAR_3), VAR_1, "Eeprom VER: %d, REV: %d\n",
  VAR_3->eep_ops->get_eeprom_ver(VAR_3),
  VAR_3->eep_ops->get_eeprom_rev(VAR_3));

 if (VAR_3->config.enable_ani)
  FUNC_2(VAR_3);

 return 0;
}

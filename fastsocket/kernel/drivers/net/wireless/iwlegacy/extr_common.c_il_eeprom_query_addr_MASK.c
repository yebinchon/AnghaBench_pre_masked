
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct il_priv {int const* eeprom; TYPE_1__* cfg; } ;
struct TYPE_2__ {size_t eeprom_size; } ;


 int FUNC_0 (int) ;

const u8 *
FUNC_1(const struct il_priv *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->cfg->eeprom_size);
 return &VAR_0->eeprom[VAR_1];
}

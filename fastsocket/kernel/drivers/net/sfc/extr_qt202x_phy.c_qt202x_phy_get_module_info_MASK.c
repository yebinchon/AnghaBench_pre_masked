
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_modinfo {int eeprom_len; int type; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct efx_nic *VAR_2,
          struct ethtool_modinfo *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->eeprom_len = VAR_1;
 return 0;
}

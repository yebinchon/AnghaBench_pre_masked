
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_nvm_data {int calib_voltage; int calib_version; } ;
struct iwl_eeprom_calib_hdr {int voltage; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,size_t,int ) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_2, size_t VAR_3,
     struct iwl_nvm_data *VAR_4)
{
 struct iwl_eeprom_calib_hdr *VAR_5;

 VAR_5 = (void *)FUNC_0(VAR_2, VAR_3,
         VAR_0);
 if (!VAR_5)
  return -VAR_1;
 VAR_4->calib_version = VAR_5->version;
 VAR_4->calib_voltage = VAR_5->voltage;

 return 0;
}

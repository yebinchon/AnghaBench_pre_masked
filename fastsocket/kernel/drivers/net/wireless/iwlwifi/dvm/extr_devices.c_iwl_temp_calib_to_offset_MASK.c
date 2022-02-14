
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_priv {TYPE_1__* nvm_data; } ;
typedef int s32 ;
struct TYPE_2__ {int kelvin_voltage; int kelvin_temperature; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static s32 FUNC_1(struct iwl_priv *VAR_1)
{
 u16 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->nvm_data->kelvin_temperature);
 VAR_3 = FUNC_0(VAR_1->nvm_data->kelvin_voltage);


 return (s32)(VAR_2 -
   VAR_3 / VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smps; } ;
struct iwl_priv {TYPE_1__ current_ht_config; } ;






 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(struct iwl_priv *VAR_1, int VAR_2)
{

 switch (VAR_1->current_ht_config.smps) {
 case 128:
 case 130:
  return VAR_0;
 case 131:
 case 129:
  return VAR_2;
 default:
  FUNC_0(1, "invalid SMPS mode %d",
       VAR_1->current_ht_config.smps);
  return VAR_2;
 }
}

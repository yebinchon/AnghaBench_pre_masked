
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {int nvm_data; TYPE_3__* nvm_sections; TYPE_2__* cfg; } ;
struct TYPE_6__ {int length; int * data; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int eeprom_size; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,int,int *) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,int,int ) ;
 int* VAR_2 ;

int FUNC_6(struct iwl_mvm *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u8 *VAR_7, *VAR_8;


 VAR_7 = FUNC_4(VAR_3->cfg->base_params->eeprom_size,
        VAR_1);
 if (!VAR_7)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_6 = VAR_2[VAR_5];

  VAR_4 = FUNC_1(VAR_3, VAR_6, VAR_7);
  if (VAR_4 < 0)
   break;
  VAR_8 = FUNC_5(VAR_7, VAR_4, VAR_1);
  if (!VAR_8) {
   VAR_4 = -VAR_0;
   break;
  }
  VAR_3->nvm_sections[VAR_6].data = VAR_8;
  VAR_3->nvm_sections[VAR_6].length = VAR_4;
 }
 FUNC_3(VAR_7);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = 0;
 VAR_3->nvm_data = FUNC_2(VAR_3);

 return VAR_4;
}

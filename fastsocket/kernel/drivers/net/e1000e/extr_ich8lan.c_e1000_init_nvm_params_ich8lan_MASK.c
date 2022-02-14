
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct e1000_nvm_info {int flash_base_addr; int flash_bank_size; size_t word_size; int type; } ;
struct e1000_dev_spec_ich8lan {TYPE_2__* shadow_ram; } ;
struct TYPE_3__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {int flash_address; TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef int s32 ;
struct TYPE_4__ {int modified; int value; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_6)
{
 struct e1000_nvm_info *VAR_7 = &VAR_6->nvm;
 struct e1000_dev_spec_ich8lan *VAR_8 = &VAR_6->dev_spec.ich8lan;
 u32 VAR_9, VAR_10, VAR_11;
 u16 VAR_12;


 if (!VAR_6->flash_address) {
  FUNC_0("ERROR: Flash registers not mapped\n");
  return -VAR_0;
 }

 VAR_7->type = VAR_5;

 VAR_9 = FUNC_1(VAR_4);





 VAR_10 = VAR_9 & VAR_2;
 VAR_11 = ((VAR_9 >> 16) & VAR_2) + 1;


 VAR_7->flash_base_addr = VAR_10 << VAR_3;




 VAR_7->flash_bank_size = ((VAR_11 - VAR_10)
    << VAR_3);
 VAR_7->flash_bank_size /= 2;

 VAR_7->flash_bank_size /= sizeof(u16);

 VAR_7->word_size = VAR_1;


 for (VAR_12 = 0; VAR_12 < VAR_7->word_size; VAR_12++) {
  VAR_8->shadow_ram[VAR_12].modified = 0;
  VAR_8->shadow_ram[VAR_12].value = 0xFFFF;
 }

 return 0;
}

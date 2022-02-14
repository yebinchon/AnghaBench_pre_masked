
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ word_size; scalar_t__ flash_bank_size; TYPE_3__ ops; } ;
struct e1000_dev_spec_ich8lan {TYPE_2__* shadow_ram; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef int s32 ;
struct TYPE_5__ {scalar_t__ value; scalar_t__ modified; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_1, u16 VAR_2, u16 VAR_3,
      u16 *VAR_4)
{
 struct e1000_nvm_info *VAR_5 = &VAR_1->nvm;
 struct e1000_dev_spec_ich8lan *VAR_6 = &VAR_1->dev_spec.ich8lan;
 u32 VAR_7;
 s32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u16 VAR_10, VAR_11;

 if ((VAR_2 >= VAR_5->word_size) || (VAR_3 > VAR_5->word_size - VAR_2) ||
     (VAR_3 == 0)) {
  FUNC_2("nvm parameter(s) out of bounds\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_5->ops.acquire(VAR_1);

 VAR_8 = FUNC_1(VAR_1, &VAR_9);
 if (VAR_8) {
  FUNC_2("Could not detect valid bank, assuming bank 0\n");
  VAR_9 = 0;
 }

 VAR_7 = (VAR_9) ? VAR_5->flash_bank_size : 0;
 VAR_7 += VAR_2;

 VAR_8 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_6->shadow_ram[VAR_2 + VAR_10].modified) {
   VAR_4[VAR_10] = VAR_6->shadow_ram[VAR_2 + VAR_10].value;
  } else {
   VAR_8 = FUNC_0(VAR_1,
        VAR_7 + VAR_10,
        &VAR_11);
   if (VAR_8)
    break;
   VAR_4[VAR_10] = VAR_11;
  }
 }

 VAR_5->ops.release(VAR_1);

out:
 if (VAR_8)
  FUNC_2("NVM read error: %d\n", VAR_8);

 return VAR_8;
}

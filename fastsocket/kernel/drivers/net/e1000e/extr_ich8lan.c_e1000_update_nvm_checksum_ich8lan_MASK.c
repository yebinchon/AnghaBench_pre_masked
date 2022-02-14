
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_6__ {int (* reload ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ type; scalar_t__ flash_bank_size; TYPE_3__ ops; } ;
struct e1000_dev_spec_ich8lan {TYPE_2__* shadow_ram; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;
struct TYPE_5__ {int modified; int value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_4)
{
 struct e1000_nvm_info *VAR_5 = &VAR_4->nvm;
 struct e1000_dev_spec_ich8lan *VAR_6 = &VAR_4->dev_spec.ich8lan;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 s32 VAR_12;
 u16 VAR_13;

 VAR_12 = FUNC_4(VAR_4);
 if (VAR_12)
  goto out;

 if (VAR_5->type != VAR_3)
  goto out;

 VAR_5->ops.acquire(VAR_4);





 VAR_12 = FUNC_3(VAR_4, &VAR_11);
 if (VAR_12) {
  FUNC_5("Could not detect valid bank, assuming bank 0\n");
  VAR_11 = 0;
 }

 if (VAR_11 == 0) {
  VAR_9 = VAR_5->flash_bank_size;
  VAR_10 = 0;
  VAR_12 = FUNC_0(VAR_4, 1);
  if (VAR_12)
   goto release;
 } else {
  VAR_10 = VAR_5->flash_bank_size;
  VAR_9 = 0;
  VAR_12 = FUNC_0(VAR_4, 0);
  if (VAR_12)
   goto release;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {




  if (VAR_6->shadow_ram[VAR_7].modified) {
   VAR_13 = VAR_6->shadow_ram[VAR_7].value;
  } else {
   VAR_12 = FUNC_1(VAR_4, VAR_7 +
        VAR_10,
        &VAR_13);
   if (VAR_12)
    break;
  }
  if (VAR_7 == VAR_2)
   VAR_13 |= VAR_1;


  VAR_8 = (VAR_7 + VAR_9) << 1;

  FUNC_9(100, 200);

  VAR_12 = FUNC_2(VAR_4,
              VAR_8,
              (u8)VAR_13);
  if (VAR_12)
   break;

  FUNC_9(100, 200);
  VAR_12 = FUNC_2(VAR_4,
              VAR_8 + 1,
              (u8)(VAR_13 >> 8));
  if (VAR_12)
   break;
 }




 if (VAR_12) {

  FUNC_5("Flash commit failed.\n");
  goto release;
 }






 VAR_8 = VAR_9 + VAR_2;
 VAR_12 = FUNC_1(VAR_4, VAR_8, &VAR_13);
 if (VAR_12)
  goto release;

 VAR_13 &= 0xBFFF;
 VAR_12 = FUNC_2(VAR_4,
             VAR_8 * 2 + 1,
             (u8)(VAR_13 >> 8));
 if (VAR_12)
  goto release;






 VAR_8 = (VAR_10 + VAR_2) * 2 + 1;
 VAR_12 = FUNC_2(VAR_4, VAR_8, 0);
 if (VAR_12)
  goto release;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6->shadow_ram[VAR_7].modified = 0;
  VAR_6->shadow_ram[VAR_7].value = 0xFFFF;
 }

release:
 VAR_5->ops.release(VAR_4);




 if (!VAR_12) {
  VAR_5->ops.reload(VAR_4);
  FUNC_9(10000, 20000);
 }

out:
 if (VAR_12)
  FUNC_5("NVM update error: %d\n", VAR_12);

 return VAR_12;
}

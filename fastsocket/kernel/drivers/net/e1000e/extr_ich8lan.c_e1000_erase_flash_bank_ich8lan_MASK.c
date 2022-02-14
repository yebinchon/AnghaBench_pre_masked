
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int berasesz; int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_2__ hsf_status; void* regval; } ;
struct TYPE_3__ {int flcycle; } ;
union ich8_hws_flash_ctrl {void* regval; TYPE_1__ hsf_ctrl; } ;
typedef scalar_t__ u32 ;
struct e1000_nvm_info {int flash_bank_size; scalar_t__ flash_base_addr; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_11, u32 VAR_12)
{
 struct e1000_nvm_info *VAR_13 = &VAR_11->nvm;
 union ich8_hws_flash_status VAR_14;
 union ich8_hws_flash_ctrl VAR_15;
 u32 VAR_16;

 u32 VAR_17 = VAR_13->flash_bank_size * 2;
 s32 VAR_18;
 s32 VAR_19 = 0;
 s32 VAR_20, VAR_21, VAR_22;

 VAR_14.regval = FUNC_2(VAR_6);
 switch (VAR_14.hsf_status.berasesz) {
 case 0:

  VAR_22 = VAR_7;
  VAR_21 = VAR_17 / VAR_7;
  break;
 case 1:
  VAR_22 = VAR_8;
  VAR_21 = 1;
  break;
 case 2:
  VAR_22 = VAR_10;
  VAR_21 = 1;
  break;
 case 3:
  VAR_22 = VAR_9;
  VAR_21 = 1;
  break;
 default:
  return -VAR_0;
 }


 VAR_16 = VAR_11->nvm.flash_base_addr;
 VAR_16 += (VAR_12) ? VAR_17 : 0;

 for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
  do {

   VAR_18 = FUNC_1(VAR_11);
   if (VAR_18)
    return VAR_18;




   VAR_15.regval = FUNC_2(VAR_5);
   VAR_15.hsf_ctrl.flcycle = VAR_1;
   FUNC_3(VAR_5, VAR_15.regval);





   VAR_16 += (VAR_20 * VAR_22);
   FUNC_4(VAR_4, VAR_16);

   VAR_18 = FUNC_0(VAR_11,
            VAR_3);
   if (!VAR_18)
    break;





   VAR_14.regval = FUNC_2(VAR_6);
   if (VAR_14.hsf_status.flcerr)

    continue;
   else if (!VAR_14.hsf_status.flcdone)
    return VAR_18;
  } while (++VAR_19 < VAR_2);
 }

 return 0;
}

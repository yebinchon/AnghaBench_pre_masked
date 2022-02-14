
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_3__ hsf_status; void* regval; } ;
struct TYPE_5__ {int fldbcount; int flcycle; } ;
union ich8_hws_flash_ctrl {void* regval; TYPE_2__ hsf_ctrl; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int flash_base_addr; } ;
struct e1000_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_9, u32 VAR_10,
      u8 VAR_11, u16 *VAR_12)
{
 union ich8_hws_flash_status VAR_13;
 union ich8_hws_flash_ctrl VAR_14;
 u32 VAR_15;
 u32 VAR_16 = 0;
 s32 VAR_17 = -VAR_0;
 u8 VAR_18 = 0;

 if (VAR_11 < 1 || VAR_11 > 2 || VAR_10 > VAR_7)
  return -VAR_0;

 VAR_15 = ((VAR_7 & VAR_10) +
        VAR_9->nvm.flash_base_addr);

 do {
  FUNC_7(1);

  VAR_17 = FUNC_1(VAR_9);
  if (VAR_17)
   break;

  VAR_14.regval = FUNC_3(VAR_5);

  VAR_14.hsf_ctrl.fldbcount = VAR_11 - 1;
  VAR_14.hsf_ctrl.flcycle = VAR_1;
  FUNC_5(VAR_5, VAR_14.regval);

  FUNC_6(VAR_3, VAR_15);

  VAR_17 = FUNC_0(VAR_9,
      VAR_8);






  if (!VAR_17) {
   VAR_16 = FUNC_4(VAR_4);
   if (VAR_11 == 1)
    *VAR_12 = (u8)(VAR_16 & 0x000000FF);
   else if (VAR_11 == 2)
    *VAR_12 = (u16)(VAR_16 & 0x0000FFFF);
   break;
  } else {





   VAR_13.regval = FUNC_3(VAR_6);
   if (VAR_13.hsf_status.flcerr) {

    continue;
   } else if (!VAR_13.hsf_status.flcdone) {
    FUNC_2("Timeout error - flash cycle did not complete.\n");
    break;
   }
  }
 } while (VAR_18++ < VAR_2);

 return VAR_17;
}

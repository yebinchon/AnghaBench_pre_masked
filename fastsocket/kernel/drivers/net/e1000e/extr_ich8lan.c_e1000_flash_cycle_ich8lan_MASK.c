
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flcerr; scalar_t__ flcdone; } ;
union ich8_hws_flash_status {TYPE_2__ hsf_status; void* regval; } ;
struct TYPE_3__ {int flcgo; } ;
union ich8_hws_flash_ctrl {void* regval; TYPE_1__ hsf_ctrl; } ;
typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_3, u32 VAR_4)
{
 union ich8_hws_flash_ctrl VAR_5;
 union ich8_hws_flash_status VAR_6;
 u32 VAR_7 = 0;


 VAR_5.regval = FUNC_0(VAR_1);
 VAR_5.hsf_ctrl.flcgo = 1;
 FUNC_1(VAR_1, VAR_5.regval);


 do {
  VAR_6.regval = FUNC_0(VAR_2);
  if (VAR_6.hsf_status.flcdone)
   break;
  FUNC_2(1);
 } while (VAR_7++ < VAR_4);

 if (VAR_6.hsf_status.flcdone && !VAR_6.hsf_status.flcerr)
  return 0;

 return -VAR_0;
}

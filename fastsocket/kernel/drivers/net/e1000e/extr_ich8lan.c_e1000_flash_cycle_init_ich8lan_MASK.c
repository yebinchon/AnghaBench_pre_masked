
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flcerr; int dael; int flcdone; int flcinprog; int fldesvalid; } ;
union ich8_hws_flash_status {void* regval; TYPE_1__ hsf_status; } ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3)
{
 union ich8_hws_flash_status VAR_4;
 s32 VAR_5 = -VAR_0;

 VAR_4.regval = FUNC_1(VAR_1);


 if (!VAR_4.hsf_status.fldesvalid) {
  FUNC_0("Flash descriptor invalid.  SW Sequencing must be used.\n");
  return -VAR_0;
 }


 VAR_4.hsf_status.flcerr = 1;
 VAR_4.hsf_status.dael = 1;

 FUNC_2(VAR_1, VAR_4.regval);
 if (!VAR_4.hsf_status.flcinprog) {




  VAR_4.hsf_status.flcdone = 1;
  FUNC_2(VAR_1, VAR_4.regval);
  VAR_5 = 0;
 } else {
  s32 VAR_6;




  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_4.regval = FUNC_1(VAR_1);
   if (!VAR_4.hsf_status.flcinprog) {
    VAR_5 = 0;
    break;
   }
   FUNC_3(1);
  }
  if (!VAR_5) {



   VAR_4.hsf_status.flcdone = 1;
   FUNC_2(VAR_1, VAR_4.regval);
  } else {
   FUNC_0("Flash controller busy, cannot get access\n");
  }
 }

 return VAR_5;
}

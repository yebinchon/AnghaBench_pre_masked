
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct TYPE_2__ {int ce_msg; } ;
struct ce_msg_comp_data {int busy; TYPE_1__ ce_msg; int rc; struct ce_msg_comp_data* token; int * handler; } ;
struct boot_rtc_time_data {int busy; TYPE_1__ ce_msg; int rc; struct boot_rtc_time_data* token; int * handler; } ;
typedef int rtc_data ;
typedef int ce_complete ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct ce_msg_comp_data*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,struct rtc_time*) ;
 int FUNC_4 (int,struct ce_msg_comp_data*) ;

__attribute__((used)) static int FUNC_5(struct rtc_time *VAR_1)
{
 struct ce_msg_comp_data VAR_2;
 struct boot_rtc_time_data VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.busy = 1;
 VAR_2.handler = &VAR_0;
 VAR_2.token = &VAR_3;
 VAR_4 = FUNC_4(0x40, &VAR_2);
 if (VAR_4)
  return VAR_4;

 while (VAR_3.busy) {
  if (FUNC_0())
   FUNC_2();
 }
 return FUNC_3(VAR_3.rc, VAR_3.ce_msg.ce_msg, VAR_1);
}

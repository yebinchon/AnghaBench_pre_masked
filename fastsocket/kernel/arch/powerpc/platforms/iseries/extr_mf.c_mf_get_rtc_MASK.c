
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ce_msg; } ;
struct rtc_time_data {TYPE_1__ ce_msg; int rc; int com; struct rtc_time_data* token; int * handler; } ;
struct rtc_time {int dummy; } ;
struct ce_msg_comp_data {TYPE_1__ ce_msg; int rc; int com; struct ce_msg_comp_data* token; int * handler; } ;
typedef int rtc_data ;
typedef int ce_complete ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rtc_time_data*,int ,int) ;
 int FUNC_2 (int ,int ,struct rtc_time*) ;
 int FUNC_3 (int,struct rtc_time_data*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct rtc_time *VAR_1)
{
 struct ce_msg_comp_data VAR_2;
 struct rtc_time_data VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_3.com);
 VAR_2.handler = &VAR_0;
 VAR_2.token = &VAR_3;
 VAR_4 = FUNC_3(0x40, &VAR_2);
 if (VAR_4)
  return VAR_4;
 FUNC_4(&VAR_3.com);
 return FUNC_2(VAR_3.rc, VAR_3.ce_msg.ce_msg, VAR_1);
}

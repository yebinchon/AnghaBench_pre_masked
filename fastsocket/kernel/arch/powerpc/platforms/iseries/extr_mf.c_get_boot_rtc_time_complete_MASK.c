
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ce_msg_data {int dummy; } ;
struct boot_rtc_time_data {scalar_t__ busy; scalar_t__ rc; int ce_msg; } ;


 int FUNC_0 (int *,struct ce_msg_data*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct ce_msg_data *VAR_1)
{
 struct boot_rtc_time_data *VAR_2 = VAR_0;

 FUNC_0(&VAR_2->ce_msg, VAR_1, sizeof(VAR_2->ce_msg));
 VAR_2->rc = 0;
 VAR_2->busy = 0;
}

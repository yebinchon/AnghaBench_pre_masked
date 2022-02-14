
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_wkalrm {int time; int pending; int enabled; } ;
struct device {int dummy; } ;
typedef int efi_time_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_bool_t ;
struct TYPE_2__ {scalar_t__ (* get_wakeup_time ) (int *,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 efi_time_t VAR_5;
 efi_status_t VAR_6;




 VAR_6 = VAR_2.get_wakeup_time((efi_bool_t *)&VAR_4->enabled,
         (efi_bool_t *)&VAR_4->pending, &VAR_5);

 if (VAR_6 != VAR_0)
  return -VAR_1;

 FUNC_0(&VAR_5, &VAR_4->time);

 return FUNC_1(&VAR_4->time);
}

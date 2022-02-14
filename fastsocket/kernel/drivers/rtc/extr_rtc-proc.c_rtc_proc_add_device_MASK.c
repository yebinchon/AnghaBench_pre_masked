
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {scalar_t__ id; } ;


 int FUNC_0 (char*,int ,int *,int *,struct rtc_device*) ;
 int VAR_0 ;

void FUNC_1(struct rtc_device *VAR_1)
{
 if (VAR_1->id == 0)
  FUNC_0("driver/rtc", 0, ((void*)0), &VAR_0, VAR_1);
}

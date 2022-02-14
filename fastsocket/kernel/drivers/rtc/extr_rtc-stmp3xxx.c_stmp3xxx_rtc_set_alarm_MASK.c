
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; } ;
struct rtc_wkalrm {int time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 struct stmp3xxx_rtc_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 unsigned long VAR_3;
 struct stmp3xxx_rtc_data *VAR_4 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->time, &VAR_3);
 FUNC_0(VAR_3, VAR_4->io + VAR_0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 struct stmp3xxx_rtc_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct stmp3xxx_rtc_data*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, unsigned long VAR_2)
{
 struct stmp3xxx_rtc_data *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_3->io + VAR_0);
 FUNC_2(VAR_3);
 return 0;
}

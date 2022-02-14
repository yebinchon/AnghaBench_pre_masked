
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct stmp3xxx_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, unsigned int VAR_3)
{
 struct stmp3xxx_rtc_data *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3)
  FUNC_2(VAR_0,
    VAR_4->io + VAR_1);
 else
  FUNC_1(VAR_0,
    VAR_4->io + VAR_1);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; int rtc; int irq_1msec; int irq_alarm; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct stmp3xxx_rtc_data*) ;
 struct stmp3xxx_rtc_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct stmp3xxx_rtc_data *VAR_4 = FUNC_3(VAR_3);

 if (!VAR_4)
  return 0;

 FUNC_5(VAR_1 | VAR_0,
   VAR_4->io + VAR_2);
 FUNC_0(VAR_4->irq_alarm, &VAR_3->dev);
 FUNC_0(VAR_4->irq_1msec, &VAR_3->dev);
 FUNC_4(VAR_4->rtc);
 FUNC_1(VAR_4->io);
 FUNC_2(VAR_4);

 return 0;
}

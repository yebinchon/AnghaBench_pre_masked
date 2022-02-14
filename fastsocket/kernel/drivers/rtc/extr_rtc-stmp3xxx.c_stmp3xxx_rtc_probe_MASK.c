
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; int rtc; void* irq_alarm; void* irq_1msec; scalar_t__ irq_count; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (void*,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct stmp3xxx_rtc_data*) ;
 struct stmp3xxx_rtc_data* FUNC_8 (int,int ) ;
 void* FUNC_9 (struct platform_device*,int) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct stmp3xxx_rtc_data*) ;
 int FUNC_12 (void*,int ,int ,char*,int *) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (int ,int *,int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,scalar_t__) ;
 int FUNC_17 (scalar_t__,int) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_19)
{
 struct stmp3xxx_rtc_data *VAR_20;
 struct resource *VAR_21;
 int VAR_22;

 VAR_20 = FUNC_8(sizeof *VAR_20, VAR_10);
 if (!VAR_20)
  return -VAR_8;

 VAR_21 = FUNC_10(VAR_19, VAR_14, 0);
 if (!VAR_21) {
  FUNC_3(&VAR_19->dev, "failed to get resource\n");
  VAR_22 = -VAR_9;
  goto out_free;
 }

 VAR_20->io = FUNC_5(VAR_21->start, FUNC_13(VAR_21));
 if (!VAR_20->io) {
  FUNC_3(&VAR_19->dev, "ioremap failed\n");
  VAR_22 = -VAR_6;
  goto out_free;
 }

 VAR_20->irq_alarm = FUNC_9(VAR_19, 0);
 VAR_20->irq_1msec = FUNC_9(VAR_19, 1);

 if (!(FUNC_2(VAR_13 + VAR_20->io) &
   VAR_5)) {
  FUNC_3(&VAR_19->dev, "no device onboard\n");
  VAR_22 = -VAR_7;
  goto out_remap;
 }

 FUNC_17(VAR_20->io, 1);
 FUNC_16(VAR_2 |
   VAR_4 |
   VAR_3,
   VAR_20->io + VAR_12);
 VAR_20->rtc = FUNC_14(VAR_19->name, &VAR_19->dev,
    &VAR_18, VAR_16);
 if (FUNC_0(VAR_20->rtc)) {
  VAR_22 = FUNC_1(VAR_20->rtc);
  goto out_remap;
 }

 VAR_20->irq_count = 0;
 VAR_22 = FUNC_12(VAR_20->irq_alarm, VAR_17,
   VAR_15, "RTC alarm", &VAR_19->dev);
 if (VAR_22) {
  FUNC_3(&VAR_19->dev, "Cannot claim IRQ%d\n",
   VAR_20->irq_alarm);
  goto out_irq_alarm;
 }
 VAR_22 = FUNC_12(VAR_20->irq_1msec, VAR_17,
   VAR_15, "RTC tick", &VAR_19->dev);
 if (VAR_22) {
  FUNC_3(&VAR_19->dev, "Cannot claim IRQ%d\n",
   VAR_20->irq_1msec);
  goto out_irq1;
 }

 FUNC_11(VAR_19, VAR_20);

 return 0;

out_irq1:
 FUNC_4(VAR_20->irq_alarm, &VAR_19->dev);
out_irq_alarm:
 FUNC_16(VAR_1 | VAR_0,
   VAR_20->io + VAR_11);
 FUNC_15(VAR_20->rtc);
out_remap:
 FUNC_6(VAR_20->io);
out_free:
 FUNC_7(VAR_20);
 return VAR_22;
}

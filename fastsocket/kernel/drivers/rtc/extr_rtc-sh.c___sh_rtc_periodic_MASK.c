
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int periodic_freq; struct rtc_device* rtc_dev; scalar_t__ regbase; } ;
struct rtc_task {int private_data; int (* func ) (int ) ;} ;
struct rtc_device {int irq_task_lock; struct rtc_task* irq_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rtc_device*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sh_rtc *VAR_7)
{
 struct rtc_device *VAR_8 = VAR_7->rtc_dev;
 struct rtc_task *VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_7->regbase + VAR_3);
 VAR_11 = VAR_10 & VAR_4;
 VAR_10 &= ~VAR_4;
 FUNC_5(VAR_10, VAR_7->regbase + VAR_3);

 if (!VAR_11)
  return 0;


 if ((VAR_7->periodic_freq & VAR_1) && (VAR_7->periodic_freq & VAR_0))
  VAR_7->periodic_freq &= ~VAR_0;
 else {
  if (VAR_7->periodic_freq & VAR_1)
   VAR_7->periodic_freq |= VAR_0;
  if (VAR_7->periodic_freq & VAR_2) {
   FUNC_2(&VAR_8->irq_task_lock);
   VAR_9 = VAR_8->irq_task;
   if (VAR_9)
    VAR_9->func(VAR_9->private_data);
   FUNC_3(&VAR_8->irq_task_lock);
  } else
   FUNC_1(VAR_7->rtc_dev, 1, VAR_6 | VAR_5);
 }

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int release; int class; struct device* parent; } ;
struct rtc_device {int id; int max_user_freq; TYPE_1__ dev; int name; int irq_queue; int irq_task_lock; int irq_lock; int ops_lock; struct module* owner; struct rtc_class_ops const* ops; } ;
struct rtc_class_ops {int dummy; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct rtc_device* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,char const*,int) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *,int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct rtc_device*) ;
 struct rtc_device* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_5 ;
 int FUNC_15 (struct rtc_device*) ;
 int FUNC_16 (struct rtc_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (struct rtc_device*) ;
 int FUNC_18 (struct rtc_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,char const*,int ) ;

struct rtc_device *FUNC_21(const char *VAR_8, struct device *VAR_9,
     const struct rtc_class_ops *VAR_10,
     struct module *VAR_11)
{
 struct rtc_device *VAR_12;
 int VAR_13, VAR_14;

 if (FUNC_7(&VAR_7, VAR_1) == 0) {
  VAR_14 = -VAR_0;
  goto exit;
 }


 FUNC_13(&VAR_4);
 VAR_14 = FUNC_6(&VAR_7, ((void*)0), &VAR_13);
 FUNC_14(&VAR_4);

 if (VAR_14 < 0)
  goto exit;

 VAR_13 = VAR_13 & VAR_2;

 VAR_12 = FUNC_11(sizeof(struct rtc_device), VAR_1);
 if (VAR_12 == ((void*)0)) {
  VAR_14 = -VAR_0;
  goto exit_idr;
 }

 VAR_12->id = VAR_13;
 VAR_12->ops = VAR_10;
 VAR_12->owner = VAR_11;
 VAR_12->max_user_freq = 64;
 VAR_12->dev.parent = VAR_9;
 VAR_12->dev.class = VAR_5;
 VAR_12->dev.release = VAR_6;

 FUNC_12(&VAR_12->ops_lock);
 FUNC_19(&VAR_12->irq_lock);
 FUNC_19(&VAR_12->irq_task_lock);
 FUNC_9(&VAR_12->irq_queue);

 FUNC_20(VAR_12->name, VAR_8, VAR_3);
 FUNC_4(&VAR_12->dev, "rtc%d", VAR_13);

 FUNC_16(VAR_12);

 VAR_14 = FUNC_5(&VAR_12->dev);
 if (VAR_14)
  goto exit_kfree;

 FUNC_15(VAR_12);
 FUNC_18(VAR_12);
 FUNC_17(VAR_12);

 FUNC_2(VAR_9, "rtc core: registered %s as %s\n",
   VAR_12->name, FUNC_3(&VAR_12->dev));

 return VAR_12;

exit_kfree:
 FUNC_10(VAR_12);

exit_idr:
 FUNC_13(&VAR_4);
 FUNC_8(&VAR_7, VAR_13);
 FUNC_14(&VAR_4);

exit:
 FUNC_1(VAR_9, "rtc core: unable to register %s, err = %d\n",
   VAR_8, VAR_14);
 return FUNC_0(VAR_14);
}

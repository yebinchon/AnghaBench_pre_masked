
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_ops {int hw; } ;
struct rt2x00_dev {int name; int irq; struct ieee80211_hw* hw; struct rt2x00_ops const* ops; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct platform_device {TYPE_2__ dev; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_hw* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (struct platform_device*,struct ieee80211_hw*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 int FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*) ;

int FUNC_9(struct platform_device *VAR_2, const struct rt2x00_ops *VAR_3)
{
 struct ieee80211_hw *VAR_4;
 struct rt2x00_dev *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(sizeof(struct rt2x00_dev), VAR_3->hw);
 if (!VAR_4) {
  FUNC_4("Failed to allocate hardware\n");
  return -VAR_0;
 }

 FUNC_3(VAR_2, VAR_4);

 VAR_5 = VAR_4->priv;
 VAR_5->dev = &VAR_2->dev;
 VAR_5->ops = VAR_3;
 VAR_5->hw = VAR_4;
 VAR_5->irq = FUNC_2(VAR_2, 0);
 VAR_5->name = VAR_2->dev.driver->name;

 FUNC_5(VAR_5, VAR_1);

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  goto exit_free_device;

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6)
  goto exit_free_reg;

 return 0;

exit_free_reg:
 FUNC_8(VAR_5);

exit_free_device:
 FUNC_1(VAR_4);

 return VAR_6;
}

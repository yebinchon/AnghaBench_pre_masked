
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct push_switch_platform_info {int irq_flags; scalar_t__ name; int irq_handler; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct push_switch {struct platform_device* pdev; TYPE_1__ debounce; int work; } ;
struct TYPE_5__ {struct push_switch_platform_info* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int,struct platform_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct push_switch*) ;
 struct push_switch* FUNC_7 (int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct push_switch*) ;
 int FUNC_10 (int,int ,int,scalar_t__,struct platform_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct push_switch_platform_info *VAR_10;
 struct push_switch *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_7(sizeof(struct push_switch), VAR_4);
 if (FUNC_11(!VAR_11))
  return -VAR_3;

 VAR_13 = FUNC_8(VAR_9, 0);
 if (FUNC_11(VAR_13 < 0)) {
  VAR_12 = -VAR_2;
  goto err;
 }

 VAR_10 = VAR_9->dev.platform_data;
 FUNC_0(!VAR_10);

 VAR_12 = FUNC_10(VAR_13, VAR_10->irq_handler,
     VAR_5 | VAR_10->irq_flags,
     VAR_10->name ? VAR_10->name : VAR_0, VAR_9);
 if (FUNC_11(VAR_12 < 0))
  goto err;

 if (VAR_10->name) {
  VAR_12 = FUNC_3(&VAR_9->dev, &VAR_6);
  if (FUNC_11(VAR_12)) {
   FUNC_2(&VAR_9->dev, "Failed creating device attrs\n");
   VAR_12 = -VAR_1;
   goto err_irq;
  }
 }

 FUNC_1(&VAR_11->work, VAR_8);
 FUNC_5(&VAR_11->debounce);

 VAR_11->debounce.function = VAR_7;
 VAR_11->debounce.data = (unsigned long)VAR_11;


 VAR_11->pdev = VAR_9;

 FUNC_9(VAR_9, VAR_11);

 return 0;

err_irq:
 FUNC_4(VAR_13, VAR_9);
err:
 FUNC_6(VAR_11);
 return VAR_12;
}

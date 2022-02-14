
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucb1400_ts {int ts_idev; int irq; } ;
struct TYPE_2__ {struct ucb1400_ts* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ,struct ucb1400_ts*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct ucb1400_ts *VAR_1 = VAR_0->dev.platform_data;

 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_1(VAR_1->ts_idev);
 return 0;
}

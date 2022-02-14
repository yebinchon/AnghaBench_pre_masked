
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct push_switch_platform_info {int bit; } ;
struct push_switch {int state; int debounce; } ;
struct TYPE_2__ {struct push_switch_platform_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 struct push_switch* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3;
 struct push_switch *VAR_5 = FUNC_4(VAR_4);
 struct push_switch_platform_info *VAR_6 = VAR_4->dev.platform_data;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_0);


 if (VAR_5->state) {
  VAR_9 = 1;
  goto out;
 }

 VAR_8 = VAR_7 & 0x70;

 if (VAR_8 & (1 << VAR_6->bit)) {
  VAR_5->state = !!(VAR_8 & (1 << VAR_6->bit));
  if (VAR_5->state)
   FUNC_3(&VAR_5->debounce, VAR_1 + 50);

  VAR_9 = 1;
 }

out:

 VAR_7 |= (0x7 << 12);
 FUNC_2(VAR_7, VAR_0);

 return FUNC_0(VAR_9);
}

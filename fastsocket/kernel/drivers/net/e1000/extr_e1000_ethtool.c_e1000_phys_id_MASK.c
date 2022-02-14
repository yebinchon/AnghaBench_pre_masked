
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct TYPE_4__ {unsigned long data; scalar_t__ function; } ;
struct e1000_adapter {int led_status; TYPE_1__ blink_timer; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int) ;
 struct e1000_adapter* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4, u32 VAR_5)
{
 struct e1000_adapter *VAR_6 = FUNC_8(VAR_4);
 struct e1000_hw *VAR_7 = &VAR_6->hw;

 if (!VAR_5)
  VAR_5 = VAR_1;

 if (!VAR_6->blink_timer.function) {
  FUNC_5(&VAR_6->blink_timer);
  VAR_6->blink_timer.function = VAR_2;
  VAR_6->blink_timer.data = (unsigned long)VAR_6;
 }
 FUNC_4(VAR_7);
 FUNC_6(&VAR_6->blink_timer, VAR_3);
 FUNC_7(VAR_5 * 1000);
 FUNC_1(&VAR_6->blink_timer);

 FUNC_3(VAR_7);
 FUNC_0(VAR_0, &VAR_6->led_status);
 FUNC_2(VAR_7);

 return 0;
}

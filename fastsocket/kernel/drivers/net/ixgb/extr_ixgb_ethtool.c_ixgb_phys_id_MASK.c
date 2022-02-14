
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {unsigned long data; scalar_t__ function; } ;
struct ixgb_adapter {int led_status; int hw; TYPE_1__ blink_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int) ;
 struct ixgb_adapter* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_4, u32 VAR_5)
{
 struct ixgb_adapter *VAR_6 = FUNC_6(VAR_4);

 if (!VAR_5)
  VAR_5 = VAR_0;

 if (!VAR_6->blink_timer.function) {
  FUNC_2(&VAR_6->blink_timer);
  VAR_6->blink_timer.function = VAR_2;
  VAR_6->blink_timer.data = (unsigned long)VAR_6;
 }

 FUNC_4(&VAR_6->blink_timer, VAR_3);

 FUNC_5(VAR_5 * 1000);
 FUNC_1(&VAR_6->blink_timer);
 FUNC_3(&VAR_6->hw);
 FUNC_0(VAR_1, &VAR_6->led_status);

 return 0;
}

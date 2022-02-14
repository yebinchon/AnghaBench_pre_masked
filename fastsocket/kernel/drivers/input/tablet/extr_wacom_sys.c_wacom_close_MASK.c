
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom {TYPE_1__* intf; int lock; scalar_t__ open; int irq; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ needs_remote_wakeup; } ;


 struct wacom* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_0)
{
 struct wacom *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
 FUNC_4(VAR_1->irq);
 VAR_1->open = 0;
 VAR_1->intf->needs_remote_wakeup = 0;
 FUNC_2(&VAR_1->lock);

 FUNC_3(VAR_1->intf);
}

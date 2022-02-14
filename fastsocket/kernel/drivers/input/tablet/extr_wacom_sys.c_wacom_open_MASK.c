
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wacom {int open; int lock; TYPE_1__* intf; int irq; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wacom* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_2)
{
 struct wacom *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 if (FUNC_3(VAR_3->intf) < 0)
  return -VAR_0;

 FUNC_1(&VAR_3->lock);

 if (FUNC_5(VAR_3->irq, VAR_1)) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_3->open = 1;
 VAR_3->intf->needs_remote_wakeup = 1;

out:
 if (VAR_4)
  FUNC_4(VAR_3->intf);
 FUNC_2(&VAR_3->lock);
 return VAR_4;
}

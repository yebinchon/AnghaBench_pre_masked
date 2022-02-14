
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_wkalrm {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct rtc_device {int ops_lock; TYPE_1__ dev; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* read_alarm ) (int ,struct rtc_wkalrm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtc_wkalrm*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct rtc_wkalrm*) ;

__attribute__((used)) static int FUNC_4(struct rtc_device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_2->ops_lock);
 if (VAR_4)
  return VAR_4;

 if (VAR_2->ops == ((void*)0))
  VAR_4 = -VAR_1;
 else if (!VAR_2->ops->read_alarm)
  VAR_4 = -VAR_0;
 else {
  FUNC_0(VAR_3, 0, sizeof(struct rtc_wkalrm));
  VAR_4 = VAR_2->ops->read_alarm(VAR_2->dev.parent, VAR_3);
 }

 FUNC_2(&VAR_2->ops_lock);
 return VAR_4;
}

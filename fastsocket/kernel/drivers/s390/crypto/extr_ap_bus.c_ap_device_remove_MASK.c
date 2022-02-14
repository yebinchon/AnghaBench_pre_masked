
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ap_driver {int (* remove ) (struct ap_device*) ;} ;
struct ap_device {int lock; int queue_count; int list; int timeout; struct ap_driver* drv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ap_device*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ap_device*) ;
 struct ap_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2)
{
 struct ap_device *VAR_3 = FUNC_7(VAR_2);
 struct ap_driver *VAR_4 = VAR_3->drv;

 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->timeout);
 FUNC_4(&VAR_0);
 FUNC_3(&VAR_3->list);
 FUNC_5(&VAR_0);
 if (VAR_4->remove)
  VAR_4->remove(VAR_3);
 FUNC_4(&VAR_3->lock);
 FUNC_1(VAR_3->queue_count, &VAR_1);
 FUNC_5(&VAR_3->lock);
 return 0;
}

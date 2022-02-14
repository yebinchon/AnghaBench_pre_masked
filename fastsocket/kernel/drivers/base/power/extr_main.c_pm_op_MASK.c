
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct dev_pm_ops {int (* suspend ) (struct device*) ;int (* resume ) (struct device*) ;int (* freeze ) (struct device*) ;int (* poweroff ) (struct device*) ;int (* thaw ) (struct device*) ;int (* restore ) (struct device*) ;} ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int (*) (struct device*),int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1,
   const struct dev_pm_ops *VAR_2,
   pm_message_t VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3.event) {
 default:
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}

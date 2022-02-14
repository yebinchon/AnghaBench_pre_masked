
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* host; } ;
struct isp1301 {TYPE_2__ otg; } ;
struct device {TYPE_3__* driver; } ;
struct TYPE_6__ {int (* suspend ) (struct device*,int,int ) ;} ;
struct TYPE_4__ {struct device* controller; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct isp1301 *VAR_1)
{



 struct device *VAR_2;

 if (!VAR_1->otg.host)
  return -VAR_0;




 VAR_2 = VAR_1->otg.host->controller;
 return VAR_2->driver->suspend(VAR_2, 3, 0);

}

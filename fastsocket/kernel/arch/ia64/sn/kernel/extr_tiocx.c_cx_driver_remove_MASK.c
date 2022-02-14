
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cx_drv {int (* remove ) (struct cx_dev*) ;} ;
struct cx_dev {struct cx_drv* driver; } ;


 int FUNC_0 (struct cx_dev*) ;
 struct cx_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct cx_dev *VAR_1 = FUNC_1(VAR_0);
 struct cx_drv *VAR_2 = VAR_1->driver;
 if (VAR_2->remove)
  VAR_2->remove(VAR_1);
 VAR_1->driver = ((void*)0);
 return 0;
}

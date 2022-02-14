
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int * bus; } ;
struct scm_driver {struct device_driver drv; } ;


 int FUNC_0 (struct device_driver*) ;
 int VAR_0 ;

int FUNC_1(struct scm_driver *VAR_1)
{
 struct device_driver *VAR_2 = &VAR_1->drv;

 VAR_2->bus = &VAR_0;

 return FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int class; int vendor; int device; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct sdio_func* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct sdio_func *VAR_3 = FUNC_0 (VAR_0);

 return FUNC_1(VAR_2, "sdio:c%02Xv%04Xd%04X\n",
   VAR_3->class, VAR_3->vendor, VAR_3->device);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct langwell_udc {TYPE_1__* driver; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int function; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct langwell_udc* VAR_1 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct langwell_udc *VAR_5 = VAR_1;

 if (!VAR_5->driver || !VAR_5->driver->function
   || FUNC_1(VAR_5->driver->function) > VAR_0)
  return 0;

 return FUNC_0(VAR_4, VAR_0, "%s\n", VAR_5->driver->function);
}

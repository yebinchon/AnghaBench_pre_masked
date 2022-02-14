
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct output_device {TYPE_1__* props; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_status ) (struct output_device*) ;} ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct output_device*) ;
 int FUNC_2 (struct output_device*) ;
 struct output_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
           struct device_attribute *VAR_1, char *VAR_2)
{
 ssize_t VAR_3 = 0;
 struct output_device *VAR_4 = FUNC_3(VAR_0);
 if (VAR_4->props)
  VAR_3 = FUNC_0(VAR_2,"%.8x\n",VAR_4->props->get_status(VAR_4));
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timed_output_dev {int (* get_time ) (struct timed_output_dev*) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct timed_output_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct timed_output_dev*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct timed_output_dev *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_3->get_time(VAR_3);

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}

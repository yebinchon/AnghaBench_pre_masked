
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timed_output_dev {int (* enable ) (struct timed_output_dev*,int) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct timed_output_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,int*) ;
 int FUNC_2 (struct timed_output_dev*,int) ;

__attribute__((used)) static ssize_t FUNC_3(
  struct device *VAR_0, struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct timed_output_dev *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 FUNC_1(VAR_2, "%d", &VAR_5);
 VAR_4->enable(VAR_4, VAR_5);

 return VAR_3;
}

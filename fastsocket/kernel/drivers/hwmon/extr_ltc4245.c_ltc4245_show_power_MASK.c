
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {scalar_t__ index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int const) ;
 unsigned int FUNC_1 (struct device*,scalar_t__) ;
 int FUNC_2 (struct device*,scalar_t__) ;
 int FUNC_3 (char*,int ,char*,unsigned int const) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_4(VAR_2);
 const unsigned int VAR_5 = FUNC_1(VAR_1, VAR_4->index);
 const int VAR_6 = FUNC_2(VAR_1, VAR_4->index+1);


 const unsigned int VAR_7 = FUNC_0(VAR_6 * VAR_5);

 return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_event_attr {int mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int *) ;
 int FUNC_1 (char*,char*,int) ;
 struct iio_event_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
            struct device_attribute *VAR_2,
            char *VAR_3)
{
 int VAR_4;
 s8 VAR_5;
 struct iio_event_attr *VAR_6 = FUNC_2(VAR_2);

 VAR_4 = FUNC_0(VAR_1,
           VAR_0,
           (u8 *)&VAR_5);

 return VAR_4 ? VAR_4 : FUNC_1(VAR_3, "%d\n",
       (VAR_5 & VAR_6->mask) ? 1 : 0);;
}

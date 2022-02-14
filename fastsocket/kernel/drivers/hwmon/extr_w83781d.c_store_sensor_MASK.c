
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83781d_data {int* sens; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int* VAR_0 ;
 int* VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,long) ;
 struct w83781d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct w83781d_data*,int ) ;
 int FUNC_8 (struct w83781d_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute *VAR_8 = FUNC_6(VAR_5);
 struct w83781d_data *VAR_9 = FUNC_1(VAR_4);
 int VAR_10 = VAR_8->index;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_5(VAR_6, ((void*)0), 10);

 FUNC_3(&VAR_9->update_lock);

 switch (VAR_11) {
 case 1:
  VAR_12 = FUNC_7(VAR_9, VAR_2);
  FUNC_8(VAR_9, VAR_2,
        VAR_12 | VAR_0[VAR_10]);
  VAR_12 = FUNC_7(VAR_9, VAR_3);
  FUNC_8(VAR_9, VAR_3,
        VAR_12 | VAR_1[VAR_10]);
  VAR_9->sens[VAR_10] = VAR_11;
  break;
 case 2:
  VAR_12 = FUNC_7(VAR_9, VAR_2);
  FUNC_8(VAR_9, VAR_2,
        VAR_12 | VAR_0[VAR_10]);
  VAR_12 = FUNC_7(VAR_9, VAR_3);
  FUNC_8(VAR_9, VAR_3,
        VAR_12 & ~VAR_1[VAR_10]);
  VAR_9->sens[VAR_10] = VAR_11;
  break;
 case 128:
  FUNC_2(VAR_4, "Sensor type %d is deprecated, please use 4 "
    "instead\n", 128);

 case 4:
  VAR_12 = FUNC_7(VAR_9, VAR_2);
  FUNC_8(VAR_9, VAR_2,
        VAR_12 & ~VAR_0[VAR_10]);
  VAR_9->sens[VAR_10] = VAR_11;
  break;
 default:
  FUNC_0(VAR_4, "Invalid sensor type %ld; must be 1, 2, or 4\n",
         (long) VAR_11);
  break;
 }

 FUNC_4(&VAR_9->update_lock);
 return VAR_7;
}

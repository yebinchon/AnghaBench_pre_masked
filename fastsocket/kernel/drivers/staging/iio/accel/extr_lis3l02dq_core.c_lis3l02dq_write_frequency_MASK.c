
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int mlock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ,int *) ;
 int FUNC_2 (struct device*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int,long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_7,
      struct device_attribute *VAR_8,
      const char *VAR_9,
      size_t VAR_10)
{
 struct iio_dev *VAR_11 = FUNC_0(VAR_7);
 long VAR_12;
 int VAR_13;
 u8 VAR_14;

 VAR_13 = FUNC_5(VAR_9, 10, &VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_3(&VAR_11->mlock);
 VAR_13 = FUNC_1(VAR_7,
           VAR_2,
           &VAR_14);
 if (VAR_13)
  goto error_ret_mutex;

 VAR_14 &= ~VAR_1;
 switch (VAR_12) {
 case 280:
  VAR_14 |= VAR_3;
  break;
 case 560:
  VAR_14 |= VAR_5;
  break;
 case 1120:
  VAR_14 |= VAR_4;
  break;
 case 4480:
  VAR_14 |= VAR_6;
  break;
 default:
  VAR_13 = -VAR_0;
  goto error_ret_mutex;
 };

 VAR_13 = FUNC_2(VAR_7,
     VAR_2,
     &VAR_14);

error_ret_mutex:
 FUNC_4(&VAR_11->mlock);

 return VAR_13 ? VAR_13 : VAR_10;
}

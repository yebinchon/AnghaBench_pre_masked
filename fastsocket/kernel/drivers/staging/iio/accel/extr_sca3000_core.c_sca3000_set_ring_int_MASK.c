
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int lock; } ;
struct iio_event_attr {int mask; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**,int) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;
 int FUNC_6 (char const*,int,long*) ;
 struct iio_event_attr* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3,
          size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct sca3000_state *VAR_6 = VAR_5->dev_data;
 struct iio_event_attr *VAR_7 = FUNC_7(VAR_2);

 long VAR_8;
 int VAR_9;
 u8 *VAR_10;

 FUNC_2(&VAR_6->lock);
 VAR_9 = FUNC_6(VAR_3, 10, &VAR_8);
 if (VAR_9)
  goto error_ret;
 VAR_9 = FUNC_4(VAR_6, VAR_0, &VAR_10, 1);
 if (VAR_9)
  goto error_ret;
 if (VAR_8)
  VAR_9 = FUNC_5(VAR_6,
     VAR_0,
     VAR_10[1] | VAR_7->mask);
 else
  VAR_9 = FUNC_5(VAR_6,
     VAR_0,
     VAR_10[1] & ~VAR_7->mask);
 FUNC_1(VAR_10);
error_ret:
 FUNC_3(&VAR_6->lock);

 return VAR_9 ? VAR_9 : VAR_4;
}

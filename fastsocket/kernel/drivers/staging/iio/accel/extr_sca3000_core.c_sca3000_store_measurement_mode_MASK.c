
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int lock; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**,int) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;
 int FUNC_6 (char const*,int,long*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3,
          size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct sca3000_state *VAR_6 = VAR_5->dev_data;
 int VAR_7;
 u8 *VAR_8;
 int VAR_9 = 0x03;
 long VAR_10;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_6(VAR_3, 10, &VAR_10);
 if (VAR_7)
  goto error_ret;
 VAR_7 = FUNC_4(VAR_6, VAR_0, &VAR_8, 1);
 if (VAR_7)
  goto error_ret;
 VAR_8[1] &= ~VAR_9;
 VAR_8[1] |= (VAR_10 & VAR_9);
 VAR_7 = FUNC_5(VAR_6, VAR_0, VAR_8[1]);
 if (VAR_7)
  goto error_free_rx;
 FUNC_3(&VAR_6->lock);

 return VAR_4;

error_free_rx:
 FUNC_1(VAR_8);
error_ret:
 FUNC_3(&VAR_6->lock);

 return VAR_7;
}

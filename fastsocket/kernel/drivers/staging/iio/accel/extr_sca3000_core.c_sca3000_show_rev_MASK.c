
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int lock; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**,int) ;
 scalar_t__ FUNC_5 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
    struct device_attribute *VAR_4,
    char *VAR_5)
{
 int VAR_6 = 0, VAR_7;
 struct iio_dev *VAR_8 = FUNC_0(VAR_3);
 struct sca3000_state *VAR_9 = VAR_8->dev_data;

 u8 *VAR_10;

 FUNC_2(&VAR_9->lock);
 VAR_7 = FUNC_4(VAR_9, VAR_0, &VAR_10, 1);
 if (VAR_7 < 0)
  goto error_ret;
 VAR_6 += FUNC_5(VAR_5 + VAR_6,
         "major=%d, minor=%d\n",
         VAR_10[1] & VAR_1,
         VAR_10[1] & VAR_2);
 FUNC_1(VAR_10);

error_ret:
 FUNC_3(&VAR_9->lock);

 return VAR_7 ? VAR_7 : VAR_6;
}

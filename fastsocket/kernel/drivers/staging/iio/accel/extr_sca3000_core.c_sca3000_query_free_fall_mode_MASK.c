
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
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**,int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
         struct device_attribute *VAR_3,
         char *VAR_4)
{
 int VAR_5, VAR_6;
 u8 *VAR_7;
 struct iio_dev *VAR_8 = FUNC_0(VAR_2);
 struct sca3000_state *VAR_9 = VAR_8->dev_data;

 FUNC_2(&VAR_9->lock);
 VAR_5 = FUNC_4(VAR_9, VAR_1, &VAR_7, 1);
 FUNC_3(&VAR_9->lock);
 if (VAR_5)
  return VAR_5;
 VAR_6 = FUNC_5(VAR_4, "%d\n",
        !!(VAR_7[1] & VAR_0));
 FUNC_1(VAR_7);

 return VAR_6;
}

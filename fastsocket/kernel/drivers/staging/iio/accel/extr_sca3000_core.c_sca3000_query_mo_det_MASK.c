
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
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**) ;
 int FUNC_5 (struct sca3000_state*,int ,int**,int) ;
 scalar_t__ FUNC_6 (char*,char*,...) ;
 struct iio_event_attr* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_3);
 struct sca3000_state *VAR_7 = VAR_6->dev_data;
 struct iio_event_attr *VAR_8 = FUNC_7(VAR_4);
 int VAR_9, VAR_10 = 0;
 u8 *VAR_11;
 u8 VAR_12 = 0x03;


 FUNC_2(&VAR_7->lock);
 VAR_9 = FUNC_5(VAR_7, VAR_1, &VAR_11, 1);
 if (VAR_9)
  goto error_ret;

 if ((VAR_11[1]&VAR_12) != VAR_0)
  VAR_10 += FUNC_6(VAR_5 + VAR_10, "0\n");
 else {
  FUNC_1(VAR_11);
  VAR_9 = FUNC_4(VAR_7,
         VAR_2,
         &VAR_11);
  if (VAR_9)
   goto error_ret;

  VAR_10 += FUNC_6(VAR_5 + VAR_10, "%d\n",
          (VAR_11[1] & VAR_8->mask) ? 1 : 0);
 }
 FUNC_1(VAR_11);
error_ret:
 FUNC_3(&VAR_7->lock);

 return VAR_9 ? VAR_9 : VAR_10;
}

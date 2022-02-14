
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int lock; int info; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sca3000_state*,int ,int*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;
 int FUNC_6 (char const*,int,long*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6,
         size_t VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_1(VAR_4);
 struct sca3000_state *VAR_9 = VAR_8->dev_data;
 int VAR_10, VAR_11 = 0;
 u8 *VAR_12;
 long VAR_13;

 VAR_10 = FUNC_6(VAR_6, 10, &VAR_13);
 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_9->lock);

 VAR_10 = FUNC_0(VAR_9, VAR_9->info, &VAR_11);
 if (VAR_10)
  goto error_free_lock;

 VAR_10 = FUNC_4(VAR_9, VAR_3, &VAR_12);
 if (VAR_10)
  goto error_free_lock;

 VAR_12[1] &= ~0x03;

 if (VAR_13 == VAR_11/2) {
  VAR_12[1] |= VAR_1;
 } else if (VAR_13 == VAR_11/4) {
  VAR_12[1] |= VAR_2;
 } else if (VAR_13 != VAR_11) {
  VAR_10 = -VAR_0;
  goto error_free_lock;
 }
 VAR_10 = FUNC_5(VAR_9, VAR_3, VAR_12[1]);
error_free_lock:
 FUNC_3(&VAR_9->lock);

 return VAR_10 ? VAR_10 : VAR_7;
}

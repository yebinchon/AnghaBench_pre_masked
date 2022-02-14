
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
 int FUNC_5 (struct sca3000_state*,int ,int) ;
 int FUNC_6 (char const*,int,long*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4,
       size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_2);
 struct sca3000_state *VAR_7 = VAR_6->dev_data;
 long VAR_8;
 int VAR_9;
 u8 *VAR_10;
 u8 VAR_11 = VAR_0;

 FUNC_2(&VAR_7->lock);
 VAR_9 = FUNC_6(VAR_4, 10, &VAR_8);
 if (VAR_9)
  goto error_ret;


 VAR_9 = FUNC_4(VAR_7, VAR_1, &VAR_10, 1);
 if (VAR_9)
  goto error_ret;


 if (VAR_8 && !(VAR_10[1] & VAR_11))
  VAR_9 = FUNC_5(VAR_7, VAR_1,
     (VAR_10[1] | VAR_0));

 else if (!VAR_8 && (VAR_10[1]&VAR_11))
  VAR_9 = FUNC_5(VAR_7, VAR_1,
     (VAR_10[1] & ~VAR_11));

 FUNC_1(VAR_10);
error_ret:
 FUNC_3(&VAR_7->lock);

 return VAR_9 ? VAR_9 : VAR_5;
}

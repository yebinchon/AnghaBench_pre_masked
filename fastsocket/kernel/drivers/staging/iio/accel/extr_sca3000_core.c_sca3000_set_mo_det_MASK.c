
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int lock; scalar_t__ mo_det_use_count; } ;
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
 int FUNC_6 (struct sca3000_state*,int ,int) ;
 int FUNC_7 (struct sca3000_state*,int ,int) ;
 int FUNC_8 (char const*,int,long*) ;
 struct iio_event_attr* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5,
      size_t VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_0(VAR_3);
 struct sca3000_state *VAR_8 = VAR_7->dev_data;
 struct iio_event_attr *VAR_9 = FUNC_9(VAR_4);
 long VAR_10;
 int VAR_11;
 u8 *VAR_12;
 u8 VAR_13 = 0x03;
 VAR_11 = FUNC_8(VAR_5, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_2(&VAR_8->lock);


 VAR_11 = FUNC_4(VAR_8,
        VAR_2,
        &VAR_12);
 if (VAR_11)
  goto exit_point;

 if (VAR_10 && !(VAR_12[1] & VAR_9->mask)) {
  VAR_11 = FUNC_6(VAR_8,
          VAR_2,
          VAR_12[1] | VAR_9->mask);
  if (VAR_11)
   goto exit_point_free_rx;
  VAR_8->mo_det_use_count++;
 } else if (!VAR_10 && (VAR_12[1]&VAR_9->mask)) {
  VAR_11 = FUNC_6(VAR_8,
          VAR_2,
          VAR_12[1] & ~(VAR_9->mask));
  if (VAR_11)
   goto exit_point_free_rx;
  VAR_8->mo_det_use_count--;
 } else
  goto exit_point_free_rx;
 FUNC_1(VAR_12);

 VAR_11 = FUNC_5(VAR_8, VAR_1, &VAR_12, 1);
 if (VAR_11)
  goto exit_point;

 if ((VAR_8->mo_det_use_count)
     && ((VAR_12[1]&VAR_13) != VAR_0))
  VAR_11 = FUNC_7(VAR_8, VAR_1,
     (VAR_12[1] & ~VAR_13)
     | VAR_0);

 else if (!(VAR_8->mo_det_use_count)
   && ((VAR_12[1]&VAR_13) == VAR_0))
  VAR_11 = FUNC_7(VAR_8, VAR_1,
     (VAR_12[1] & ~VAR_13));
exit_point_free_rx:
 FUNC_1(VAR_12);
exit_point:
 FUNC_3(&VAR_8->lock);

 return VAR_11 ? VAR_11 : VAR_6;
}

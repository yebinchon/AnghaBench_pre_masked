
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_scan_el {int label; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_scan_el *VAR_5,
           struct iio_dev *VAR_6,
           bool VAR_7)
{
 u8 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(&VAR_6->dev,
           VAR_1,
           &VAR_8);
 if (VAR_10)
  goto error_ret;
 switch (VAR_5->label) {
 case 130:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 default:
  VAR_10 = -VAR_0;
  goto error_ret;
 }

 if (!((VAR_9 & VAR_8) == VAR_7)) {
  if (VAR_7)
   VAR_8 |= VAR_9;
  else
   VAR_8 &= ~VAR_9;
  VAR_10 = FUNC_1(&VAR_6->dev,
      VAR_1,
      &VAR_8);
 }
error_ret:
 return VAR_10;

}

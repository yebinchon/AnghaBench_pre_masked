
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int modes; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;

void FUNC_5(struct iio_dev *VAR_1)
{
 if (VAR_1->modes & VAR_0)
  FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->dev);
}

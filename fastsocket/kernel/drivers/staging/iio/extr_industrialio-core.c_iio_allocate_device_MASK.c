
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * class; int * type; } ;
struct iio_dev {int mlock; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 struct iio_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct iio_dev *FUNC_5(void)
{
 struct iio_dev *VAR_3 = FUNC_3(sizeof *VAR_3, VAR_0);

 if (VAR_3) {
  VAR_3->dev.type = &VAR_2;
  VAR_3->dev.class = &VAR_1;
  FUNC_1(&VAR_3->dev);
  FUNC_0(&VAR_3->dev, (void *)VAR_3);
  FUNC_4(&VAR_3->mlock);
  FUNC_2();
 }

 return VAR_3;
}

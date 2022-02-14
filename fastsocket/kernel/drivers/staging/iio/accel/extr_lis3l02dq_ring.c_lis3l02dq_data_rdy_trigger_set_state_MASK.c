
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lis3l02dq_state {TYPE_1__* indio_dev; } ;
struct iio_trigger {struct lis3l02dq_state* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct lis3l02dq_state*,int *) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_2,
      bool VAR_3)
{
 struct lis3l02dq_state *VAR_4 = VAR_2->private_data;
 int VAR_5 = 0;
 u8 VAR_6;
 FUNC_0(&VAR_4->indio_dev->dev,
         &VAR_1,
         VAR_3);
 if (VAR_3 == 0) {


  FUNC_1();

  VAR_5 = FUNC_2(VAR_4, ((void*)0));
 }
 FUNC_3(&VAR_4->indio_dev->dev,
     VAR_0,
     &VAR_6);
 return VAR_5;
}

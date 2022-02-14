
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * class; int * type; } ;
struct iio_trigger {int pollfunc_list; int list; int pollfunc_list_lock; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 struct iio_trigger* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct iio_trigger *FUNC_6(void)
{
 struct iio_trigger *VAR_3;
 VAR_3 = FUNC_4(sizeof *VAR_3, VAR_0);
 if (VAR_3) {
  VAR_3->dev.type = &VAR_2;
  VAR_3->dev.class = &VAR_1;
  FUNC_2(&VAR_3->dev);
  FUNC_1(&VAR_3->dev, (void *)VAR_3);
  FUNC_5(&VAR_3->pollfunc_list_lock);
  FUNC_0(&VAR_3->list);
  FUNC_0(&VAR_3->pollfunc_list);
  FUNC_3();
 }
 return VAR_3;
}

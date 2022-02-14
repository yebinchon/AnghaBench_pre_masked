
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_interrupt {int ev_list; int ev_list_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct iio_interrupt* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct iio_interrupt *FUNC_3(void)
{
 struct iio_interrupt *VAR_1 = FUNC_1(sizeof *VAR_1, VAR_0);
 if (VAR_1) {
  FUNC_2(&VAR_1->ev_list_lock);
  FUNC_0(&VAR_1->ev_list);
 }
 return VAR_1;
}

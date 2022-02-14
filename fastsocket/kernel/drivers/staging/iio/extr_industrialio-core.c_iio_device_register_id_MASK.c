
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {scalar_t__ id; } ;
struct idr {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
      struct idr *VAR_2)
{

 VAR_1->id = FUNC_0(&VAR_0);
 if (VAR_1->id < 0)
  return VAR_1->id;
 return 0;
}

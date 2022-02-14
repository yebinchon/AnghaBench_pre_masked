
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {int poll_work; } ;
struct iio_dev {struct max1363_state* dev_data; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct iio_dev *VAR_0)
{
 struct max1363_state *VAR_1 = VAR_0->dev_data;

 FUNC_0(&VAR_1->poll_work);

 return;
}

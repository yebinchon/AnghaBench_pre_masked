
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int interrupt_handler_ws; int last_timestamp; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
typedef int s64 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
         int VAR_1,
         s64 VAR_2,
         int VAR_3)
{
 struct sca3000_state *VAR_4 = VAR_0->dev_data;

 VAR_4->last_timestamp = VAR_2;
 FUNC_0(&VAR_4->interrupt_handler_ws);

 return 0;
}

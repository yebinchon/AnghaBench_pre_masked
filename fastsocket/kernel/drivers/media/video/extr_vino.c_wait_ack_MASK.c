
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_sgi_data {int ack_timeout; int (* getctrl ) (int ) ;int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i2c_algo_sgi_data*) ;

__attribute__((used)) static int FUNC_3(struct i2c_algo_sgi_data *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_2))
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2->ack_timeout; VAR_3++) {
  if ((VAR_2->getctrl(VAR_2->data) & VAR_1) == 0)
   return 0;
  FUNC_1(1);
 }

 return -VAR_0;
}

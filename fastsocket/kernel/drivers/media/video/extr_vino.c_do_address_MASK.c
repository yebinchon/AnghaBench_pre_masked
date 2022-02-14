
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_sgi_data {int (* getctrl ) (int ) ;int data; int (* wdata ) (int ,unsigned int) ;int (* setctrl ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2c_algo_sgi_data*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (struct i2c_algo_sgi_data*) ;

__attribute__((used)) static int FUNC_6(struct i2c_algo_sgi_data *VAR_4, unsigned int VAR_5,
        int VAR_6)
{
 if (VAR_6)
  VAR_4->setctrl(VAR_4->data, VAR_2);

 if (VAR_4->getctrl(VAR_4->data) & VAR_2)
  if (FUNC_0(VAR_4))
   return -VAR_0;

 VAR_4->setctrl(VAR_4->data,
        VAR_1 | VAR_3 | VAR_2);
 if (VAR_6)
  VAR_5 |= 1;
 VAR_4->wdata(VAR_4->data, VAR_5);
 if (FUNC_5(VAR_4))
  return -VAR_0;
 return 0;
}

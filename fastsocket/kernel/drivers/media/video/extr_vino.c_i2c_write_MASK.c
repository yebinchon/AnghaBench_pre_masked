
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_sgi_data {int data; int (* wdata ) (int ,unsigned char) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char) ;
 scalar_t__ FUNC_1 (struct i2c_algo_sgi_data*) ;

__attribute__((used)) static int FUNC_2(struct i2c_algo_sgi_data *VAR_1, unsigned char *VAR_2,
       unsigned int VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_1->wdata(VAR_1->data, VAR_2[VAR_4]);
  if (FUNC_1(VAR_1))
   return -VAR_0;
 }
 return 0;
}

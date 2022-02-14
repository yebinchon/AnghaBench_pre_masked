
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_sgi_data {unsigned char (* rdata ) (int ) ;int data; int (* setctrl ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct i2c_algo_sgi_data*) ;

__attribute__((used)) static int FUNC_4(struct i2c_algo_sgi_data *VAR_6, unsigned char *VAR_7,
      unsigned int VAR_8)
{
 int VAR_9;

 VAR_6->setctrl(VAR_6->data,
        VAR_2 | VAR_4 | VAR_3);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (FUNC_3(VAR_6))
   return -VAR_0;
  VAR_7[VAR_9] = VAR_6->rdata(VAR_6->data);
 }
 VAR_6->setctrl(VAR_6->data, VAR_5 | VAR_1);

 return 0;

}

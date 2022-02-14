
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int udelay; scalar_t__ timeout; int getscl; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct i2c_algo_bit_data*) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (struct i2c_algo_bit_data*,int) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_algo_bit_data *VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(VAR_3, 1);


 if (!VAR_3->getscl)
  goto done;

 VAR_4 = VAR_2;
 while (!FUNC_1(VAR_3)) {





  if (FUNC_4(VAR_2, VAR_4 + VAR_3->timeout))
   return -VAR_0;
  FUNC_0();
 }






done:
 FUNC_5(VAR_3->udelay);
 return 0;
}

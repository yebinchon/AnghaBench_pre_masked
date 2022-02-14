
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {scalar_t__ addr; } ;
struct i2c_algo_iop3xx_data {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 unsigned long FUNC_2 (struct i2c_msg*) ;
 int FUNC_3 (struct i2c_algo_iop3xx_data*,int*) ;

__attribute__((used)) static int
FUNC_4(struct i2c_algo_iop3xx_data *VAR_8,
    struct i2c_msg* VAR_9)
{
 unsigned long VAR_10 = FUNC_0(VAR_8->ioaddr + VAR_0);
 int VAR_11;
 int VAR_12;




 if (VAR_9->addr == VAR_7) {
  return -VAR_2;
 }

 FUNC_1(FUNC_2(VAR_9), VAR_8->ioaddr + VAR_1);

 VAR_10 &= ~(VAR_4 | VAR_5);
 VAR_10 |= VAR_3 | VAR_6;

 FUNC_1(VAR_10, VAR_8->ioaddr + VAR_0);
 VAR_12 = FUNC_3(VAR_8, &VAR_11);

 return VAR_12;
}

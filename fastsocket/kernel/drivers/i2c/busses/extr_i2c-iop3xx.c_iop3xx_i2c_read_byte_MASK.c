
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_iop3xx_data {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (struct i2c_algo_iop3xx_data*,int*) ;

__attribute__((used)) static int
FUNC_3(struct i2c_algo_iop3xx_data *VAR_6, char* VAR_7,
    int VAR_8)
{
 unsigned long VAR_9 = FUNC_0(VAR_6->ioaddr + VAR_0);
 int VAR_10;
 int VAR_11 = 0;

 VAR_9 &= ~VAR_2;

 if (VAR_8) {
  VAR_9 |= VAR_3 | VAR_4;
 } else {
  VAR_9 &= ~(VAR_3 | VAR_4);
 }
 VAR_9 |= VAR_5;
 FUNC_1(VAR_9, VAR_6->ioaddr + VAR_0);

 VAR_11 = FUNC_2(VAR_6, &VAR_10);

 *VAR_7 = FUNC_0(VAR_6->ioaddr + VAR_1);

 return VAR_11;
}

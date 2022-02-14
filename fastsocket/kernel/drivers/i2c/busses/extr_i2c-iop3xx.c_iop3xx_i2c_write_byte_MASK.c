
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
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (struct i2c_algo_iop3xx_data*,int*) ;

__attribute__((used)) static int
FUNC_3(struct i2c_algo_iop3xx_data *VAR_5, char VAR_6,
    int VAR_7)
{
 unsigned long VAR_8 = FUNC_0(VAR_5->ioaddr + VAR_0);
 int VAR_9;
 int VAR_10 = 0;

 FUNC_1(VAR_6, VAR_5->ioaddr + VAR_1);
 VAR_8 &= ~VAR_2;
 if (VAR_7) {
  VAR_8 |= VAR_3;
 } else {
  VAR_8 &= ~VAR_3;
 }
 VAR_8 |= VAR_4;
 FUNC_1(VAR_8, VAR_5->ioaddr + VAR_0);
 VAR_10 = FUNC_2(VAR_5, &VAR_9);

 return VAR_10;
}

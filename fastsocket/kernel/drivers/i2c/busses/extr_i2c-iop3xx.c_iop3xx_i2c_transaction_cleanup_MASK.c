
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_iop3xx_data {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct i2c_algo_iop3xx_data *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_5->ioaddr + VAR_0);

 VAR_6 &= ~(VAR_1 | VAR_4 |
  VAR_2 | VAR_3);

 FUNC_1(VAR_6, VAR_5->ioaddr + VAR_0);
}

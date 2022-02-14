
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_algo_iop3xx_data {int waitq; int SR_received; scalar_t__ ioaddr; int SR_enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_2, void *VAR_3)
{
 struct i2c_algo_iop3xx_data *VAR_4 = VAR_3;
 u32 VAR_5 = FUNC_0(VAR_4->ioaddr + VAR_1);

 if ((VAR_5 &= VAR_4->SR_enabled)) {
  FUNC_1(VAR_5, VAR_4->ioaddr + VAR_1);
  VAR_4->SR_received |= VAR_5;
  FUNC_2(&VAR_4->waitq);
 }
 return VAR_0;
}

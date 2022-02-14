
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_i2c {int interrupt; int queue; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct mpc_i2c *VAR_5 = VAR_4;
 if (FUNC_0(VAR_5->base + VAR_2) & VAR_0) {

  VAR_5->interrupt = FUNC_0(VAR_5->base + VAR_2);
  FUNC_2(0, VAR_5->base + VAR_2);
  FUNC_1(&VAR_5->queue);
 }
 return VAR_1;
}

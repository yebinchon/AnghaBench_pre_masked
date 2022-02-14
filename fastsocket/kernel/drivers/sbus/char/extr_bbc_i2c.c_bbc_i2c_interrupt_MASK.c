
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_i2c_bus {int wq; scalar_t__ i2c_control_regs; scalar_t__ waiting; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct bbc_i2c_bus *VAR_4 = VAR_3;




 if (VAR_4->waiting &&
     !(FUNC_0(VAR_4->i2c_control_regs + 0x0) & VAR_0))
  FUNC_1(&VAR_4->wq);

 return VAR_1;
}

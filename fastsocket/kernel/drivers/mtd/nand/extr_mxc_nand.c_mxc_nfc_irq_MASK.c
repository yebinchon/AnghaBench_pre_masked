
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mxc_nand_host {int irq_waitq; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct mxc_nand_host *VAR_5 = VAR_4;

 uint16_t VAR_6;

 VAR_6 = FUNC_0(VAR_5->regs + VAR_1);
 VAR_6 |= VAR_2;
 FUNC_2(VAR_6, VAR_5->regs + VAR_1);

 FUNC_1(&VAR_5->irq_waitq);

 return VAR_0;
}

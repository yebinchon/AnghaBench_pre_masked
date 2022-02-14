
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ARM_r9; } ;
typedef int dma_t ;


 int FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_0, dma_t *VAR_1)
{
 struct pt_regs VAR_2;
 FUNC_0(&VAR_2);
 return VAR_2.ARM_r9;
}

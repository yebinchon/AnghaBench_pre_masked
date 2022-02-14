
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_reg {int M24_MacControl; } ;
struct hw_data {int CurrentRadioSw; scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;


 int FUNC_0 (struct hw_data*,int,int) ;

__attribute__((used)) static void FUNC_1(struct hw_data *VAR_0, unsigned char VAR_1)
{
 struct wb35_reg *VAR_2 = &VAR_0->reg;

 if (VAR_0->SurpriseRemove)
  return;

 if (VAR_1)
 {
  VAR_0->CurrentRadioSw = 1;
  VAR_2->M24_MacControl &= 0xffffffbf;
 } else {
  VAR_0->CurrentRadioSw = 0;
  VAR_2->M24_MacControl |= 0x00000040;
 }
 FUNC_0(VAR_0, 0x0824, VAR_2->M24_MacControl);
}

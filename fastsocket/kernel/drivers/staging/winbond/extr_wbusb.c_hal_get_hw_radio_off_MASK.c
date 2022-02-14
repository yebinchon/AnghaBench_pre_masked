
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wb35_reg {int U1B0; } ;
struct hw_data {int CurrentRadioHw; scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;


 int FUNC_0 (struct hw_data*,int,int*) ;

__attribute__((used)) static u8 FUNC_1(struct hw_data * VAR_0)
{
 struct wb35_reg *VAR_1 = &VAR_0->reg;

 if (VAR_0->SurpriseRemove)
  return 1;


 FUNC_0(VAR_0, 0x3b0, &VAR_1->U1B0);
 if ((VAR_1->U1B0 & 0x00010000)) {
  VAR_0->CurrentRadioHw = 1;
  return 1;
 } else {
  VAR_0->CurrentRadioHw = 0;
  return 0;
 }
}

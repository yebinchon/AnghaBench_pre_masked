
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wb35_reg {int M00_MacControl; } ;
struct hw_data {scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;


 int FUNC_0 (struct hw_data*,int,int) ;

__attribute__((used)) static void FUNC_1(struct hw_data *VAR_0, u8 VAR_1)
{
 struct wb35_reg *VAR_2 = &VAR_0->reg;

 if (VAR_0->SurpriseRemove)
  return;

 VAR_2->M00_MacControl &= ~0x02000000;

 if (VAR_1)
  VAR_2->M00_MacControl |= 0x02000000;

 FUNC_0(VAR_0, 0x0800, VAR_2->M00_MacControl);
}

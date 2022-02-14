
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adc_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct adc_device*,char*,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct adc_device *VAR_3)
{
 FUNC_0(VAR_3, "CON=%08x, TSC=%08x, DLY=%08x\n",
  FUNC_1(VAR_3->regs + VAR_0),
  FUNC_1(VAR_3->regs + VAR_2),
  FUNC_1(VAR_3->regs + VAR_1));
}

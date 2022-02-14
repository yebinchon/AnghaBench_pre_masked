
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_state {void* psp; void* to; void* cr1; void* cr0; } ;
struct ssp_device {scalar_t__ mmio_base; } ;
struct ssp_dev {struct ssp_device* ssp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ssp_dev*) ;

void FUNC_2(struct ssp_dev *VAR_4, struct ssp_state *VAR_5)
{
 struct ssp_device *VAR_6 = VAR_4->ssp;

 VAR_5->cr0 = FUNC_0(VAR_6->mmio_base + VAR_0);
 VAR_5->cr1 = FUNC_0(VAR_6->mmio_base + VAR_1);
 VAR_5->to = FUNC_0(VAR_6->mmio_base + VAR_3);
 VAR_5->psp = FUNC_0(VAR_6->mmio_base + VAR_2);

 FUNC_1(VAR_4);
}

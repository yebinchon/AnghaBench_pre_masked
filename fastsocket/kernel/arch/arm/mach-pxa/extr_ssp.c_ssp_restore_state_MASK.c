
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ssp_state {int cr0; int cr1; int to; int psp; } ;
struct ssp_device {scalar_t__ mmio_base; } ;
struct ssp_dev {struct ssp_device* ssp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct ssp_dev *VAR_9, struct ssp_state *VAR_10)
{
 struct ssp_device *VAR_11 = VAR_9->ssp;
 uint32_t VAR_12 = VAR_6 | VAR_7 | VAR_5;

 FUNC_0(VAR_12, VAR_11->mmio_base + VAR_4);

 FUNC_0(VAR_10->cr0 & ~VAR_1, VAR_11->mmio_base + VAR_0);
 FUNC_0(VAR_10->cr1, VAR_11->mmio_base + VAR_2);
 FUNC_0(VAR_10->to, VAR_11->mmio_base + VAR_8);
 FUNC_0(VAR_10->psp, VAR_11->mmio_base + VAR_3);
 FUNC_0(VAR_10->cr0, VAR_11->mmio_base + VAR_0);
}

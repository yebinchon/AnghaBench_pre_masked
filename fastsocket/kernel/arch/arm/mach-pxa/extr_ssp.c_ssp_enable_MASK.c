
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ssp_device {scalar_t__ mmio_base; } ;
struct ssp_dev {struct ssp_device* ssp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct ssp_dev *VAR_2)
{
 struct ssp_device *VAR_3 = VAR_2->ssp;
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_3->mmio_base + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_4, VAR_3->mmio_base + VAR_0);
}

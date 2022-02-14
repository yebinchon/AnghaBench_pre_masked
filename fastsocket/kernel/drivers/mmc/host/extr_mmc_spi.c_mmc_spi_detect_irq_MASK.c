
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mmc_spi_host {TYPE_1__* pdata; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int detect_delay; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ) ;
 struct mmc_spi_host* FUNC_2 (void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_1, void *VAR_2)
{
 struct mmc_spi_host *VAR_3 = FUNC_2(VAR_2);
 u16 VAR_4 = FUNC_0(VAR_3->pdata->detect_delay, (u16)100);

 FUNC_1(VAR_2, FUNC_3(VAR_4));
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int f_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_1 (struct tmio_mmc_host*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_2, int VAR_3)
{
 u32 VAR_4 = 0, VAR_5;

 if (VAR_3) {
  for (VAR_5 = VAR_2->mmc->f_min, VAR_4 = 0x80000080;
   VAR_3 >= (VAR_5<<1); VAR_4 >>= 1)
   VAR_5 <<= 1;
  VAR_4 |= 0x100;
 }

 FUNC_0(VAR_2, VAR_0, VAR_4 >> 22);
 FUNC_1(VAR_2, VAR_1, VAR_4 & 0x1ff);
}

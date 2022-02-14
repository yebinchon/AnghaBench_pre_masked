
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {int IO_ADDR_R; } ;
struct fsl_upm_nand {TYPE_1__ chip; } ;


 int FUNC_0 (int ) ;
 struct fsl_upm_nand* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static uint8_t FUNC_2(struct mtd_info *VAR_0)
{
 struct fsl_upm_nand *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->chip.IO_ADDR_R);
}


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

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 struct fsl_upm_nand *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_1[VAR_4] = FUNC_0(VAR_3->chip.IO_ADDR_R);
}

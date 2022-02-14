
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {int IO_ADDR_W; } ;
struct fsl_upm_nand {int wait_flags; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsl_upm_nand*) ;
 int FUNC_1 (int ,int const) ;
 struct fsl_upm_nand* FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
 struct fsl_upm_nand *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_1(VAR_5->chip.IO_ADDR_W, VAR_3[VAR_6]);
  if (VAR_5->wait_flags & VAR_1)
   FUNC_0(VAR_5);
 }
 if (VAR_5->wait_flags & VAR_0)
  FUNC_0(VAR_5);
}

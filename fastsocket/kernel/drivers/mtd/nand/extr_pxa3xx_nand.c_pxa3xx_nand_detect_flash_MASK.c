
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pxa3xx_nand_platform_data {int num_flash; struct pxa3xx_nand_flash* flash; scalar_t__ keep_config; } ;
struct pxa3xx_nand_info {TYPE_1__* pdev; } ;
struct pxa3xx_nand_flash {scalar_t__ chip_id; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct pxa3xx_nand_flash**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct pxa3xx_nand_info*,scalar_t__*) ;
 struct pxa3xx_nand_flash** VAR_1 ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pxa3xx_nand_info*,struct pxa3xx_nand_flash const*) ;
 scalar_t__ FUNC_4 (struct pxa3xx_nand_info*) ;

__attribute__((used)) static int FUNC_5(struct pxa3xx_nand_info *VAR_2,
        const struct pxa3xx_nand_platform_data *VAR_3)
{
 const struct pxa3xx_nand_flash *VAR_4;
 uint32_t VAR_5 = -1;
 int VAR_6;

 if (VAR_3->keep_config)
  if (FUNC_4(VAR_2) == 0)
   return 0;

 for (VAR_6 = 0; VAR_6<VAR_3->num_flash; ++VAR_6) {
  VAR_4 = VAR_3->flash + VAR_6;

  if (FUNC_3(VAR_2, VAR_4))
   continue;

  if (FUNC_1(VAR_2, &VAR_5))
   continue;

  if (VAR_5 == VAR_4->chip_id)
   return 0;
 }
 FUNC_2(&VAR_2->pdev->dev,
   "failed to detect configured nand flash; found %04x instead of\n",
   VAR_5);
 return -VAR_0;
}

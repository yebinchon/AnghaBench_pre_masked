
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_upm_nand {scalar_t__* rnb_gpio; size_t mchip_number; int dev; int mtd; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct fsl_upm_nand *VAR_0)
{
 if (VAR_0->rnb_gpio[VAR_0->mchip_number] >= 0) {
  int VAR_1 = 1000000;

  while (--VAR_1 && !FUNC_2(&VAR_0->mtd))
   FUNC_0();
  if (!VAR_1)
   FUNC_1(VAR_0->dev, "tired waiting for RNB\n");
 } else {
  FUNC_3(100);
 }
}

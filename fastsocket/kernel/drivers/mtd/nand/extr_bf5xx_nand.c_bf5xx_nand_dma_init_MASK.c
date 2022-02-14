
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bf5xx_nand_info {int device; int dma_completion; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,struct bf5xx_nand_info*) ;

__attribute__((used)) static int FUNC_8(struct bf5xx_nand_info *VAR_3)
{
 int VAR_4;


 if (!VAR_2)
  return 0;

 FUNC_5(&VAR_3->dma_completion);


 VAR_4 = FUNC_6(VAR_0, "BF5XX NFC driver");
 if (VAR_4 < 0) {
  FUNC_3(VAR_3->device, " unable to get DMA channel\n");
  return VAR_4;
 }







 FUNC_7(VAR_0, VAR_1, VAR_3);


 FUNC_4(VAR_0);
 return 0;
}

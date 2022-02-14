
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa3xx_nand_timing {void* tAR; void* tWHR; void* tR; void* tRP; void* tRH; void* tWP; void* tWH; void* tCS; void* tCH; } ;
struct pxa3xx_nand_info {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 void* FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct pxa3xx_nand_info*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct pxa3xx_nand_info *VAR_2,
          struct pxa3xx_nand_timing *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2->clk);
 uint32_t VAR_5 = FUNC_2(VAR_2, VAR_0);
 uint32_t VAR_6 = FUNC_2(VAR_2, VAR_1);

 VAR_3->tCH = FUNC_1(FUNC_4(VAR_5), VAR_4);
 VAR_3->tCS = FUNC_1(FUNC_5(VAR_5), VAR_4);
 VAR_3->tWH = FUNC_1(FUNC_10(VAR_5), VAR_4);
 VAR_3->tWP = FUNC_1(FUNC_11(VAR_5), VAR_4);
 VAR_3->tRH = FUNC_1(FUNC_6(VAR_5), VAR_4);
 VAR_3->tRP = FUNC_1(FUNC_7(VAR_5), VAR_4);

 VAR_3->tR = FUNC_1(FUNC_8(VAR_6), VAR_4);
 VAR_3->tWHR = FUNC_1(FUNC_9(VAR_6), VAR_4);
 VAR_3->tAR = FUNC_1(FUNC_3(VAR_6), VAR_4);
}

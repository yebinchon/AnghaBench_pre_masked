
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa3xx_nand_timing {int tAR; int tWHR; int tR; int tRP; int tRH; int tWP; int tWH; int tCS; int tCH; } ;
struct pxa3xx_nand_info {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 unsigned long FUNC_9 (int ) ;
 int FUNC_10 (struct pxa3xx_nand_info*,int ,int) ;
 int FUNC_11 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct pxa3xx_nand_info *VAR_2,
       const struct pxa3xx_nand_timing *VAR_3)
{
 unsigned long VAR_4 = FUNC_9(VAR_2->clk);
 uint32_t VAR_5, VAR_6;

 VAR_5 = FUNC_0(FUNC_11(VAR_3->tCH, VAR_4)) |
  FUNC_1(FUNC_11(VAR_3->tCS, VAR_4)) |
  FUNC_4(FUNC_11(VAR_3->tWH, VAR_4)) |
  FUNC_5(FUNC_11(VAR_3->tWP, VAR_4)) |
  FUNC_2(FUNC_11(VAR_3->tRH, VAR_4)) |
  FUNC_3(FUNC_11(VAR_3->tRP, VAR_4));

 VAR_6 = FUNC_7(FUNC_11(VAR_3->tR, VAR_4)) |
  FUNC_8(FUNC_11(VAR_3->tWHR, VAR_4)) |
  FUNC_6(FUNC_11(VAR_3->tAR, VAR_4));

 FUNC_10(VAR_2, VAR_0, VAR_5);
 FUNC_10(VAR_2, VAR_1, VAR_6);
}

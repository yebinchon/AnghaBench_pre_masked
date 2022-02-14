
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_mtd {int mtd_count; struct s3c2410_nand_mtd* area; int * regs; int * clk; struct s3c2410_nand_mtd* mtds; int mtd; } ;
struct s3c2410_nand_info {int mtd_count; struct s3c2410_nand_info* area; int * regs; int * clk; struct s3c2410_nand_info* mtds; int mtd; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct s3c2410_nand_mtd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct s3c2410_nand_mtd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,int *) ;
 int FUNC_8 (char*,int,struct s3c2410_nand_mtd*) ;
 int FUNC_9 (struct s3c2410_nand_mtd*) ;
 int FUNC_10 (struct s3c2410_nand_mtd*) ;
 struct s3c2410_nand_mtd* FUNC_11 (struct platform_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_0)
{
 struct s3c2410_nand_info *VAR_1 = FUNC_11(VAR_0);

 FUNC_7(VAR_0, ((void*)0));

 if (VAR_1 == ((void*)0))
  return 0;

 FUNC_10(VAR_1);





 if (VAR_1->mtds != ((void*)0)) {
  struct s3c2410_nand_mtd *VAR_2 = VAR_1->mtds;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->mtd_count; VAR_3++, VAR_2++) {
   FUNC_8("releasing mtd %d (%p)\n", VAR_3, VAR_2);
   FUNC_6(&VAR_2->mtd);
  }

  FUNC_5(VAR_1->mtds);
 }



 if (VAR_1->clk != ((void*)0) && !FUNC_0(VAR_1->clk)) {
  if (!FUNC_1(VAR_1))
   FUNC_2(VAR_1->clk);
  FUNC_3(VAR_1->clk);
 }

 if (VAR_1->regs != ((void*)0)) {
  FUNC_4(VAR_1->regs);
  VAR_1->regs = ((void*)0);
 }

 if (VAR_1->area != ((void*)0)) {
  FUNC_9(VAR_1->area);
  FUNC_5(VAR_1->area);
  VAR_1->area = ((void*)0);
 }

 FUNC_5(VAR_1);

 return 0;
}

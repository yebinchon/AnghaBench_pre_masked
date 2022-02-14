
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct s3c2410_nand_info {scalar_t__ regs; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct s3c2410_nand_info* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int const,scalar_t__) ;
 int FUNC_2 (scalar_t__,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_1, const u_char *VAR_2, int VAR_3)
{
 struct s3c2410_nand_info *VAR_4 = FUNC_0(VAR_1);

 FUNC_2(VAR_4->regs + VAR_0, VAR_2, VAR_3 >> 2);


 if (VAR_3 & 3) {
  VAR_2 += VAR_3 & ~3;

  for (; VAR_3 & 3; VAR_3--, VAR_2++)
   FUNC_1(*VAR_2, VAR_4->regs + VAR_0);
 }
}

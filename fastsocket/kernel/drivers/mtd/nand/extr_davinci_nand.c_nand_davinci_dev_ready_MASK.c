
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct davinci_nand_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct davinci_nand_info*,int ) ;
 struct davinci_nand_info* FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1)
{
 struct davinci_nand_info *VAR_2 = FUNC_2(VAR_1);

 return FUNC_1(VAR_2, VAR_0) & FUNC_0(0);
}

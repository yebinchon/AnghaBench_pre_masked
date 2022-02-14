
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtd_info {int dummy; } ;
struct davinci_nand_info {int core_chipsel; int is_readmode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct davinci_nand_info*,int ) ;
 int FUNC_2 (struct davinci_nand_info*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct davinci_nand_info* FUNC_5 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_3, int VAR_4)
{
 struct davinci_nand_info *VAR_5 = FUNC_5(VAR_3);
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_3(&VAR_2, VAR_6);


 VAR_7 = FUNC_1(VAR_5, VAR_0);
 VAR_7 &= ~(0x03 << 4);
 VAR_7 |= (VAR_5->core_chipsel << 4) | FUNC_0(12);
 FUNC_2(VAR_5, VAR_0, VAR_7);

 VAR_5->is_readmode = (VAR_4 == VAR_1);

 FUNC_4(&VAR_2, VAR_6);
}

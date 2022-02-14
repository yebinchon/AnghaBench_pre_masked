
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_info {int dummy; } ;
struct bf5xx_nand_platform {short page_size; } ;
struct bf5xx_nand_info {int device; struct bf5xx_nand_platform* platform; } ;


 int FUNC_0 (struct mtd_info*,int *,int ) ;
 int FUNC_1 (struct mtd_info*,int const*,int) ;
 int FUNC_2 (int ,char*,struct mtd_info*,int const*,int) ;
 struct bf5xx_nand_info* FUNC_3 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_0,
    const uint8_t *VAR_1, int VAR_2)
{
 struct bf5xx_nand_info *VAR_3 = FUNC_3(VAR_0);
 struct bf5xx_nand_platform *VAR_4 = VAR_3->platform;
 unsigned short VAR_5 = (VAR_4->page_size ? 512 : 256);

 FUNC_2(VAR_3->device, "mtd->%p, buf->%p, len %d\n", VAR_0, VAR_1, VAR_2);

 if (VAR_2 == VAR_5)
  FUNC_0(VAR_0, (uint8_t *)VAR_1, 0);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}

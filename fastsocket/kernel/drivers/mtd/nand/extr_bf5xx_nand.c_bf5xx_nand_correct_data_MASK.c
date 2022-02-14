
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int dummy; } ;
struct bf5xx_nand_platform {short page_size; } ;
struct bf5xx_nand_info {struct bf5xx_nand_platform* platform; } ;


 int FUNC_0 (struct mtd_info*,int *,int *,int *) ;
 struct bf5xx_nand_info* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, u_char *VAR_1,
     u_char *VAR_2, u_char *VAR_3)
{
 struct bf5xx_nand_info *VAR_4 = FUNC_1(VAR_0);
 struct bf5xx_nand_platform *VAR_5 = VAR_4->platform;
 unsigned short VAR_6 = (VAR_5->page_size ? 512 : 256);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);


 if (VAR_6 == 512) {
  VAR_1 += 256;
  VAR_2 += 8;
  VAR_3 += 8;
  VAR_7 |= FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }

 return VAR_7;
}

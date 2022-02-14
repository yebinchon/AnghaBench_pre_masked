
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct mtd_info {int dummy; } ;
struct davinci_nand_info {scalar_t__ is_readmode; } ;


 int VAR_0 ;
 int FUNC_0 (struct davinci_nand_info*,int ) ;
 int FUNC_1 (struct davinci_nand_info*,int*) ;
 struct davinci_nand_info* FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1,
  const u_char *VAR_2, u_char *VAR_3)
{
 struct davinci_nand_info *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5[4], *VAR_6;
 unsigned VAR_7;






 if (VAR_4->is_readmode) {
  FUNC_0(VAR_4, VAR_0);
  return 0;
 }






 FUNC_1(VAR_4, VAR_5);
 for (VAR_7 = 0, VAR_6 = VAR_5; VAR_7 < 2; VAR_7++, VAR_6 += 2) {
  *VAR_3++ = VAR_6[0] & 0xff;
  *VAR_3++ = ((VAR_6[0] >> 8) & 0x03) | ((VAR_6[0] >> 14) & 0xfc);
  *VAR_3++ = ((VAR_6[0] >> 22) & 0x0f) | ((VAR_6[1] << 4) & 0xf0);
  *VAR_3++ = ((VAR_6[1] >> 4) & 0x3f) | ((VAR_6[1] >> 10) & 0xc0);
  *VAR_3++ = (VAR_6[1] >> 18) & 0xff;
 }

 return 0;
}

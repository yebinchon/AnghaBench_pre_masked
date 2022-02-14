
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pxa3xx_nand_info {int buf_start; int buf_count; scalar_t__ data_buff; } ;
struct mtd_info {struct pxa3xx_nand_info* priv; } ;



__attribute__((used)) static u16 FUNC_0(struct mtd_info *VAR_0)
{
 struct pxa3xx_nand_info *VAR_1 = VAR_0->priv;
 u16 VAR_2 = 0xFFFF;

 if (!(VAR_1->buf_start & 0x01) && VAR_1->buf_start < VAR_1->buf_count) {
  VAR_2 = *((u16 *)(VAR_1->data_buff+VAR_1->buf_start));
  VAR_1->buf_start += 2;
 }
 return VAR_2;
}

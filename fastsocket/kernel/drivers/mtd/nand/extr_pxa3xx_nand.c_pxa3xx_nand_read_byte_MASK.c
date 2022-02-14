
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct pxa3xx_nand_info {scalar_t__ buf_start; scalar_t__ buf_count; char* data_buff; } ;
struct mtd_info {struct pxa3xx_nand_info* priv; } ;



__attribute__((used)) static uint8_t FUNC_0(struct mtd_info *VAR_0)
{
 struct pxa3xx_nand_info *VAR_1 = VAR_0->priv;
 char VAR_2 = 0xFF;

 if (VAR_1->buf_start < VAR_1->buf_count)

  VAR_2 = VAR_1->data_buff[VAR_1->buf_start++];

 return VAR_2;
}

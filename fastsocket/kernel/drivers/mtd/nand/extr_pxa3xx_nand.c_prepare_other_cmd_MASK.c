
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct pxa3xx_nand_info {int ndcb0; int data_size; scalar_t__ ndcb2; scalar_t__ ndcb1; TYPE_1__* flash_info; } ;
struct pxa3xx_nand_cmdset {int read_id; int read_status; int reset; int lock; int unlock; } ;
struct TYPE_2__ {struct pxa3xx_nand_cmdset* cmdset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pxa3xx_nand_info *VAR_2, uint16_t VAR_3)
{
 const struct pxa3xx_nand_cmdset *VAR_4 = VAR_2->flash_info->cmdset;

 VAR_2->ndcb0 = VAR_3 | ((VAR_3 & 0xff00) ? VAR_1 : 0);
 VAR_2->ndcb1 = 0;
 VAR_2->ndcb2 = 0;

 if (VAR_3 == VAR_4->read_id) {
  VAR_2->ndcb0 |= FUNC_0(3);
  VAR_2->data_size = 8;
 } else if (VAR_3 == VAR_4->read_status) {
  VAR_2->ndcb0 |= FUNC_0(4);
  VAR_2->data_size = 8;
 } else if (VAR_3 == VAR_4->reset || VAR_3 == VAR_4->lock ||
     VAR_3 == VAR_4->unlock) {
  VAR_2->ndcb0 |= FUNC_0(5);
 } else
  return -VAR_0;

 return 0;
}

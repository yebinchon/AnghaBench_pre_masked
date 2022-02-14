
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pxa3xx_nand_info {int ndcb0; int ndcb1; scalar_t__ ndcb2; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pxa3xx_nand_info *VAR_2,
   uint16_t VAR_3, int VAR_4)
{
 VAR_2->ndcb0 = VAR_3 | ((VAR_3 & 0xff00) ? VAR_1 : 0);
 VAR_2->ndcb0 |= FUNC_1(2) | VAR_0 | FUNC_0(3);
 VAR_2->ndcb1 = VAR_4;
 VAR_2->ndcb2 = 0;
 return 0;
}

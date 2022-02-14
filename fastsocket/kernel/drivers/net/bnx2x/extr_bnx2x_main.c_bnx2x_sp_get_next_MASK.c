
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_spe {int dummy; } ;
struct bnx2x {scalar_t__ spq_prod_idx; struct eth_spe* spq_prod_bd; struct eth_spe* spq; struct eth_spe* spq_last_bd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static struct eth_spe *FUNC_1(struct bnx2x *VAR_1)
{
 struct eth_spe *VAR_2 = VAR_1->spq_prod_bd;

 if (VAR_1->spq_prod_bd == VAR_1->spq_last_bd) {
  VAR_1->spq_prod_bd = VAR_1->spq;
  VAR_1->spq_prod_idx = 0;
  FUNC_0(VAR_0, "end of spq\n");
 } else {
  VAR_1->spq_prod_bd++;
  VAR_1->spq_prod_idx++;
 }
 return VAR_2;
}

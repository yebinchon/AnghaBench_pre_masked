
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {scalar_t__ spq_prod_bd; scalar_t__ spq_last_bd; scalar_t__ spq; int dsb_sp_prod; scalar_t__ spq_prod_idx; int cq_spq_left; int spq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_3)
{
 FUNC_1(&VAR_3->spq_lock);
 FUNC_0(&VAR_3->cq_spq_left, VAR_1);

 VAR_3->spq_prod_idx = 0;
 VAR_3->dsb_sp_prod = VAR_0;
 VAR_3->spq_prod_bd = VAR_3->spq;
 VAR_3->spq_last_bd = VAR_3->spq_prod_bd + VAR_2;
}

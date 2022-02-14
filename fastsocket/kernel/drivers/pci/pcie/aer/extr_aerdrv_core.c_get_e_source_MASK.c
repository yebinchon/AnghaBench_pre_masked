
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aer_rpc {size_t prod_idx; size_t cons_idx; int e_lock; struct aer_err_source* e_sources; } ;
struct aer_err_source {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct aer_rpc *VAR_1, struct aer_err_source *VAR_2)
{
 unsigned long VAR_3;


 FUNC_0(&VAR_1->e_lock, VAR_3);
 if (VAR_1->prod_idx == VAR_1->cons_idx) {
  FUNC_1(&VAR_1->e_lock, VAR_3);
  return 0;
 }

 *VAR_2 = VAR_1->e_sources[VAR_1->cons_idx];
 VAR_1->cons_idx++;
 if (VAR_1->cons_idx == VAR_0)
  VAR_1->cons_idx = 0;
 FUNC_1(&VAR_1->e_lock, VAR_3);

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ read_ptr; scalar_t__ write_ptr; } ;
struct iwl_txq {int stuck_timer; TYPE_1__ q; } ;
struct iwl_trans_pcie {scalar_t__ wd_timeout; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_trans_pcie *VAR_1,
        struct iwl_txq *VAR_2)
{
 if (!VAR_1->wd_timeout)
  return;





 if (VAR_2->q.read_ptr == VAR_2->q.write_ptr)
  FUNC_0(&VAR_2->stuck_timer);
 else
  FUNC_1(&VAR_2->stuck_timer, VAR_0 + VAR_1->wd_timeout);
}

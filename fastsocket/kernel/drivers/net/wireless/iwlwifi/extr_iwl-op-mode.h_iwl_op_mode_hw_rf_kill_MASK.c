
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_op_mode {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* hw_rf_kill ) (struct iwl_op_mode*,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct iwl_op_mode*,int) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_op_mode *VAR_0,
       bool VAR_1)
{
 FUNC_0();
 VAR_0->ops->hw_rf_kill(VAR_0, VAR_1);
}

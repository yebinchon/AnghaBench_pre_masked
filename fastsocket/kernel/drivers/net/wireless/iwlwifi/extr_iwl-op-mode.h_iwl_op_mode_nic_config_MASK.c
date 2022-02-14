
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_op_mode {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* nic_config ) (struct iwl_op_mode*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct iwl_op_mode*) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_op_mode *VAR_0)
{
 FUNC_0();
 VAR_0->ops->nic_config(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_config {int op_mode; } ;
struct iwl_trans {TYPE_1__* ops; int op_mode; } ;
struct TYPE_2__ {int (* configure ) (struct iwl_trans*,struct iwl_trans_config const*) ;} ;


 int FUNC_0 (struct iwl_trans*,struct iwl_trans_config const*) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_trans *VAR_0,
           const struct iwl_trans_config *VAR_1)
{
 VAR_0->op_mode = VAR_1->op_mode;

 VAR_0->ops->configure(VAR_0, VAR_1);
}

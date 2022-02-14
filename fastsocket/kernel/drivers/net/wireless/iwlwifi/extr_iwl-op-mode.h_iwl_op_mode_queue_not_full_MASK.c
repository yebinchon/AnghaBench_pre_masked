
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_op_mode {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* queue_not_full ) (struct iwl_op_mode*,int) ;} ;


 int FUNC_0 (struct iwl_op_mode*,int) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_op_mode *VAR_0,
           int VAR_1)
{
 VAR_0->ops->queue_not_full(VAR_0, VAR_1);
}

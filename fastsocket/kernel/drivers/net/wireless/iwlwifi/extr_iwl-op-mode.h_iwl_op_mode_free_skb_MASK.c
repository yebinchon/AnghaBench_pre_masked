
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_op_mode {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free_skb ) (struct iwl_op_mode*,struct sk_buff*) ;} ;


 int FUNC_0 (struct iwl_op_mode*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_op_mode *VAR_0,
     struct sk_buff *VAR_1)
{
 VAR_0->ops->free_skb(VAR_0, VAR_1);
}

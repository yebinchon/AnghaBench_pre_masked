
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_priv {TYPE_1__* hw; } ;
struct iwl_op_mode {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 struct iwl_priv* FUNC_0 (struct iwl_op_mode*) ;
 struct sk_buff* FUNC_1 (int ,int) ;

__attribute__((used)) static struct sk_buff*
FUNC_2(struct iwl_op_mode *VAR_0, int VAR_1)
{
 struct iwl_priv *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2->hw->wiphy, VAR_1);
}

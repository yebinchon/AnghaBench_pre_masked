
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_priv {TYPE_1__* hw; } ;
struct iwl_op_mode {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 struct iwl_priv* FUNC_0 (struct iwl_op_mode*) ;
 struct sk_buff* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct iwl_op_mode *VAR_1,
      int VAR_2)
{
 struct iwl_priv *VAR_3 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3->hw->wiphy, VAR_2,
       VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int * contexts; } ;
typedef enum iwl_rxon_context_id { ____Placeholder_iwl_rxon_context_id } iwl_rxon_context_id ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct iwl_priv *VAR_0,
        enum iwl_rxon_context_id VAR_1)
{
 return FUNC_0(&VAR_0->contexts[VAR_1]);
}

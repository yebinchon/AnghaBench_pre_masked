
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {int rxon_cmd; } ;
struct iwl_rxon_cmd {int filter_flags; } ;
struct iwl_priv {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,int ,int ,int,struct iwl_rxon_cmd*) ;

__attribute__((used)) static int FUNC_2(struct iwl_priv *VAR_2,
         struct iwl_rxon_context *VAR_3,
         struct iwl_rxon_cmd *VAR_4)
{
 __le32 VAR_5 = VAR_4->filter_flags;
 int VAR_6;

 VAR_4->filter_flags &= ~VAR_1;
 VAR_6 = FUNC_1(VAR_2, VAR_3->rxon_cmd,
    VAR_0, sizeof(*VAR_4), VAR_4);

 VAR_4->filter_flags = VAR_5;

 if (VAR_6)
  FUNC_0(VAR_2,
   "Error clearing ASSOC_MSK on BSS (%d)\n", VAR_6);

 return VAR_6;
}
